#include<iostream>
using namespace std;
int main() {
    int minute, time_before, time_now, a;
    cin >> time_before >> minute;
    a = (time_before / 100) * 60 + (time_before % 100) + minute;
    //将当前时间转化为分钟数在加上过去的分钟数
    time_now = (a / 60) * 100 + a % 60;//将总分钟数转化为小时制
    cout << time_now << endl;
    return 0;
}