#include <stdio.h>

void main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    int x = 18; 

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= row; j++) {
            printf("%d ",x);
            x=x-2;
           
        }
        printf("\n"); 
    }

}




