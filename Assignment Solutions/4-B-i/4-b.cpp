#include <bits/stdc++.h>
#define lint long long int
using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    
    lint n;
    cin >> n;
    lint arr[n+1];
    cin>>arr[1];
    lint maxI,minI;
    maxI=minI=1;
    lint maxv,minv;
    maxv=minv=arr[1];
    cout<<minI<<" "<<maxI<<endl;
    for(int i=2;i<=n;i++){
        cin>>arr[i];
        if(arr[i]<minv){
            minv=arr[i];
            minI=i;
        }
        if(arr[i]>maxv){
            maxv=arr[i];
            maxI=i;
        }
        if(minI<maxI){
        cout<<minI<<" "<<maxI<<endl;
        }
        else{
        cout<<maxI<<" "<<minI<<endl;
            
        }
    }
    
    return 0;
}
