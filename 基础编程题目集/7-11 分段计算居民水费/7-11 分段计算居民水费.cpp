#include<iostream>     //Ҫע������������ͣ���Ϊdouble���ͣ��������x��int���͵Ļ���
                       //���Ե�1���Ǵ����
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