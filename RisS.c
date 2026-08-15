
#include <stdio.h>

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int size = 7;

    int count = 0;

    for (int i = 0; i < size; i++) {

        if (arr[i] > arr[(i + 1) % size]) {
            count++;
        }
    }

    if (count <= 1) {
        printf("Array is sorted and rotated\n");
    }
    else {
        printf("Array is not sorted and rotated\n");
    }

    return 0;
}


