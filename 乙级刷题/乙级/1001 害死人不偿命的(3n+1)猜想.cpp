#include<iostream>
using namespace std;
int main() {
    int n;
    int coun = 0;
    cin >> n;
    while (n != 1) {     //n=1ʱ����ѭ��
        if (n % 2 == 1) {//nΪ����
            n = (n * 3 + 1) / 2;
        }
        else {           //nΪż��
            n /= 2;
        }
        coun++;
    }
    cout << coun;
    return 0;
}