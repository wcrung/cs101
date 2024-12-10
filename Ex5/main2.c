#include <stdio.h>
int main()
{
    double PI = 4.0f;
    int n = 426190;
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            PI -= 4.0 / (2 * i + 1);
        } else {
            PI += 4.0 / (2 * i + 1);
        }
    }
    printf("%.5f\n", PI);

    return 0;
}
