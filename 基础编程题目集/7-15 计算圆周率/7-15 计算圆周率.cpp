#include <iostream>
#include <cmath>
#include<cstdio>
using namespace std;
int main(void)
{
	double m, n;
	double end, pi;
	int i = 1;
	m = 1.0f;
	n = 1.0f;
	pi = 1.0f;
	cin >> end;
	do {
		m *= i;//�׳�
		n *= (1.0 + 2.0 * i);//��ĸ ż����ˣ�1��3��5~2n+1��
		i++;
		pi += (m / n);
	} while (m / n >= end);
	printf("%.6lf", pi * 2.0);//printf�󷨺�
	return 0;
}