#include <stdio.h>

int main() {
    int arr[3][3], trr[3][3];

    printf("Enter 9 elements:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &arr[i][j]);

    printf("Given Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    // 1. fill the transpose
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            trr[j][i] = arr[i][j];

    // 2. print the transpose
    printf("Transpose Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            printf("%d ", trr[i][j]);
        printf("\n");
    }

    // 3. compare
    int sym = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (arr[i][j] != trr[i][j])
                sym = 0;

    if (sym)
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is Not Symmetric\n");

    return 0;
}