/**
 * Author: omteja04
 * Created on: 16-10-2024 20:19:10
 * Description: Even_Numbers_Hate
 **/

#include <iostream>
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

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

#define INPUT_ARRAY_1D(n, array) \
    for(ll i = 0; i < n; i++)    \
    std::cin >> array[i]

#define INPUT_ARRAY_2D(n, m, array) \
    for(ll i = 0; i < n; i++)       \
        for(ll j = 0; j < m; j++)   \
    std::cin >> array[i][j]

#define OUTPUT_ARRAY_1D(n, array) \
    for(ll i = 0; i < n; i++)     \
    std::cout << array[i] << ' '

#define OUTPUT_ARRAY_2D(n, m, array) \
    for(ll i = 0; i < n; i++)        \
        for(ll j = 0; j < m; j++)    \
    std::cout << array[i][j]

#define forN(i, n)         for(ll i = 0; i < (n); i++)
#define forAB(i, a, b)     for(ll i = (a); i < (b); i++)
#define rFN(i, n)          for(ll i = (n); i >= 0; i--)
#define rFAB(i, b, a)      for(ll i = (b); i >= (a); i--)
#define all(x)             (x).begin(), (x).end()
#define rall(x)            (x).rbegin(), (x).rend()
#define sz(x)              ((ll) (x).size())
#define middle             low + (high - low) / 2
#define pb                 push_back
#define eb                 emplace_back
#define mp                 make_pair
#define fi                 first
#define se                 second
#define fixed(n)           std::fixed << std::setprecision(n)
#define digits(n)          ((int) std::log10(n) + 1)
#define fill(array, value) std::memset(array, value, sizeof(array));
#define YES                std::cout << "YES"
#define NO                 std::cout << "NO"

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
    vi arr(n);
    bool containsOdd = false;
    int oddCnt = 0, evenCnt = 0;
    forN(i, n) {
        std::cin >> arr[i];
        if(arr[i] & 1) {
            oddCnt++;
        } else {
            evenCnt++;
        }
    }

    int maxOddCnt = 0;
    int currentState = 0;

    for(int i = 0; i < n; i++) {

        if(currentState == 0 && oddCnt > 0) {
            oddCnt--;
            currentState = 1;
            maxOddCnt++;
        }

        else if(currentState == 0 && evenCnt > 0) {
            evenCnt--;
            currentState = 0;
        }

        else if(currentState == 1 && evenCnt > 0) {
            evenCnt--;
            currentState = 1;
            maxOddCnt++;
        }

        else if(currentState == 1 && oddCnt > 0) {
            oddCnt--;
            currentState = 0;
        }
    }
    std::cout << maxOddCnt;
}

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}
