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
    ll n;cin>>n;
    ll maxSum=INT_MIN,maxDif=INT_MIN,minSum=INT_MAX,minDif=INT_MAX;
    ll a=0,b=0,c=0,d=0;
    for(ll i=1;i<=n;i++)
    {
        ll x,y;cin>>x>>y;
        if(x+y>maxSum)
        {
            maxSum=x+y;
            a=i;
        }
        if(x-y>maxDif)
        {
            maxDif=x-y;
            b=i;
        }
        if(x+y<minSum)
        {
            minSum=x+y;
            c=i;
        }
        if(x-y<minDif)
        {
            minDif=x-y;
            d=i;
        }

        if(maxSum-minSum > maxDif-minDif)
            cout<<a<<" "<<c<<endl;
        else
            cout<<b<<" "<<d<<endl;
    }
}
