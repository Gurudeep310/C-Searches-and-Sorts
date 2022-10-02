#include<stdio.h>

int main()
{
    int n;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array sorted in ascending order: ");
    for(int i = 0; i<n;i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while(temp<arr[j] && j>=0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    for(int i =0 ;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}