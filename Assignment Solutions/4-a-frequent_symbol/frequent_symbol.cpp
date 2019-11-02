#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
#include <climits>
#include <deque>
#include <map>
#include <deque>
#include <iomanip>
#include <cmath>
#include <functional>
#include <set>
#define endl '\n'
#define FOR(i,a,n,c) for(int i=a;i<=n;i+=c)
using namespace std;
#define MOD 1000000007
#define ll long long
#define pb push_back
typedef pair<ll,ll> pll;
int main()
{
    //========Fast I/O
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
    //==========
    /*
for reading from input.txt and writing on output.txt
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
*/
    string s;cin>>s;
    ll n=s.length();
    map<char,vector<ll>> m;
    for(char c='a'; c<='z';c++)
        m[c].resize(n+1,0);
    for(char c='a'; c<='z';c++)
    {
        for(ll i=1;i<=n;i++)
        {
            if(s[i-1]==c)
                m[c][i]=1+m[c][i-1];
            else
                m[c][i]=m[c][i-1];
        }
    }
    ll q;cin>>q;
    while(q--)
    {
        ll l,r;cin>>l>>r;
        char ans;ll res=0;
        for(char c='a';c<='z';c++)
        {
            ll temp=m[c][r]-m[c][l-1];
            if(temp>res)
            {
                res=temp;
                ans=c;
            }
        }
        cout<<ans<<endl;
    }
}
