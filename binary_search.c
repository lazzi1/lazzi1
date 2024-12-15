#include <stdio.h>

int main() {
    int a[10];
    printf("Enter The number in assending other :");
    for (int i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    int key;
    printf("enter the number you want to search :");
    scanf("%d",&key);
    int i=0;
    int j=9;
    int flag=0;
    int pos;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(key<a[mid])
        {
            j=mid-1;

        }
        if(key>a[mid])
        {
            i=mid+1;

        }
        if(key==a[mid])
        {
            pos=mid+1;
            flag++;
            break;

        }
    }
    if(flag==0)
    {
        printf("not found in array!");

    }
    else {
        printf("found in %d position",pos);

    }

    return 0;
}