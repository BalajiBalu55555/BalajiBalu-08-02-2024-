#include <stdio.h>
int main() {
    int n, x;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements of the array in sorted order:\n", n);
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int low = 0, high = n - 1;
    int a = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == x) {
            printf("Element %d found at index %d.\n", x, mid);
            a = 1;
            break;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    if (a!=1) {
        printf("Element %d not found in array.\n", x);   
    }
    return 0;
} 
