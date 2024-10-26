#include <stdio.h>

void main() {
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    for (int i = 0; i < row; i++) {
        if (i % 2 == 0) { 
            int num = 3;
            for (int j = 0; j < 3; j++) {
                printf("%d ", num);
                num--;
            }
        } else { 
            char ch = 'c';
            for (int j = 0; j < 3; j++) {
                printf("%c ", ch);
                ch--;
            }
        }
        printf("\n");
    }
    
    
}
