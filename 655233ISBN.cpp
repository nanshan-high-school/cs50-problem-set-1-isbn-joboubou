#include <iostream>
using namespace std;
int main() {
    long long isbn;
    cout << "請輸入你的isbn碼:";
    cin >> isbn;
    int i,j,k;
    j = isbn / 10;
    i += j / 100000000;
    j = j % 100000000;

    i += j / 10000000 * 2;
    j = j % 10000000;

    i += j / 1000000 * 3;
    j = j % 1000000;

    i += j / 100000 * 4;
    j = j % 100000;

    i += j / 10000 * 5;
    j = j % 10000;

    i += j / 1000 * 6;
    j = j % 1000;

    i += j / 100 * 7;
    j = j % 100;

    i += j / 10 * 8;
    j = j % 10;

    i += j * 9;
    j = j % 1;

    if (i % 11 == isbn % 10){
        cout << "yes";
    } else {
        cout << "no";
    }
}
