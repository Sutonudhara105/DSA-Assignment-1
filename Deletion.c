#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[20], n;
    printf("Enter the number of element: \n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int loc;

    printf("Enter the location where  to insert: \n");
    scanf("%d", &loc);
    for (int i = loc - 1; i <= n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    printf("After deleting the element the new Arry is:\n");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
