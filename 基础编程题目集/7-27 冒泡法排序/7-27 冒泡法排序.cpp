#include<iostream>

using namespace std;
int main() {
    int N, K;
    int A[100];
    int temp = 0;
    int i =0;
    cin >> N >> K;
    for (i = 0; i < N; i++) {
        cin >> A[i];
    }

    while (K--){
        for (int i = 0; i < N - 1; i++) {//Ã°ÅÝÅÅÐòµÄÊµÖÊ swap
            if (A[i] > A[i + 1]) {
                A[i] = temp;
                A[i] = A[i + 1];
                A[i + 1] = temp;
            }
        }
    }
        for (int i = 0; i < N; i++) {
            if (i < N - 1)cout << A[i] << " ";
            else{
                cout << A[i];
            }
        }


        return 0;
}