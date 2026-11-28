#include <stdio.h>
int main () {

    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            // char ch = (char)(j+64);
            printf("%c",j+64);
        }
        printf("\n");
    }


    return 0;
}