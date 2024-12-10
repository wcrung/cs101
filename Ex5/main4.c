#include <stdio.h>
int main()
{
    int i = 12345;
    int x, y, m;

    x = (i / 1000)%10;
    y = i % 10;

    m = i - x * 1000 - y + y * 1000 + x;

    printf("%d\n", m);

    return 0;
}
