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
    int key = 0;
    printf("\nEnter element tp be searched in array: ");
    scanf("%d",&key);
    int pos = 0;
    int flag = -1;
    for(int i = 0; i<n;i++)
    {
        if(arr[i]==key)
        {
            pos = i;
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag ==0)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element %d found at position %d",key,pos);
    }
    return 0;
}