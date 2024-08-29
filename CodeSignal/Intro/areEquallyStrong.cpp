/**
 * Author: omteja04
 * Created on: 29-08-2024 15:53:57
 * Description: areEquallyStrong
 **/
// https : // app.codesignal.com/arcade/intro/level-5/g6dc9KJyxmFjB98dL
#include <bits/stdc++.h>
using namespace std;
bool solution(int yourLeft, int yourRight, int friendsLeft, int friendsRight) {
    int yourStrong = max(yourLeft, yourRight);
    int yourWeak = min(yourLeft, yourRight);
    int friendsStrong = max(friendsLeft, friendsRight);
    int friendsWeak = min(friendsLeft, friendsRight);
    return (yourStrong == friendsStrong) && (yourWeak == friendsWeak);
}
