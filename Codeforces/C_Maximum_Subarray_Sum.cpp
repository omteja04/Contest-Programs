/**
 * Author: omteja04
 * Created on: 05-05-2025 21:08:53
 * Problem: C_Maximum_Subarray_Sum
 * Link: https:
 **/
#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

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

ll power(ll x, ll y, ll MOD) {
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

/*
=========================
    Combinatorics
=========================
*/

const int MAX = 2e6;
vector<ll> fact(MAX, 1), inverseFact(MAX, 1);
void initialize() {
    for(int i = 2; i < MAX; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    inverseFact[MAX - 1] = power(fact[MAX - 1], MOD - 2, MOD);
    for(int i = MAX - 2; i > 0; i--) {
        inverseFact[i] = inverseFact[i + 1] * (i + 1) % MOD;
    }
}

ll C(ll n, ll r) {
    return fact[n] * inverseFact[r] % MOD * inverseFact[n - r] % MOD;
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
const int NEG_INF = -1000000000000000000LL;

int kadane(const vector<int> &arr, const string &s) {
    int curr = 0, max_sum = LLONG_MIN;
    for(int i = 0; i < arr.size(); i++) {
        if(s[i] == '1') {
            curr = max(curr + arr[i], arr[i]);
            max_sum = max(max_sum, curr);
            if(curr < 0) {
                curr = 0;
            }
        } else {
            curr = 0;
        }
    }
    return max_sum;
}

void levi() {
    int n;
    int k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max_sum = kadane(a, s);

    if(max_sum > k) {
        cout << "No\n";
        return;
    }

    int z_pos = -1;
    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            z_pos = i;
            break;
        }
    }

    if(z_pos == -1) {
        if(max_sum == k) {
            cout << "Yes\n";
            for(int v: a) {
                cout << v << ' ';
            }
            cout << "\n";
        } else {
            cout << "No\n";
        }
        return;
    }

    int l_max = LLONG_MIN, l_sum = 0;
    bool l_found = false;
    
    for(int i = z_pos - 1; i >= 0 && s[i] == '1'; i--) {
        l_sum += a[i];
        l_max = max(l_max, l_sum);
        l_found = true;
    }
    int left = l_found ? l_max : 0;

    int r_max = LLONG_MIN, r_sum = 0;
    bool r_found = false;
    for(int i = z_pos + 1; i < n && s[i] == '1'; i++) {
        r_sum += a[i];
        r_max = max(r_max, r_sum);
        r_found = true;
    }
    int right = r_found ? r_max : 0;

    int repl;
    if(left >= 0 && right >= 0) {
        repl = k - left - right;
    } else if(left >= 0 && right <= 0) {
        repl = k - left;
    } else if(left <= 0 && right >= 0) {
        repl = k - right;
    } else {
        repl = k;
    }

    cout << "Yes\n";

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            if(i == z_pos) {
                cout << repl;
            } else {
                cout << NEG_INF;
            }
        } else {
            cout << a[i];
        }
        cout << (i + 1 < n ? ' ' : '\n');
    }
}

#undef int

int main() {
    fast_cin();

    tc {
        levi();
    }
    return 0;
}
