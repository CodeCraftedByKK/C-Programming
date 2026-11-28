#include <stdio.h>

 int sqr(int n){
    return n*n;
}

int cube(int n){
    return n*n*n;
}
int main () {
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);

    int sqrresult = sqr(n);
    int cuberesult = cube(n);

    printf("Square of the given number is %d\n",sqrresult);
    
    printf("Cube of the given number is %d\n",cuberesult);



    return 0;
}