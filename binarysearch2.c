#include <stdio.h>

int binarySearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    // Keep searching until low <= high
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    // If element not found
    return -1;
}

void main()
{
    // Sorted array for binary search
    int size,i;
    printf("enter the value of size");
    scanf("%d",&size);
    int arr[size]; //= {1, 3, 5, 56, 64, 73, 123, 225, 444};
    //int size = sizeof(arr) / sizeof(int);
    printf("enter array element");
      for(i=0;i<size;i++)
      {
         scanf("%d",&arr[i]);
      }
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
}