/**
 * Author: omteja04
 * Created on: 19-12-2024 20:55:04
 * Description: C_Kevin_and_Binary_Strings
 **/

#include <cstddef>
#include <string>
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
#define YES              std::cout << "YES"
#define NO               std::cout << "NO"

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

string fun(string &s1, string &s2) {
    string res = "";
    int l = max(s1.length(), s2.length());
    string s11 = string(l - s1.length(), '0') + s1;
    string s12 = string(l - s2.length(), '0') + s2;
    for(int i = 0; i < l; i++) {
        res += (s11[i] == s12[i]) ? '0' : '1';
    }
    return res;
}
void levi() {
    string s;
    cin >> s;
    int n = s.size();
    int ind = -1;

    cout << 1 << " " << s.length() << " ";

    for(int i = 0; i < n; i++) {
        if(s[i] == '0') {
            ind = i;
            break;
        }
    }

    if(ind == -1) {
        cout << 1 << " " << 1;
        return;
    } else {
        int a = -1, b = -1;
        int SIZE = n - ind;
        string maxiString = s;
        for(int i = 0; i < n - SIZE; i++) {
            string substring = s.substr(i, SIZE);
            string curr = fun(s, substring);
            if(curr > maxiString) {
                maxiString = curr;
                a = i + 1;
                b = SIZE + i;
            }
        }
        cout << a << " " << b;
    }
}

int main() {
    fast_cin();

    tc {
        levi();
        std::cout << '\n';
    }
    return 0;
}
