/**
 * Author: omteja04
 * Created on: 20-02-2025 14:30:37
 * Description: N_Same_Parity_Summands
 **/
#include <iostream>
using namespace std;
using ll = long long;
void levi() {
    ll n, k;
    cin >> n >> k;
    if(k > n) {
        cout << "No";
        return;
    }
    if((n - (k - 1)) & 1) {
        cout << "Yes\n";
        for(int i = 1; i < k; i++) {
            cout << 1 << " ";
        }
        cout << n - k + 1;
        return;
    } else if((n - (2 * (k - 1))) % 2 == 0 && (n - (2 * (k - 1))) > 0) {
        cout << "Yes\n";
        for(int i = 1; i < k; i++) {
            cout << 2 << " ";
        }
        cout << n - 2 * k + 2;
        return;
    }
    cout << "No";
}
int main() {
    ll q;
    cin >> q;
    while(q--) {
        levi();
        cout << "\n";
    }
}
