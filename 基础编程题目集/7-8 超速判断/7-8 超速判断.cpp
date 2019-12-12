#include<iostream>
using namespace std;
int main() {
	unsigned int V;
	cin >> V;
	if (V > 60) {
		cout << "Speed: " << V << " - Speeding";
	}
	else
	{
		cout << "Speed: " << V << " - OK";
	}
	return 0;
}