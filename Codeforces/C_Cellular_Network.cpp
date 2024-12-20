/**
 * Author: omteja04
 * Created on: 20-12-2024 07:03:42
 * Description: C_Cellular_Network
 **/

#include <algorithm>
#include <iostream>
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>
#include <vector>

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pl = std::pair<ll, ll>;
using pi = std::pair<int, int>;
using pd = std::pair<ld, ld>;
using vb = std::vector<bool>;
using vi = std::vector<int>;
using vl = std::vector<ll>;
using vpi = std::vector<pi>;
using vpl = std::vector<pl>;
using vvb = std::vector<std::vector<bool>>;
using vvl = std::vector<std::vector<ll>>;
using vvi = std::vector<std::vector<int>>;
using vvpl = std::vector<std::vector<pl>>;

#define INPUT_ARRAY_1D(n, arr) \
    for(ll i = 0; i < n; i++)  \
    std::cin >> arr[i]

#define INPUT_ARRAY_2D(n, m, arr) \
    for(ll i = 0; i < n; i++)     \
        for(ll j = 0; j < m; j++) \
    std::cin >> arr[i][j]

#define OUTPUT_ARRAY_1D(n, arr) \
    for(ll i = 0; i < n; i++)   \
    std::cout << arr[i] << ' '

#define OUTPUT_ARRAY_2D(n, m, arr) \
    for(ll i = 0; i < n; i++)      \
        for(ll j = 0; j < m; j++)  \
    std::cout << arr[i][j]

#define fn(i, n)         for(ll i = 0; i < (n); i++)
#define fab(i, a, b)     for(ll i = (a); i < (b); i++)
#define rfn(i, n)        for(ll i = (n); i >= 0; i--)
#define rfab(i, b, a)    for(ll i = (b); i >= (a); i--)
#define all(x)           (x).begin(), (x).end()
#define rall(x)          (x).rbegin(), (x).rend()
#define sz(x)            ((ll) (x).size())
#define middle           low + (high - low) / 2
#define pb               push_back
#define eb               emplace_back
#define mp               make_pair
#define fi               first
#define se               second
#define fixed(n)         std::fixed << std::setprecision(n)
#define digits(n)        ((int) std::log10(n) + 1)
#define fill(arr, value) std::memset(arr, value, sizeof(arr));
#define yes()            std::cout << "YES"
#define no()             std::cout << "NO"

const int MOD = 1000000007;
const double PI = std::acos(-1);

#define Time     std::cerr << "Time Taken: " << (float) std::clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define debug(x) std::cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

#define tc         \
    int t;         \
    std::cin >> t; \
    while(t--)

bool can(vl cities, vl towers, int n, int m, ll mid) {
    int citiesCovered = 0;
    for(int i = 0; i < m; i++) {
        ll low = towers[i] - mid;
        ll high = towers[i] + mid;

        if(citiesCovered > n - 1) {
            return 1;
        }
        if(cities[citiesCovered] >= low && cities[citiesCovered] <= high) {
            int citiesCanCover = std::upper_bound(all(cities), high) - cities.begin();
            citiesCovered = citiesCanCover;
        }
    }
    return citiesCovered > n - 1;
}
void levi() {
    int n, m;
    std::cin >> n >> m;

    vl cities(n);
    vl towers(m);
    INPUT_ARRAY_1D(n, cities);
    INPUT_ARRAY_1D(m, towers);
    sort(all(cities));
    sort(all(towers));
    ll low = 0;
    ll high = 1e18;
    ll ans = 0;
    while(low <= high) {
        ll mid = low + (high - low) / 2;
        if(can(cities, towers, n, m, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid  +1;
        }
    }
    std::cout<<ans;
}

int main() {
    fast_cin();


        levi();
        std::cout << '\n';

    return 0;
}
