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
    int ele, loc;
    printf("Enter the element to insert: \n");
    scanf("%d", &ele);
    printf("Enter the location where  to insert: \n");
    scanf("%d", &loc);
    for (int i = n - 1; i >= loc - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[loc - 1] = ele;
    printf("After insert the element the new Arry is:\n");
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
