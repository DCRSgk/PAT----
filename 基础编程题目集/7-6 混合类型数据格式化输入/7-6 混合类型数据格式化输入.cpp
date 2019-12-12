#include<iostream>
#include <iomanip>
using namespace std;
int main() {
	float f1, f2;
	int i1;
	char c1;
	cin >> f1;
	cin >> i1;
	cin >> c1;
	cin >> f2;
	cout << c1 << " " << i1 << " ";
	cout << setiosflags(ios::fixed) << setprecision(2) << f1 << " " << f2;
	return 0;
}