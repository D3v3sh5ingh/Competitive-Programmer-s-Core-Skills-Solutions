#include <bits/stdc++.h>
#define lint long long int
using namespace std;



int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);
    
    lint n;
    cin >> n;
    lint max=100007;
    lint arr[max];
    lint range=-100007;
    memset(arr,0,sizeof(arr));
    while(n--){
        lint l,r;
        cin>>l>>r;
        arr[l-1]++;
        arr[r]--;
        if(r>range){range=r;}
    }
    for(int i=1;i<=range;i++){
        arr[i]+=arr[i-1];
    }
    for(int i=0;i<=range;i++){
        if(arr[i])cout<<i+1<<" "<< arr[i]<<endl;
    }
    
    return 0;
}
