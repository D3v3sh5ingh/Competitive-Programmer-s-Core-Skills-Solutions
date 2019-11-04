#include <bits/stdc++.h>
#define MOD 1000000007
#define test int t; cin>>t; while(t--)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopr(i,a,b) for(int i=a;i>=b;i--)
#define loops(i,a,b,step) for(int i=a;i<b;i+=step)
#define looprs(i,a,b,step) for(int i=a;i>=b;i-=step)
#define ull unsigned long long int
#define ll long long int
#define P pair
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define PUU pair<unsigned long long int, unsigned long long int>
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define mp make_pair
#define pb push_back
#define pf push_front
#define MM multimap
#define F first
#define S second
#define IT iterator
#define RIT reverse_iterator
#define FAST ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
using namespace std;

const ll maxn = 1e5;
int s,l;
ll dp[200][20];

ll cal(ll sum, ll dig){
    if(sum > s)return 0;
    if(dig == l){
        if(sum == s)return 1;
        return 0;
    }
    if(dp[sum][dig] != -1)return dp[sum][dig];
    ll res = 0;
    loop(i,0,10){
        if(dig == 0 && i == 0)continue;
        res+=cal(sum+i,dig+1);
    }
    dp[sum][dig] = res;
    return dp[sum][dig];
}

int main(){
    memset(dp,-1,sizeof(dp));
    cin >> s >> l;
    if(s == 0 && l == 1)cout << "1";
    else cout << cal(0,0);
  return 0;
}