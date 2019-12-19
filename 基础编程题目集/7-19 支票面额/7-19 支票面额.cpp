//f<100
//y<100
//100f+y-n=200y+f
//¡ßf<100 && n>0
//¡àf < 100; y <= 49

#include<iostream>
using namespace std;
int main() {
        int n = 0, y = 0, f = 0, flag = 0;
        cin >> n;
        for (f = 0; f < 100 && flag != 1; f++) {
            for (y = 0; y <= 49; y++) {
                if (98 * f - 199 * y == n) {
                    printf("%d.%d", y, f);
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "No Solution" << endl;
        return 0;
}
  