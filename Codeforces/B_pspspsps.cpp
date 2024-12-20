/**
 * Author: omteja04
 * Created on: 20-12-2024 20:44:18
 * Description: B_pspspsps
 **/

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

void levi() {
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    if(n == 1) {
        yes();
        return;
    }
    vi P(n, INT_MAX);
    vi S(n, INT_MAX);
    for(int i = 0; i < n; i++) {
        if(str[i] == 'p') {
            P[i] = i + 1;
        }
        if(str[i] == 's') {
            S[i] = n - i;
        }
    }
    for(int i = 1; i < n; i++) {
        S[i] = std::min(S[i], S[i - 1]);
    }
    for(int i = n - 2; i >= 0; i--) {
        P[i] = std::min(P[i], P[i + 1]);
    }
    vi arr(n);
    for(int i = 0; i < n; i++) {
        arr[i] = std::min(S[i], P[i]);
    }

    sort(all(arr));
    for(int i = 0; i < n; i++) {
        if(i >= arr[i]) {
            no();
            return;
        }
    }
    yes();
}

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}
