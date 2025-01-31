/**
 * Author: omteja04
 * Created on: 29-01-2025 11:23:24
 * Description: C_Set_or_Decrease
 **/

#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
ll floorVal(ll a, ll b) {
    ll res = a / b;
    if(a % b && a < 0) {
        res--;
    }
    return res;
}

void levi() {
    int n;
    ll k;
    std::cin >> n >> k;
    std::vector<ll> arr(n);
    for(int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    std::sort(arr.begin(), arr.end());
    std::vector<ll> prefix(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i - 1];
    }
    ll ans = INT64_MAX;
    for(ll y = 0; y < n; y++) {
        ll x = arr[0] - floorVal(k - prefix[n - y] + arr[0], y + 1);
        ans = std::min(ans, std::max(x, 0ll) + y);
    }
    std::cout << ans << std::endl;
}
int main() {
    int tc;
    std::cin >> tc;
    while(tc--) {
        levi();
    }
}
