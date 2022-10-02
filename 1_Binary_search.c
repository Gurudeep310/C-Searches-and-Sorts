#include<stdio.h>

int binary_search(int arr[],int size,int key)
{
    int low = 0, high = size;
    int flag = 0;
    int mid = (low+high)/2;
    while(arr[mid]!=key)
    {
        if(key < mid)
        {
            high = mid-1;
        }
        else if(key == arr[mid])
        {
            return mid;
        }
        else if(key > mid)
        {
            low = mid+1;
        }
    }
    return mid;

}
int main()
{
    int size = 0;
    printf("\nEnter the size of array: ");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = 0,max = size;
    int key = 0;
    printf("\nEnter the key to search the element in that array: ");
    scanf("%d",&key);
    int array = binary_search(arr,size,key);
    printf("Element found at : %d and is %d",array,arr[array]);
    return 0;
}