#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	int A, B, sum = 0;
	int cont = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		printf("%5d", i);
		sum = sum + i;
		cont++;
		if (cont == 5) {
			cout << endl;
			cont = 0;
		}
	}
	if ((B - A) - 4 == 0) //�����������ж�  ������ֻ��һ�е�ʱ���������Ļ��з�
	{
		cout << "Sum = " << sum << endl;
	}
	else
	{
		cout << endl;
		cout << "Sum = " << sum << endl;
	}


	return 0;
}
