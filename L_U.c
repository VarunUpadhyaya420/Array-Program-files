#include <stdio.h>
int lower_bound(int arr[], int n, int target) {
    int low = 0, high = n; 
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) {
            low = mid + 1; 
        } else {
            high = mid; 
        }
    }
    return low; 
}
int upper_bound(int arr[], int n, int target) {
    int low = 0, high = n;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1; 
        } else {
            high = mid; 
        }
    }
    return low; 
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d sorted integers: ", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            return 1;
        }
    }
    printf("Enter target element: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input.\n");
        return 1;
    }
    int lb = lower_bound(arr, n, target);
    int ub = upper_bound(arr, n, target);
    printf("Lower bound index: %d\n", lb);
    printf("Upper bound index: %d\n", ub);
    if (lb < n) printf("Lower bound value: %d\n", arr[lb]);
    else printf("Lower bound value: None (all elements < target)\n");

    if (ub < n) printf("Upper bound value: %d\n", arr[ub]);
    else printf("Upper bound value: None (all elements <= target)\n");

    return 0;
}
