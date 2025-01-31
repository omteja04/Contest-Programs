/**
 * Author: omteja04
 * Created on: 23-01-2025 21:30:05
 * Description: A_Looped_Playlist
 **/

#include <cstdint>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;
#include <bits/stdc++.h>
#define ll long long
void levi(long long n, long long p, vector<long long> &arr) {
    pair<ll, ll> ans = {INT64_MAX, INT64_MAX};
    // long long sum = accumulate(arr.begin(), arr.end(), 0LL);
    vector<long long> prefix(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j >= i) {
                ll dif = prefix[j] - prefix[i - 1];
                if(p - dif <= 0) {
                    ll a = j - i + 1;
                    if(ans.second > a) {
                        ans = {i, a};
                    }
                    // cout << i << "i" << j << ":- " << a << " ";
                } else {
                    ll req = p - dif, res = req / prefix[n];
                    if(req % prefix[n] != 0) {
                        res++;
                    }
                    ll a = j - i + 1 + res * n;
                    if(ans.second > a) {
                        ans = {i, a};
                    }
                    // cout << i << "i" << j << ":- " << req << " ";
                }
            } else {
                ll dif = prefix[n] - prefix[i - 1] + prefix[j];
                if(p - dif <= 0) {
                    ll a = n - i + j + 1;
                    if(ans.second > a) {
                        ans = {i, a};
                    }
                    // cout << i << "j" << j << ":- " << a << "i" << dif << " ";
                } else {
                    ll req = p - dif, res = req / prefix[n];
                    if(req % prefix[n] != 0) {
                        res++;
                    }
                    ll a = n - i + j + 1 + res * n;
                    if(ans.second > a) {
                        ans = {i, a};
                    }
                    // cout << i << "i" << j << ":- " << a << "j" << dif << " ";
                }
                // cout << i << "i" << j << ":- " << dif << " ";
            }
        }
        // cout << endl;
    }
    cout << ans.first << " " << ans.second << endl;
}
int main() {
    long long n, p;
    cin >> n >> p;
    vector<long long> arr(n + 1);
    for(int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    levi(n, p, arr);
}
