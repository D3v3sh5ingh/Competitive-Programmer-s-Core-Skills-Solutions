#include <bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long double r=0,t;
    for(int i=0;i<n;i++){
        cin>>t;
        r+=t+(1/t); 
    }
    cout<<setprecision(11)<<r<<endl;
	return 0;
}
