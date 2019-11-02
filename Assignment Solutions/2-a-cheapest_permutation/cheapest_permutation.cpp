using namespace std;
#include <bits/stdc++.h>
int n;
int arr[9]={1,2,3,4,5,6,7,8,9};
int result[9]={0,0,0,0,0,0,0,0,0};
int mat[9][9];
int find_cost(){
	int cost=0;
	for(int i=0;i<(n-1);i++){
		cost+=mat[arr[i]-1][arr[i+1]-1];
	}
	return cost;
}
void get_result(){
	for(int i=0;i<n;i++){
		result[i] = arr[i];
	}
}
void print_result(){
	for(int i=0;i<n;i++)
		cout<<result[i]<<" ";
	cout<<"\n";
}
void process(){
	int mincost = 10000;
	int cost = 0;
	do{
		cost = find_cost();
		if(cost<mincost) {
			mincost = cost;
			get_result();
		}
	}while(next_permutation(arr,arr+n));
	//cout<<mincost<<"\n";
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>n){
    	for(int i=0;i<n;i++)
    		for(int j=0;j<n;j++)
    			cin>>mat[i][j];
    	process();
    	print_result();
    }
	return 0;
} 

