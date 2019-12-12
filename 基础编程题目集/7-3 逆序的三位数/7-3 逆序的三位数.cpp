#include<iostream>
using namespace std;
int main() {
	int i;
	int bit, decade, hun;
	int New_i;
	cin >> i;
	hun = i / 100;
	decade = i / 10 % 10;
	bit = i % 10;
	New_i = 100 * bit + decade * 10 + hun * 1;
	cout << New_i;

	return 0;
}