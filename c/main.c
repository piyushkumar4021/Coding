#include <stdio.h>
#include <limits.h>

int find(int arr[], int size, int target)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == target)
            return -1;
    }

    return 0;
}

int main()
{

    int size;
    scanf("%d", &size);

    int i, j, arr[size];
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int target;
    scanf("%d", &target);

    printf("%d", find(arr, size, target));

    return 0;
}