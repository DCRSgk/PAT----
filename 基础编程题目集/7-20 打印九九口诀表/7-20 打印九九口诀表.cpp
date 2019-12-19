#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int n, m;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("%d*%d=%-4d", j, i, i * j);//输出空格还是printf好用
		}
		cout << endl;
	}
	return 0;
}