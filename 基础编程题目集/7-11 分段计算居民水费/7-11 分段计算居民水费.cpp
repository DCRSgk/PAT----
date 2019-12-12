#include<iostream>     //要注意的是数据类型，均为double类型，如果输入x是int类型的话，
                       //测试点1就是错误的
#include <iomanip>    //setiosflags(ios::fixed) << setprecision(2)
using namespace std;
int main() {
	double y;
	double x;
	cin >> x;
	if (x > 15) {
		y = 2.5 * x - 17.5;
	}
	else
	{
		y = 4 * x / 3;
	}
	cout << setiosflags(ios::fixed) << setprecision(2)
		<< y << endl;
	return 0;

}