/**
 * Author: omteja04
 * Created on: 22-12-2024 20:53:10
 * Description: C_Preparing_for_the_Exam
 **/

#include <bits/stdc++.h>
#include <iostream>
#include <ostream>
#include <unordered_set>
#include <vector>

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

//////////////////////////////////////////////////////////////
/////////////// Because I was born to be great ///////////////
//////////////////////////////////////////////////////////////

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

//////////////////////////////////////////////////////////////
/////////////// Because I was born to be great ///////////////
//////////////////////////////////////////////////////////////

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
    int t = 1;     \
    std::cin >> t; \
    while(t--)

//////////////////////////////////////////////////////////////
/////////////// Because I was born to be great ///////////////
//////////////////////////////////////////////////////////////

void levi() {
    int n, m, k;
    std::cin >> n >> m >> k;
    int totalSum = n * (n + 1) / 2;
    vi lists(m);
    // QuestionSum excluding list[i]
    for(int i = 0; i < m; i++) {
        std::cin >> lists[i];
    }
    int known = 0;
    std::unordered_set<int> st;
    for(int i = 0; i < k; i++) {
        int a;
        std::cin >> a;
        st.insert(a);
        known += a;
    }

    std::string str(m, '0');
    // std::cerr << "Iam Here" << std::endl;
    if(k + 1 < n) {
        std::cout << str;
        return;
    }
    std::replace(str.begin(), str.end(), '0', '1');
    if(n == k) {
        std::cout << str;
        return;
    }

    str = "";

    for(int i = 0; i < m; i++) {
        if(st.find(lists[i]) == st.end()) {
            str += '1';
        } else {
            str += '0';
        }
    }
    std::cout << str;
}

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}
