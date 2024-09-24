#include <bits/stdc++.h>
#define debug(x) cerr << "Line(" << __LINE__ << ") -> " << (#x) << " = " << (x) << '\n'
using namespace std;
void levi() {
    int n;
    cin >> n;
    vector<int> shells(3);
    for (int i = 0; i < 3; i++) {
        shells[i] = i;
    }
    vector<int> freq(3, 0);
    for (int i = 0; i < n; i++) {
        int a, b, g;
        cin >> a >> b >> g;
        a--;
        b--;
        g--;
        swap(shells[a], shells[b]);
        freq[shells[g]]++;
    }
    cout << max({freq[0], freq[1], freq[2]});
}
int main() {
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    levi();
    return 0;
}