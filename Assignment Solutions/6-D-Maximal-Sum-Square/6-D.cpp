#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n, k;
    cin >> n >> k;
    vector<vector<int>> prefixSum(n + 1, vector<int>(n + 1));
    int ans = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            int x;
            cin >> x;
            prefixSum[i][j] = x + prefixSum[i][j - 1] + prefixSum[i - 1][j] - prefixSum[i - 1][j - 1];
            if (i >= k && j >= k) {
                ans = max(ans, prefixSum[i][j] - prefixSum[i][j - k] - prefixSum[i - k][j] + prefixSum[i - k][j - k]);
            }
        }
    }

    cout << ans << '\n';

    return 0;
}
