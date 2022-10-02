#include<stdio.h>

int main()
{
    int n = 0;
    printf("\nEnter number of elements in the array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i =0 ; i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int small = 0;
    int pos = 0;
    for(int i = 0; i<n; i++)
    {
        small = arr[i];
        pos = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                small = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
    printf("Sorted in ascending order: ");
    for(int i =0; i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}