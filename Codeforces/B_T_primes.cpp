/**
 * Author: omteja04
 * Created on: 20-02-2025 15:43:35
 * Problem: B_T_primes - Only squares of Primes are T primes
 **/

#include <cmath>
#include <iostream>
#include <vector>
using ll = long long;
using namespace std;
const int N = 1e6 + 1;
vector<bool> isPrime(N, true);
void tSieve() {
    isPrime[0] = false;
    isPrime[1] = false;
    for(int i = 2; i * i <= N; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= N; j += i) {
                isPrime[j] = false;
            }
        }
    }
}
void levi() {
    ll n;
    cin >> n;
    ll squareRoot;
    squareRoot = sqrt(n);
    if(squareRoot * squareRoot == n && isPrime[squareRoot]) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
int main() {
    ll t;
    cin >> t;
    tSieve();
    while(t--) {
        levi();
        cout << "\n";
    }
}
