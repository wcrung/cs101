#include <stdio.h>
int main()
{
    for (int i = 1; i <= 81; i++) {
        int y = (i-1) / 9 + 1; 
        int x = (i-1) % 9 + 1; 
        printf("%d*%d=%d\t", y, x, y*x);
        
        if (x == 9) {
            printf("\n");
        }
    }
    return 0;
}
