using namespace std;
#include <bits/stdc++.h>
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 	string s;
 	int l,flag;
	cin>>s;
 	l = s.length();
 	flag=0;
 	for(auto x:s){
 		if(x!='9'){
 			flag=1;
 			break;
 		}
 	}
 	if(flag) cout<<l<<"\n";
 	else cout<<(l+1)<<"\n";
	return 0;
}
