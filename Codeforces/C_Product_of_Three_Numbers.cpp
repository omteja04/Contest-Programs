/**
 * Author: omteja04
 * Created on: 18-02-2025 17:31:12
 * Description: C_Product_of_Three_Numbers
 **/
#include <iostream>
#include <set>
using ll = long long;
using namespace std;
void factor(ll &n, set<ll> &st) {
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0 && !st.count(i)) {
            st.insert(i);
            n /= i;
            break;
        }
    }
}
void levi() {
    ll n;
    cin >> n;
    set<ll> st;
    factor(n, st);
    factor(n, st);
    if(st.size() < 2 || n == 1 || st.count(n)) {
        cout << "NO";
        return;
    }
    st.insert(n);
    cout << "YES\n";
    for(auto &it: st) {
        cout << it << " ";
    }
}
int main() {
    ll q;
    cin >> q;
    while(q--) {
        levi();
        cout << "\n";
    }
}
