#include <stdio.h>
#define size 20

int binary_search(int array[], int n, int key)
{
    int start = 0;
    int end = n;
    int mid = (start + end) / 2;
    int i, pos = -1;

    for (i = 0; i < n; i++)
    {
        if (array[mid] == key)
        {
            pos = mid;
        }
        else if (key < array[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return pos;
}
int main()
{
    int arr[size], n, i, key, pos = -1;
    printf("Enter the number of elements :\n");
    scanf("%d", &n);
    printf("enter the %d element inside the array :\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element that you want to search \n");
    scanf("%d", &key);
    pos = binary_search(arr, n, key);

    if (pos != -1)
    {
        printf("%d key is found at postion %d", key, pos);
    }
    else
    {
        printf("Error ! Element not found ");
    }
}