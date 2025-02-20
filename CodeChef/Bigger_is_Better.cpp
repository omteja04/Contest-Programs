/**
 * Author: omteja04
 * Created on: 19-02-2025 20:07:54
 * Description: Bigger_is_Better
 **/

#include <bits/stdc++.h>
#include <iostream>
#include <string>
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
░█▀▀░█▀█░█▀█░▀█▀░█▀█░▀█▀░█▀█░░░█░░░█▀▀░█░█░▀█▀
░█░░░█▀█░█▀▀░░█░░█▀█░░█░░█░█░░░█░░░█▀▀░▀▄▀░░█░
░▀▀▀░▀░▀░▀░░░░▀░░▀░▀░▀▀▀░▀░▀░░░▀▀▀░▀▀▀░░▀░░▀▀▀
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

/*
=========================
    Maths
=========================
*/

const long long N = 1e6 + 9;
std::vector<ll> primes, spf(N, 0);
std::vector<bool> isPrime(N, true);

void SIEVE_SPF() {
    isPrime[0] = isPrime[1] = false;
    for(long long i = 2; i * i < N; i++) {
        if(isPrime[i]) {
            spf[i] = i;
            for(long long j = i * i; j < N; j += i) {
                isPrime[j] = false;
                if(spf[j] == 0) {
                    spf[j] = i;
                }
            }
        }
    }
    for(long long i = 2; i < N; i++) {
        if(isPrime[i]) {
            primes.push_back(i);
        }
    }
}

ll power(ll x, ll y) {
    ll res = 1;
    while(y > 0) {
        if(y & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b) {
    while(b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

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

void levi() {
    int n;
    std::cin >> n;
    std::string str;
    std::cin >> str;
    std::string res(n, 'z');
    if(str == res) {
        std::cout << -1;
    } else {
        std::cout << res;
    }
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
