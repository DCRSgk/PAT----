#include<iostream>
using namespace std;
int main() {
    int n;
    int coun = 0;
    cin >> n;
    while (n != 1) {     //n=1时结束循环
        if (n % 2 == 1) {//n为奇数
            n = (n * 3 + 1) / 2;
        }
        else {           //n为偶数
            n /= 2;
        }
        coun++;
    }
    cout << coun;
    return 0;
}