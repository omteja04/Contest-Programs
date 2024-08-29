/**
 * Author: omteja04
 * Created on: 29-08-2024 15:44:52
 * Description: addBorder
 **/

// https: // app.codesignal.com/arcade/intro/level-4/ZCD7NQnED724bJtjN
#include <bits/stdc++.h>
using namespace std;
vector<string> solution(vector<string> picture) {
    int rows = picture.size();
    int cols = picture[0].size();
    vector<string> vec(1, string(cols + 2, '*'));
    for (int i = 0; i < rows; i++) {
        string temp = "*";
        for (char &ch : picture[i]) {
            temp += ch;
        }
        temp += "*";
        vec.push_back(temp);
    }
    vec.push_back(string(cols + 2, '*'));
    return vec;
}
