
using namespace std;
#include <bits/stdc++.h>
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,max_ele,count,index,flag;
    int A[101];
    //while(cin>>n){
    	//input
    	cin>>n;
    	for(i=0;i<n;i++){
    		cin>>A[i];
    	}
    	//compute
    	max_ele = -1;
    	for(i=0;i<n;i++){
    		if(A[i]>max_ele){
    			max_ele = A[i];
    			count = 1;
    			index = i;
    		}
    		else if(A[i] == max_ele){
    			count++;
    			if(count==3){
    				index = i;
    			}
    		}
    	}
    	//output
        flag=0;
        if(index!=0){
            cout<<A[0];
            flag=1;
        }
    	for(i=1;i<n;i++){ 
    		if(i!=index){
                if(!flag) flag=1;
                else cout<<" ";
                cout<<A[i];
            }
    	}
    	cout<<"\n";
    //} 
	return 0;
}
