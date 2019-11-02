using namespace std;
#include <bits/stdc++.h>
int r,c;
int find_val(int x){
	int mod = x%3;
	int val;
	if(mod==0 || mod==1 )		val = (x/3)*2;		 	
	else val = 1 + (x/3)*2;
	return val;
}
int process(){
	int ans = 0;
	int val_r = find_val(r);
	int val_c = find_val(c);
	if(r*c==1)	ans = 0;
	else if(r==1)	ans = val_c;
	else if(c==1)	ans = val_r;
	else ans = val_r*c + (r-val_r)*val_c; 
	return ans;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>r>>c){
    	cout<<process()<<"\n";
    }
	return 0;
}