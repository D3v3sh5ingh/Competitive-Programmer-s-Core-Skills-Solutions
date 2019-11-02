using namespace std;
#include <bits/stdc++.h>
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y,result;
    while(cin >> x >> y){
	    result = x/y;
	    if((x%y==0)||(long long)x*y<0);
	    else result+=1;
	    cout<<result<<"\n";
	}
	return 0;
}
