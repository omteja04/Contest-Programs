/**
 * Author: omteja04
 * Created on: 29-08-2024 15:17:11
 * Description: centuryFromYear
**/

// https: // app.codesignal.com/arcade/intro/level-1/egbueTZRRL5Mm4TXN

int solution(int year) {
    return year % 100 != 0 ? year / 100 + 1 : year / 100;
}
