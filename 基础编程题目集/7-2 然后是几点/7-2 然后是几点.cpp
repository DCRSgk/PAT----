#include<iostream>
using namespace std;
int main() {
    int minute, time_before, time_now, a;
    cin >> time_before >> minute;
    a = (time_before / 100) * 60 + (time_before % 100) + minute;
    //����ǰʱ��ת��Ϊ�������ڼ��Ϲ�ȥ�ķ�����
    time_now = (a / 60) * 100 + a % 60;//���ܷ�����ת��ΪСʱ��
    cout << time_now << endl;
    return 0;
}