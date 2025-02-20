/**
 * Author: omteja04
 * Created on: 24-01-2025 17:33:36
 * Description: B_Kefa_and_Company
 **/

#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
int main() {
    long long n, d;
    std::cin >> n >> d;
    std::vector<std::pair<long long, long long>> arr(n);
    for(auto &it: arr) {
        std::cin >> it.first >> it.second;
    }

    std::sort(arr.begin(), arr.end());
    long long ans = 0;
    long long sum = 0;
    for(long long left = 0, right = 0; right < n; right++) {
        // std::cerr << arr[right].first << " " << arr[right].second << "\n";

        sum += arr[right].second;
        while(left < right && arr[right].first - arr[left].first >= d) {
            sum -= arr[left].second;
            left++;
        }
        // std::cerr << sum << " ";
        ans = std::max(ans, sum);
    }
    std::cout << ans;
}
