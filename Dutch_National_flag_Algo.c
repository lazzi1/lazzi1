#include<stdio.h>

void sort012(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                
                {
                    int temp = arr[low];
                    arr[low] = arr[mid];
                    arr[mid] = temp;
                }
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                
                {
                    int temp = arr[mid];
                    arr[mid] = arr[high];
                    arr[high] = temp;
                }
                high--;
                break;
        }
    }
}

int main() {
    int n = 3;
    int arr[] = {1,0,2};
      
    sort012(arr, n);
    
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}