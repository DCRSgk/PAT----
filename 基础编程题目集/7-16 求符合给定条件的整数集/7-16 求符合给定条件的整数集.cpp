#include<iostream>
using namespace std;
int main()
{
    int a;
    int i, j, k;
    int count = 0;
    cin >> a;
    for (i = a; i < a + 4; i++)
    {
        for (j = a; j < a + 4; j++)
        {
            for (k = a; k < a + 4; k++)
            {
                if (i != j && i != k && j != k)
                {
                    count++;
                    if (count % 6 == 0)
                        cout << i << j << k << endl;
                    else
                        cout << i << j << k << " ";
                }
            }
        }
    }
    return 0;
}