#include<iostream>
using namespace std;
int main() {
    int x, y, n;
    int judge = 0;
    cin >> n;
    x = y = 0;
    for (x = 0; x <= 100; x++) {
        for (y = 100; y >= 0; y--) {
            if (x * x + y * y == n && x <= y && x != 0 && y != 0) {
                cout << x << " " << y << endl;
                judge++;
                continue;
            }
        }
    }
    if (judge == 0) {
        cout << "No Solution" << endl;
    }
    return 0;
}