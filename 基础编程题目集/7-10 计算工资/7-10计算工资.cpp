#include<iostream>
#include <iomanip>    //setiosflags(ios::fixed) << setprecision(2) 
using namespace std;  //单独用setprecision(2)为保留有效数字 加上前缀之后可直接去小数
int income(int age, int hour) {
	int wage;
	if (age < 5) {
		if (hour <= 40) {
			wage = 30 * hour;
		}
		else {
			wage = 30 * 40 + (hour - 40) * 30 * 1.5;
		}
	}

	else{
		if (hour <= 40) {
			wage = 50 * hour;
		}
		else
		{
			wage = 50 * 40 + (hour - 40) * 50 * 1.5;
		}
			
	}
	return wage;
}
int main() {
	int age, hour;
	float wage;
	cin >> age >> hour;
	wage = income(age, hour);
	cout << setiosflags(ios::fixed) << setprecision(2) << wage;
	return 0;
}
