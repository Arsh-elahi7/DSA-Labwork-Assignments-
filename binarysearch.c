#include <stdio.h>

int binary_Search(int arr[], int n, int search) {
    
    int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==search){
            printf("Product id found successfully at %d\n", mid);
            return mid;
        }
        else if(arr[mid]<search){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    printf("Product id not found\n");
    return -1;
   
}

int main(void) {
    int a[] = {2, 8, 9, 16, 18, 26, 38, 48, 51, 90};
    int n = sizeof(a)/sizeof(a[0]);
    int search;

    printf("Enter the product id to be searched: ");
    scanf("%d", &search);

    binary_Search(a, n, search);
    return 0;
}
