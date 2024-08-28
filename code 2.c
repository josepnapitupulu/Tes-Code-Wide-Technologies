#include <stdio.h>

void bubbleSort(int arr[], int n) {
    int i, j; 
    for (i = 0; i < n-1; i++) {
        printf("Pass %d:\n", i+1); 
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            printf("Iterasi %d.%d: ", i+1, j+1);
            printArray(arr, n);
        }
        printf("\n");
    }
}

void printArray(int arr[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90, 45, 29, 18};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Array sebelum diurutkan: \n");
    printArray(arr, n);
    
    bubbleSort(arr, n);

    printf("Array setelah diurutkan: \n");
    printArray(arr, n);
    
    return 0;
}

