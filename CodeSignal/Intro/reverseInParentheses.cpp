/**
 * Author: omteja04
 * Created on: 29-08-2024 15:41:54
 * Description: reverseInParentheses
 **/

// https: // app.codesignal.com/arcade/intro/level-3/9DgaPsE2a7M6M2Hu6

#include <bits/stdc++.h>
using namespace std;
string solution(string s) {
    stack<char> st;
    for (char &ch : s) {
        if (ch == ')') {
            string temp = "";
            while (!st.empty() && st.top() != '(') {
                temp += st.top();
                st.pop();
            }
            st.pop();
            for (int i = 0; i < temp.length(); i++) {
                st.push(temp[i]);
            }
        } else {
            st.push(ch);
        }
    }
    string res = "";
    while (!st.empty()) {
        res = string(1, st.top()) + res;
        st.pop();
    }
    // reverse(res.begin(), res.end());
    return res;
}