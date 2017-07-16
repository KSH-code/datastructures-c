#include <stdio.h>
#include <stdlib.h> //malloc free
int main(void)
{
    int *f;
    f = (int *)malloc(sizeof(int));
    *f = 3;
    printf("%d\n", *f);
    free(f);
    printf("%d\n", *f);
    system("pause");
    return 0;
}