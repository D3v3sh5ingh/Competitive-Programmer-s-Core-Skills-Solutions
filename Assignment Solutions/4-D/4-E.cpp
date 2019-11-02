#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n); for (int i = 0; i < n; ++i) cin >> a[i];
    vector<long long> p(n + 1), s(n + 1);
    for (int i = 0; i < n; ++i) p[i + 1] = p[i] + a[i];
    for (int i = n - 1; i >= 0; --i) s[i] = s[i + 1] + a[i];
    long long S = p[n];
    for (int i = 0; i < n; ++i) p[i + 1] = min(p[i + 1], p[i]);
    for (int i = n - 1; i >= 0; --i) s[i] = min(s[i + 1], s[i]);
    
    for (int i = 0; i < n; ++i) {
        if (i) cout << ' ';
        cout << S - p[i] - s[i + 1] << endl;
    }
    cout << endl;
}

int main() {
    solve();
    return 0;
}