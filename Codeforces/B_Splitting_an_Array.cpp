/**
 * Author: omteja04
 * Created on: 06-01-2025 21:42:05
 * Description: B_Splitting_an_Array
 **/

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>
#define int long long
int can(std::vector<int> &arr, int k, int mid) {
    int cnt = 1;
    int sum = 0;
    for(int &it: arr) {
        if(it + sum > mid) {
            cnt++;
            sum = it;
        } else {
            sum += it;
        }
    }
    return cnt > k;
}
signed main() {
    int n, k;
    std::cin >> n >> k;
    std::vector<int> arr(n);
    for(auto &it: arr) {
        std::cin >> it;
    }
    int low = *std::max_element(arr.begin(), arr.end());
    int high = std::accumulate(arr.begin(), arr.end(), 0ll);
    int ans = -1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(can(arr, k, mid)) {
            low = mid + 1;
        } else {
            high = mid - 1;
            ans = mid;
        }
    }
    std::cout << ans;
}
