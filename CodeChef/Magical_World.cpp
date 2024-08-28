/**
 * Author: omteja04
 * Created on: 28-08-2024 20:09:59
 * Description: Magical_World
**/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ld = long double;
using ull = unsigned long long;
using p64 = pair<ll, ll>;
using p32 = pair<int, int>;
using pdd = pair<double, double>;
using vb = vector<bool>;
using v32 = vector<int>;
using v64 = vector<ll>;
using vp32 = vector<p32>;
using vp64 = vector<p64>;
using vvb = vector<vector<bool>>;
using vv64 = vector<vector<ll>>;
using vv32 = vector<vector<int>>;
using vvp64 = vector<vector<p64>>;

#define cin1d(n, array)         \
    for (ll i = 0; i < n; i++) \
    cin >> array[i]
#define cin2d(n, m, array)      \
    for (ll i = 0; i < n; i++) \
        for (ll j = 0; j < m; j++) \
            cin >> array[i][j]
#define cout1d(n, array)        \
    for (ll i = 0; i < n; i++) \
    cout << array[i] << ' '
#define cout2d(n, m, array)      \
    for (ll i = 0; i < n; i++) \
        for (ll j = 0; j < m; j++) \
            cout << array[i][j]
#define forN(i, n) for (ll i = 0; i < n; i++)
#define forAB(i, a, b) for (ll i = a; i < b; i++)
#define rFN(i, n) for (ll i = n; i >= 0; i--)
#define rFAB(i, b, a) for (ll i = b; i >= a; i--)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((ll)(x).size()) 
#define middle low + (high - low) / 2
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define fixed(n) fixed << setprecision(n)
#define digits(n) ((int)log10(n) + 1)
#define fill(array, value) memset(array, value, sizeof(array));
#define boo cout << "Boo" << '\n'
#define YES cout << "YES"
#define NO cout << "NO"

const int MOD = 1000000007;
const double PI = acos(-1);

#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define debug(x) cerr << (#x) << " = " << (x) << '\n'
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define tc    \
    int t;    \
    cin >> t; \
    while (t--)

void levi() {
    int l,b,s;
    cin>>l>>b>>s;
    if(s*s >= l*b) {
        cout << 0;
        return;
    } else{
        if(s*s >= b || s*s >= l) {
            cout << 1;
        }else{
            cout << 2;
        }
    }
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}