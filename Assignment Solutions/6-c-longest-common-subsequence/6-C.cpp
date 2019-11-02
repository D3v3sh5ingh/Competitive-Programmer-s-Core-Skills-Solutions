#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;
	int *array1 = new int[n];
	int *array2 = new int[n];
	for(int i = 0; i < n; i++) {
		cin>>array1[i];
	}
	for(int i = 0; i < n; i++) {
		cin>>array2[i];
	}
	
	int **matrix = new int*[n+1];
	for(int i = 0; i <= n; i++) {
		matrix[i] = new int[n+1];
		for(int j = 0; j <= n; j++) {
			matrix[i][j] = 0;
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(array1[i-1] == array2[j-1]) {

				matrix[i][j] = matrix[i-1][j-1] + 1;
			} else {
				matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
			}
		}
	}
	int *lcs = new int[matrix[n][n]];
	int count = matrix[n][n];
    cout<<count<<endl;
	int i = n, j = n;
	while(count > 0) {
		if(matrix[i-1][j] == matrix[i][j]) {
			// Value came from smaller array1
			i--;
		} else if(matrix[i][j-1] == matrix[i][j]) {
			// Value came from smaller array2
			j--;
		} else {
			// Value came from the letter at the current index
			lcs[count-1] = array1[i-1];
			i--;
			j--;
			count--;
		}
	}
    int ind=0;
	for(int i = 0; i < n; i++) {
		if(array1[i]==lcs[ind]){
            cout<<i<<" ";
            ind++;
        }
	}
    cout<<endl;
    ind=0;
    for(int i = 0; i < n; i++) {
		if(array2[i]==lcs[ind]){
            cout<<i<<" ";
            ind++;
        }
	}
    
    cout<<endl;
    return 0;
}