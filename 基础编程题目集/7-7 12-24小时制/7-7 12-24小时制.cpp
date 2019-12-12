#include <cstdio> //scanfºÍprintfÕæÏã
int main()
{
    int h = 0, m = 0;
    char s;
    scanf_s("%d:%d", &h, &m);

    if (h > 12)
    {
        printf("%d:%d PM", h - 12, m);
    }
    else if (h == 12)
        printf("%d:%d PM", h, m);
    else
        printf("%d:%d AM", h, m);
    return 0;
}