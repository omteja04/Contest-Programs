/**
 * Author: omteja04
 * Created on: 23-01-2025 18:06:34
 * Description: E_Knapsack_on_a_Segment
 **/

#include <algorithm>
#include <iostream>
#include <vector>

int main() {
#define int long long
    int n, s;
    std::cin >> n >> s;
    std::vector<int> weights(n);
    std::vector<int> costs(n);
    for(int &it: weights) {
        std::cin >> it;
    }
    for(int &it: costs) {
        std::cin >> it;
    }
    int weight = 0, cost = 0;
    int ans = 0;
    for(int left = 0, right = 0; right < n; right++) {
        weight += weights[right];
        cost += costs[right];
        while(left < right && weight > s) {
            weight -= weights[left];
            cost -= costs[left];
            left++;
        }

        if(weight <= s) {
            ans = std::max(ans, cost);
        }
    }
    std::cout << ans;
#undef int
}
