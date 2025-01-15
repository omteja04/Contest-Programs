/**
 * Author: omteja04
 * Created on: 02-01-2025 15:11:04
 * Description: C_Find_a_Mine
 **/

#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <vector>

/*
=========================
        Headers
=========================
*/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"

/*
  ██████╗ █████╗ ██████╗ ████████╗ █████╗ ██╗███╗   ██╗    ██╗     ███████╗██╗   ██╗██╗
 ██╔════╝██╔══██╗██╔══██╗╚══██╔══╝██╔══██╗██║████╗  ██║    ██║     ██╔════╝██║   ██║██║
 ██║     ███████║██████╔╝   ██║   ███████║██║██╔██╗ ██║    ██║     █████╗  ██║   ██║██║
 ██║     ██╔══██║██╔═══╝    ██║   ██╔══██║██║██║╚██╗██║    ██║     ██╔══╝  ╚██╗ ██╔╝██║
 ╚██████╗██║  ██║██║        ██║   ██║  ██║██║██║ ╚████║    ███████╗███████╗ ╚████╔╝ ██║
  ╚═════╝╚═╝  ╚═╝╚═╝        ╚═╝   ╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝    ╚══════╝╚══════╝  ╚═══╝  ╚═╝
*/

/*
=========================
    Type Definitions
=========================
*/

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using pi = std::pair<ll, ll>;
using pd = std::pair<ld, ld>;
using vb = std::vector<bool>;
using vi = std::vector<ll>;
using vd = std::vector<ld>;
using vpi = std::vector<pi>;
using vpd = std::vector<pd>;
using vvb = std::vector<std::vector<bool>>;
using vvi = std::vector<std::vector<ll>>;
using vvd = std::vector<std::vector<ld>>;
using vvpi = std::vector<std::vector<pi>>;

/*
=========================
    Template Functions
=========================
*/

template <class... Args>
auto &read(Args &...args) {
    return (std::cin >> ... >> args);
}

template <class... Args>
auto &write(Args &&...args) {
    return (std::cout << ... << std::forward<Args>(args));
}

template <class... Args>
auto &debugging(Args &&...args) {
    return (std::cerr << ... << std::forward<Args>(args));
}

/*
=========================
    Macros for Input
=========================
*/

#define IN(type, ...) \
    type __VA_ARGS__; \
    read(__VA_ARGS__)

#define INPUT_ARRAY_1D(n, arr) \
    for(ll i = 0; i < n; i++)  \
    std::cin >> arr[i]

#define INPUT_ARRAY_2D(n, m, arr) \
    for(ll i = 0; i < n; i++)     \
        for(ll j = 0; j < m; j++) \
    std::cin >> arr[i][j]

/*
=========================
    Macros for Output
=========================
*/

#define OUT(...) write(__VA_ARGS__)

#define OUTPUT_ARRAY_1D(n, arr) \
    for(ll i = 0; i < n; i++)   \
    std::cout << arr[i] << ' '

#define OUTPUT_ARRAY_2D(n, m, arr) \
    for(ll i = 0; i < n; i++)      \
        for(ll j = 0; j < m; j++)  \
    std::cout << arr[i][j]

/*
=========================
    Shortcuts
=========================
*/

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
#define int              long long
#define abs              std::abs

/*
=========================
    Constants and Debug
=========================
*/

const int MOD = 1000000007;
const double PI = std::acos(-1);

#define Time     std::cerr << "Time Taken: " << (float) std::clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define debug(x) std::cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
#define ERR(...) debugging(__VA_ARGS__)
#define fast_cin()                         \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);                    \
    std::cout.tie(NULL)

/*
=========================
    Test Case Macros
=========================
*/

#define tc         \
    int t = 1;     \
    std::cin >> t; \
    while(t--)

/*
=================================================
        Because I was born to be great
=================================================
*/

int ask(int x, int y) {
    std::cout << "? " << x << " " << y << std::endl;
    int mini;
    std::cin >> mini;
    return mini;
}
void ans(int x, int y) {
    std::cout << "! " << x << " " << y << std::endl;
}
void levi() {
    int n, m;
    std::cin >> n >> m;
    
    // Check for 1,1
    int d = ask(1, 1);
    if(d == 0) {
        ans(1, 1);
        return;
    }
    int rd = d;
    int y = std::min(m - 1, d) + 1;
    int x = 1 + d - (y - 1);

    // check for the diagonal
    d = ask(x, y);
    if(d == 0) {
        ans(x, y);
        return;
    }

    int k;
    if(d % 2 == 0 && x + d / 2 <= n && y - d / 2 > 0) {
        k = ask(x + d / 2, y - d / 2);
        x += d / 2;
        y -= d / 2;
    } else {
        x = std::min(n - 1, rd) + 1;
        y = 1 + rd - (x - 1);
        k = ask(x, y);
    }

    if(k == 0) {
        ans(x, y);
        return;
    }

    x = std::min(n - 1, rd) + 1;
    y = 1 + rd - (x - 1);

    k = ask(x, y);

    ans(x - k / 2, y + k / 2);
    return;
}
#undef int

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}