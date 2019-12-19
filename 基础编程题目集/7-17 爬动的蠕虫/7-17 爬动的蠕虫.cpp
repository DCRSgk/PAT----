#include<iostream>
using namespace std;
int main() {
    int N, U, D;
    cin >> N >> U >> D;
    int s = U;
    int time=1;
    while (s<N){   
        time++;
        if (time % 2 == 0)s = s - D;
        else{
            s = s + U;
        }  
    }
    cout << time << endl;
    return 0;
}