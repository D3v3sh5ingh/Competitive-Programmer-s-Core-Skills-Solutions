#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct item {
    int weight, value;
    bool operator < (const item& other) const {
        return weight < other.weight;
    }
};

int main() {
    cin.sync_with_stdio(false);
    cin.tie(0);

    int n, totalWeight;
    cin >> n >> totalWeight;

    vector<item> items;
    for (int i = 0; i < n; ++i) {
        int weight, value;
        cin >> weight >> value;
        items.push_back({weight, value});
    }

    sort(items.begin(), items.end());
    reverse(items.begin(), items.end());

    int totalValue = 0;
    vector<int> candidates;

    for (int power = 0; power <= 30; ++power) {
        int weight = 1 << power;
        while (items.size() > 0 && items.back().weight == weight) {
            candidates.push_back(items.back().value);
            items.pop_back();
        }

        sort(candidates.begin(), candidates.end());

        if (totalWeight & weight) {
            if (candidates.size() > 0) {
                totalValue += candidates.back();
                candidates.pop_back();
            }
        }

        vector<int> newCandidates;
        while (candidates.size() >= 2) {
            int combinedValue = candidates.back();
            candidates.pop_back();
            combinedValue += candidates.back();
            candidates.pop_back();
            newCandidates.push_back(combinedValue);
        }

        if (candidates.size() >= 1) {
            newCandidates.push_back(candidates.back());
            candidates.pop_back();
        }

        candidates = newCandidates;
    }

    cout << totalValue << '\n';
    
    return 0;
}
