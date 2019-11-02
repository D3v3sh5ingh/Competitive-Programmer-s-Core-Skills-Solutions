#include <bits/stdc++.h>

	using namespace std;

	#define rep(i,n) f(i,0,n)
	#define f(i,a,b) for(int i=a;i<b;i++)
	#define fd(i,a,b) for(int i=a;i>=b;i--)
	#define pb push_back
	#define mp make_pair
	#define vl vector< ll >
	#define vi vector< int >
	#define ss second
	#define ff first
	#define ll long long
	#define pii pair< int,int >
	#define pll pair< ll,ll >
	#define sz(a) a.size()
	#define inf (1000*1000*1000+5)
	#define all(a) a.begin(),a.end()
	#define tri pair<int,pii>
	#define vii vector<pii>
	#define vll vector<pll>
	#define viii vector<tri>
	#define mod (1000*1000*1000+7)

	int main(){
		std::ios::sync_with_stdio(false); cin.tie(NULL);
        int x,y;
        cin>>x>>y;
        string a,b;
            cin>>a;
            cin>>b;
        int q,d,s;
        cin>>q>>d>>s;
        int dp[x+1][y+1];   
        rep(i,x+1){
            rep(j,y+1){
                if(i==0&&j==0){
                    dp[i][j]=0;
                }
                else if(i==0){
                    dp[i][j]=dp[0][j-1]+q;
                }
                else if(j==0){
                    dp[i][j]=dp[i-1][0]+d;
                }
                else if(a[i-1]==b[j-1]){
                    dp[i][j]=dp[i-1][j-1];
                }
                else {

                    dp[i][j]= min(
                        dp[i][j-1]+q,
                                    min(
                                        dp[i-1][j]+d,
                                        dp[i-1][j-1]+s    
                                    )
                                    );
                }
            }
        }
        //  rep(i,x+1){
        //     rep(j,y+1){
        //         cout<<dp[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        cout<<dp[x][y];
		return 0;   
	}
