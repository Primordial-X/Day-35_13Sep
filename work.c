#include <stdio.h>

//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second, INT_MIN; // Assuming 32-bit integers
    first = second = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) {
        printf("There is no second largest element.\n");
    } else {
        printf("The second largest element is: %d\n", second);
    }

    return 0;
}


//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

int main() {
    int n, k;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);
    
    k = k % n; // To handle cases where k >= n

    // Rotate the array to the right by k positions
    int temp[n];
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }

    printf("The rotated array is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}