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
	if ((B - A) - 4 == 0) //对行数进行判断  避免在只有一行的时候输出多余的换行符
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
