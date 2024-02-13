#include <stdio.h>
int main() {
    int n ;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
        int arr[n];
    printf("Enter %d elements of the array:\n", n);
    int i;
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int x ;
    printf("Enter the element to search: ");
    scanf("%d", &x);
    int a = 0;
    for ( i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("Element %d found at index %d.\n", x, i);
            a = 1;
            break;
        }
    }
        if (a!=1) {
        printf("Element %d not found in array.\n", x);
    }
    
    return 0;
} 
