/**
 * Author: omteja04
 * Created on: 03-06-2024 21:25:11
 * Description: D_GCD_sequence
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

bool isNonDecreasing(vector<ll> &arr) {
    for (ll i = 0; i < arr.size() - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool check(v64 &temp) {
    ll n = temp.size();
    v64 gcdArr(n - 1);
    for (ll i = 0; i < n - 1; i++) {
        gcdArr[i] = __gcd(temp[i], temp[i + 1]);
    }
    for (ll i = 1; i < n - 1; i++) {
        if (gcdArr[i] < gcdArr[i - 1]) {
            return 0;
        }
    }
    return 1;
}
void levi() {
    ll n;
    cin >> n;
    vector<ll> arr(n);
    cinArr(n, arr);
    if (n == 2) {
        cout << "YES";
        return;
    }

    vector<ll> gcdArr(n - 1);
    for (ll i = 0; i < n - 1; i++) {
        gcdArr[i] = __gcd(arr[i], arr[i + 1]);
    }
    ll index = -1;
    for (ll i = 1; i < n; i++) {
        if (gcdArr[i] < gcdArr[i - 1]) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        YES;
        return;
    }
    for (ll i = index - 1; i <= index + 1; i++) {
        v64 temp;
        for (ll j = 0; j < n; j++) {
            if (i != j) {
                temp.PB(arr[j]);
            }
        }
        if (check(temp)) {
            YES;
            return;
        }
    }
    NO;
}

int main() {
    fast_cin();

    tc {
        levi();
        cout << '\n';
    }
    return 0;
}