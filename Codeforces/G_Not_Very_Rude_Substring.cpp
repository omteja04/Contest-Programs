/**
 * Author: omteja04
 * Created on: 23-01-2025 18:38:30
 * Description: G_Not_Very_Rude_Substring
 **/

#include <iostream>
#include <string>
int main() {
    long long n, rudenessLimit;
    std::cin >> n >> rudenessLimit;
    std::string str;
    std::cin >> str;
    long long a = 0, b = 0, rudeness = 0;
    long long ans = INT_MIN;
    for(long long left = 0, right = 0; right < n; right++) {
        a += str[right] == 'a' ? 1 : 0;
        b += str[right] == 'b' ? 1 : 0;
        if(str[right] == 'b') {
            rudeness += a;
        }
        while(rudeness > rudenessLimit) {
            a -= str[left] == 'a' ? 1 : 0;
            b -= str[left] == 'b' ? 1 : 0;
            if(str[left] == 'a') {
                rudeness -= b;
            }
            left++;
        }
        ans = std::max(ans, right - left + 1);
    }
    std::cout << ans;
}
