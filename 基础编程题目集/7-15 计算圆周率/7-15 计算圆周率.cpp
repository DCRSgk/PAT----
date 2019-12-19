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
		m *= i;//阶乘
		n *= (1.0 + 2.0 * i);//分母 偶数相乘（1，3，5~2n+1）
		i++;
		pi += (m / n);
	} while (m / n >= end);
	printf("%.6lf", pi * 2.0);//printf大法好
	return 0;
}