#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1) return 0;

    if (n < 2) {
        printf("No second largest\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    int first = -2147483648, second = -2147483648;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("No second largest\n");
    else
        printf("Second largest element: %d\n", second);

    return 0;
}
