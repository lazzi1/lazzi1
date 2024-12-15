/*Given an array of integers arr[]. Find the Inversion Count in the array.Two elements arr[i] and arr[j] form an inversion if arr[i] > arr[j] and i < j.

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.If an array is sorted in the reverse order then the inversion count is the maximum.*/

#include<stdio.h>

int countInversion(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count++;
            }
        }
    }
    
    return count;
}
int main()
{    
    int n;
    printf("enter the size :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int inversion = countInversion(a,n);
    
    printf("\nThe array :");
    printf("[");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]");
    printf("\n\n%d", inversion);
    return 0;
}