#include <stdio.h>

int linear_Search(int arr[], int n, int search) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Acc_no found successfully at %d\n", i);
            return i;
        }
    }

    printf("Acc_no not found\n");
    return -1;
}

int main() {
    int a[] = {101, 20, 49, 385, 210, 620, 85, 921, 12, 206};
    int n = sizeof(a);
    int search;

    printf("Enter the number to be searched: ");
    scanf("%d", &search);

    linear_Search(a, n, search);
    return 0;
}
