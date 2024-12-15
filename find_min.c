#include<stdio.h>


// User function Template for C

int findMin(int* arr, int n) 
{
    // code here
    
    for(int i=1;i<n ;i++)
    {
        if(*(arr+i)<*arr)
        {
            *arr=*(arr+i);
        }
    }
    
    return *arr;
}



int main()

{    
    int n;
    printf("\nEnter The Size of the Array :");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter The Array which is Sorted but Rotated :");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k=findMin(a,n);
    printf("\nThe Minimum Number is %d in Given Array ",k);
    
    
    //Use Binary Search Function for printing the array with the minimum 
    /*
    printf("[n");
    for(int i=0;i<n ;i++)
    {
        printf("%d",a[i]);
        if(i<n-1)
        {
            printf(", ");
        }
    }
    printf("]");
    */
    return 0;
}