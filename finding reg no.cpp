#include <stdio.h>

int main() {
    int reg[100], n, i, search, found = 0;

     
    printf("Enter number of register numbers: ");
    scanf("%d", &n);

     
    printf("Enter %d register numbers:\n", n);
    for(i = 0; i < n; i++) {
        printf("Register number %d: ", i + 1);
        scanf("%d", &reg[i]);
    }

    
    printf("\nEnter register number to search: ");
    scanf("%d", &search);

     
    for(i = 0; i < n; i++) {
        if(reg[i] == search) {
            printf("? Register number %d found at position %d.\n", search, i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("? Register number %d not found.\n", search);

    return 0;
}

