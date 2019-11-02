#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define int long long int
int32_t main() {
int n;
cin >> n;
vector<int> a(n);
for (int i = 0; i < n; i++) {
cin >> a[i];
}
vector<int> d(n+1, 1000000000);
for (int i = 0; i < n; i++) {
*lower_bound(d.begin(), d.end(), a[i]) = a[i];
}
for (int i = 0; i <= n; i++) {
if (d[i] == 1000000000) {
cout << i << endl;
break;
}
}
}