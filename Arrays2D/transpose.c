#include <stdio.h>

int main() {
    int arr[3][3];

    printf("Enter Numbers: ");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original Matrix: \n");
     for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");   
    }

    printf("Transpose Matrix: \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");   // optional — makes output show as a grid, row by row
    }

    return 0;
}