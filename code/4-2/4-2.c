#include <stdio.h>

int sum(int arr[], int n) {
    int temp = 0;
    for (int i = 0; i < n; i++)
        temp += arr[i];
    return temp;
}

double average(int arr[], int n) {
    int temp = sum(arr,n);
    return temp / n;
}

int max(int arr[], int n) {
    int temp = -99999999;
    for (int i = 0; i < n; i++)
        if(temp < arr[i]) temp = arr[i];
    return temp;
}

int main() {
    int arr[] = {3, 7, 1, 9, 4, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("sum: %d\n", sum(arr, n));
    printf("avg: %.2f\n", average(arr,n));
    printf("max: %d\n", max(arr,n));
    return 0;
}