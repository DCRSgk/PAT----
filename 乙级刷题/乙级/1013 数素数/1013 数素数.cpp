#include<iostream> //部分正确                    一个超时
#include<cstdio>   //一个超时
#include<cmath>
#include<vector>   //动态数组
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
int judge(int input) {//判断是否是质数 
	
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