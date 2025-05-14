#include <stdio.h>

float calculateAverage(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    float avg = calculateAverage(numbers, n);
    printf("Average: %.2f\n", avg);

    return 0;
}
