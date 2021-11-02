#include <stdio.h>
#include <stdlib.h>

int main()
{ /*
    int *ptr;
    int n;
    printf("Enter the size of array you want to create\n");

    scanf("%d", &n);
    ptr = (int *)malloc(3 * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d of this array:\t", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array:\t", i);
        printf("%d\n", ptr[i]);
    }
    */

    int *ptr;
    int n;
    printf("Enter the size of array you want to create\n");

    scanf("%d", &n);
    ptr = (int *)calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        printf("Enter the value of %d of this array:\t", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d of this array:\t", i);
        printf("%d\n", ptr[i]);
    }
    


printf("Enter the size of array you want to create\n");

scanf("%d", &n);
ptr = (int *)realloc(ptr, n * sizeof(int));

for (int i = 0; i < n; i++)
{
    printf("Enter the value of %d of this array:\t", i);
    scanf("%d", &ptr[i]);
}
for (int i = 0; i < n; i++)
{
    printf("The value of %d of this array:\t", i);
    printf("%d\n", ptr[i]);
}
free(ptr);

return 0;
}
/*
ptr[i] means ptr plus i
*/