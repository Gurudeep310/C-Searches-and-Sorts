//NOT WORKING
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
    printf("Element to be inserted: ");
    scanf("%d",&val);
    for(int i = n-1;i>0 && val<arr[i];--i)
    {
        arr[i+1] = arr[i];
        n++;
    }
    printf("Element inserted.");
    for(int i =0 ;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
