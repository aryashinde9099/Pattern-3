#include <stdio.h>

void main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    
    for (int i = 0; i <= rows; i++) {
        
        if (i % 2 == 0) {
            for (int j = 0; j < 4; j++) {
                printf("= ");
            }
        } 
        
        else {
            for (int j = 0; j < 4; j++) {
                printf("$ ");
            }
        }
        
        
        printf("\n");
    }
}