#include <stdio.h>
#include <assert.h>

int main()
{
    int x, y;

    printf("Division of two numbers\n");

    scanf("%d%d", &x, &y);

    assert(y != 0);

    printf("%d/%d = %.2f\n", x, y, x/(float)y);
    return 0;
}
