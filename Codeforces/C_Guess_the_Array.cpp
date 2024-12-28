/**
 * Author: omteja04
 * Created on: 28-12-2024 14:01:57
 * Description: C_Guess_the_Array
 **/

#include <bits/stdc++.h>
#include <cstdio>
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

#define tc     \
    int t = 1; \
    // std::cin >> t; \
    while (t--)

/*
=================================================
        Because I was born to be great
=================================================
*/
int ask(int ind1, int ind2 = 1) {
    // OUT("? ", ind1, " ", ind2);
    std::cout << "? " << ind1 << " " << ind2 << std::endl;
    // fflush(stdout);
    int sum;
    std::cin >> sum;
    return sum;
}
void levi() {
    IN(int, n);
    vi arr(n);
    int a, b, c;
    a = ask(1, 2);
    b = ask(2, 3);
    c = ask(1, 3);
    arr[0] = (a - b + c) / 2;
    arr[1] = a - arr[0];
    arr[2] = c - arr[0];
    for(int i = 3; i < n; i++) {
        int sum = ask(i + 1);
        arr[i] = sum - arr[0];
    }
    OUT("! ");
    OUTPUT_ARRAY_1D(n, arr);
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
