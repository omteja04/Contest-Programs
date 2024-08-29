/**
 * Author: omteja04
 * Created on: 29-08-2024 15:39:48
 * Description: isLucky
 **/

// https : // app.codesignal.com/arcade/intro/level-3/3AdBC97QNuhF6RwsQ

#include <math.h>
        int
        findSum(int n) {
    int sum = 0;
    while (n) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}
bool solution(int n) {
    int digits = log10(n) + 1;
    int ls = 0, rs = 0;
    int power = pow(10, digits / 2);
    int fh = n / power;
    int sh = n % power;
    return findSum(fh) == findSum(sh);
}
