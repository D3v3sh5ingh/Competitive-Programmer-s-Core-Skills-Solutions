#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int m = *max_element(a.begin(), a.end());
    vector<vector<int>> dp(n + 1, vector<int>(m + 1));
    dp[0][0] = 0;
    for (int i = 0; i < n; ++i) {
        int bestBelow = 1e9;
        for (int j = 0; j <= m; ++j) {
            bestBelow = min(bestBelow, dp[i][j]);
            dp[i + 1][j] = bestBelow + abs(a[i] - j);
        }
    }

    cout << *min_element(dp[n].begin(), dp[n].end()) << '\n';

    return 0;
}
