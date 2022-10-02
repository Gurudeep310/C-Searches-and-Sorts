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
    int val = 0;
    printf("Element to be deleted: ");
    scanf("%d",&val);
    int flag = 0;
    int pos = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]==val)
        {
            flag = 1;
            pos = i;
        }
    }
    for(int i = pos; i<n;i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    printf("Element deleated.");
    for(int i =0 ;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}