/**
 * Author: omteja04
 * Created on: 13-08-2024 20:47:13
 * Description: C_Numeric_String_Template
 **/

#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<bool> vb;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<vector<bool>> vvb;
typedef vector<p32> vp32;
typedef vector<p64> vp64;
typedef vector<vector<p64>> vvp64;

#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '
#define forN(i, n) for (ll i = 0; i < n; i++)
#define forAB(i, a, b) for (ll i = a; i <= b; i++)
#define rFN(i, n) for (ll i = n; i >= 0; i--)
#define rFAB(i, b, a) for (ll i = b; i >= a; i--)
#define all(x) (x).begin(), (x).end()
#define middle low + (high - low) / 2
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define boo cout << "Boo" << '\n'
#define YES cout << "YES"
#define NO cout << "NO"

const int MOD = 1000000007;
#define PI 3.14

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
    int n;
    cin >> n;
    v64 arr(n);
    cinArr(n, arr);
    int s;
    cin >> s;
    vector<string> vs(s);
    cinArr(s, vs);
    forN(i, s) {
        if (vs[i].length() != n) {
            NO;
            cout << '\n';
            continue;
        }
        bool flag = true;
        unordered_map<char, int> mp;
        unordered_map<int, char> mp2;

        forN(j, n) {
            if (mp.count(vs[i][j]) == 0) {
                mp[vs[i][j]] = arr[j];
            } else if (mp[vs[i][j]] != arr[j]) {
                NO;
                flag = false;
                cout << '\n';
                break;
            }
        }

        forN(j, n) {
            if (!flag)
                break;
            if (mp2.count(arr[j]) == 0) {
                mp2[arr[j]] = vs[i][j];
            } else if (mp2[arr[j]] != vs[i][j]) {
                NO;
                flag = false;
                cout << '\n';
                break;
            }
        }
        if (flag) {
            YES;
            cout << '\n';
        }
    }

    // YES;
}

int main() {
    fast_cin();

    tc {
        levi();
        // cout << '\n';
    }
    return 0;
}