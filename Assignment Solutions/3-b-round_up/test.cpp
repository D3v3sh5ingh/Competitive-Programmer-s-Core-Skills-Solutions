using namespace std;
#include <bits/stdc++.h>
int main(){
	#ifndef ONLINE_JUDGE
    freopen("testInput.txt", "r", stdin);
    freopen("testOutput.txt", "w", stdout);
	#endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x, y,result;
    while(cin >> x >> y){
	    cout<<x%y<<"\n";
	}
	return 0;
}
