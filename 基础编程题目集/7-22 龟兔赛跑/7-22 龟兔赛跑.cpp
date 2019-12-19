#include<stdio.h>
int main()
{
    int n, g = 3, t = 9, gs, ts, m;
    scanf("%d", &n);
    gs = n * g;
    m = n % 90;
    if (m == 0 || m == 30 || m == 45 || m == 60) printf("-_- %d\n", gs);
    else if ((m > 30 && m < 45) || (m > 60 && m < 90)) printf("@_@ %d\n", gs);
    else {
        ts = 270 * (n / 90);
        if (m > 0 && m <= 10) ts += m * t;
        else if (m > 10 && m < 30) ts += 90;
        else if (m > 45 && m <= 50) ts = ts + 90 + (m - 40) * t;
        else {
            ts += 180;
        }
        printf("^_^ %d\n", ts);
    }
    return 0;
}