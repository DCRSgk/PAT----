#include<iostream> //������ȷ                    һ����ʱ
#include<cstdio>   //һ����ʱ
#include<cmath>
#include<vector>   //��̬����
using namespace std;
int judge(int input);
int main() {
	int i, m, n;
	int count = 0;
	scanf_s("%d %d", &m, &n);
	for (i = 2;; i++) {
		if (judge(i)){
			if()
		}
	}
	return 0;
}
int judge(int input) {//�ж��Ƿ������� 
	
	if (input == 2 || input == 3) {
		return input;
	}
	for (int i = 2; i < sqrt(input); i++){
		if (input % i == 0){
			return 0;			
		}
	}
	return input;
}