#include <stdio.h>

void main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    int x=4;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= 4; j++) {
            printf("%d ",x);
            

        }
        x--;
        printf("\n");
    }

   
}