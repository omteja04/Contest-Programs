/**
 * Author: omteja04
 * Created on: 29-05-2024 20:10:57
 * Description: Even_Sum_Subarray
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
#define bb push_back
#define mp make_pair
#define fi first
#define se second
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
    vector<int> arr(n);
    cinArr(n, arr);
    ll maxLen = 0;
    for (int i = 0; i < n; i++) {
        ll currSum = 0;
        for (int j = i; j < n; j++) {
            currSum += arr[j];
            if (currSum % 2 == 0) { // Check if the sum is even
                maxLen = max(maxLen, (ll)(j - i + 1));
            }
        }
    }
    cout << maxLen;
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}