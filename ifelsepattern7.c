
#include <stdio.h>

void main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++) { 
        
        if (i % 2 == 0) { 
            for (char ch = 'D'; ch >= 'A'; ch--) {
                printf("%c%d ", ch, 'D' - ch);
            }
        } else { 
            for (char ch = 'A'; ch <= 'D'; ch++) {
                printf("%c%d ", ch, ch - 'A' + 1);
            }
        }
        
        printf("\n"); 
    }
}
    
