# q1
#include <stdio.h>

int main() {
    int arr[10];
    int i;
    int min, max, sum;
    float avg;

    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];
    for (i = 1; i < 10; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    # q2

 #include <stdio.h>

int main() {
    int size1, size2;
    int i;

    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);

    int arr1[size1];
    int arr2[size2];
    int scalarSum = 0;

    printf("Enter %d elements for the first array:\n", size1);
    for (i = 0; i < size1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
        scalarSum += arr1[i];
    }

    printf("Enter %d elements for the second array:\n", size2);
    for (i = 0; i < size2; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
        scalarSum += arr2[i];
    }

    int vectorSum[size1 < size2 ? size1 : size2]; // Take the smaller size for the third array
    for (i = 0; i < size1 && i < size2; i++) {
        vectorSum[i] = arr1[i] + arr2[i];
    }

    printf("Scalar Sum: %d\n", scalarSum);

    printf("Vector Sum: ");
    for (i = 0; i < size1 && i < size2; i++) {
        printf("%d ", vectorSum[i]);
    }

    return 0;
}


    sum = 0;
    for (i = 0; i < 10; i++) {
        sum += arr[i];
    }
    avg = (float) sum / 10;

    printf("Reversed array: ");
    for (i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\)
