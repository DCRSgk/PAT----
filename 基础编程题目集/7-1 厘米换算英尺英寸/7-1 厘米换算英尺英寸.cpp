#include<iostream>
using namespace std;
int main() {
    int cm;
    int foot = 0, inch = 0;
    cin >> cm;
    foot = cm / 30.48;
    inch = 12 * (cm / 30.48 - foot);
    cout << foot << " " << inch << endl;
    return 0;
}