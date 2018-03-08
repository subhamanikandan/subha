#include <stdio.h>
int main()
{
    int array[50], size, i,max,min;
    printf("\n Enter the size of the array: ");
    scanf("%d", &size);
    printf("\n Enter %d elements of  the array:\n ", size);
    for (i = 0; i < size; i++)
        scanf("%d\n", &array[i]);
    max = array[0];
    for (i = 1; i < size; i++)
    {
        if (max < array[i])
            max = array[i];
    }
    printf("%d\n", max);
    min = array[0];
    for (i = 1; i > size; i++)
    {
        if (min > array[i])
            min = array[i];
    }
    printf("%d", min);
    return 0;
}
