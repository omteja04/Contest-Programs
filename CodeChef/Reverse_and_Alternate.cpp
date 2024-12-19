/**
 * Author: omteja04
 * Created on: 18-12-2024 21:32:52
 * Description: Reverse_and_Alternate
 **/

#include <algorithm>
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

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

#define forN(i, n)       for(ll i = 0; i < (n); i++)
#define forAB(i, a, b)   for(ll i = (a); i < (b); i++)
#define rFN(i, n)        for(ll i = (n); i >= 0; i--)
#define rFAB(i, b, a)    for(ll i = (b); i >= (a); i--)
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
#define YES              std::cout << "Yes"
#define NO               std::cout << "No"

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
    cin >> n;
    string str;
    cin >> str;
    int zCnt = 0, oCnt = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] == '0') {
            zCnt++;
        } else {
            oCnt++;
        }
    }
    if(abs(zCnt - oCnt) > 1) {
        NO;
        return;
    }
    int flag = 0;
    for(int l = 0; l < n - 1; l++) {
        if(str[l] == str[l + 1]) {
            if(flag == 1) {
                NO;
                return;
            }
            int r = -1;
            for(int i = n - 1; i > 0; i--) {
                if(str[i] == str[i - 1]) {
                    if(str[i] == str[l] && l != i - 1) {
                        NO;
                        return;
                    }
                    r = i - 1;
                    break;
                }
            }
            if(r == -1) {
                NO;
                return;

            } else {
                reverse(str.begin() + l + 1, str.begin() + r + 1);
            }
            flag++;
        }
    }
    YES;
}

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}
