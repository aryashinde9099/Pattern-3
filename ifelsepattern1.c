#include <stdio.h>

void main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);

    char ch = 'I';

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%c ",ch);
            ch--;

        }
        printf("\n");
    }

   
}
