/**
 * Author: omteja04
 * Created on: 23-01-2025 21:15:43
 * Description: B_Total_Length
 **/

#include <iostream>
#include <vector>
int main() {
    long long n, s;
    std::cin >> n >> s;
    std::vector<long long> arr(n);
    for(long long i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    long long ans = 0;
    long long sum = 0;
    for(long long left = 0, right = 0; right < n; right++) {
        sum += arr[right];
        while(sum > s) {
            sum -= arr[left];
            left++;
        }
        long long x = right - left + 1;
        ans += x * (x + 1) / 2;
    }
    std::cout << ans;
}
