#include<stdio.h>

void sort(int arr[],int n){
    for (int i=0;i<n-1 ;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


// Function to find the h-index
int hIndex(int citations[], int citationsSize) {
    // code here
    int n=citationsSize;
    sort(citations,n);
    for(int i=0;i<n;i++)
    {
        if(citations[i]<i+1)
        {
            return i;
        }
    }
    return citationsSize;
    
}



int main()
{
    int n;
    printf("Enter the size of the array :");
    scanf("%d",&n);
    printf("enter the array :");
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,n);
    
    printf("[");
    for (int i=0;i<n ;i++)
    {
        printf("%d",a[i]);
    }
    printf("]");
    
    printf("\n%d",hIndex(a,n));
    return 0;
}