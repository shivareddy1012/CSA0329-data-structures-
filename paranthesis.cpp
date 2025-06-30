#include <stdio.h>

int main() {
    char expr[100], stack[100];
    int i, top = -1;
    char ch;

    printf("Enter an expression: ");
    scanf("%s", expr);

    for(i = 0; expr[i] != '\0'; i++) {
        ch = expr[i];
 
        if(ch == '(' || ch == '{' || ch == '[') {
            stack[++top] = ch;
        }
        else if(ch == ')' || ch == '}' || ch == ']') {
            if(top == -1) {
                printf("? Not balanced\n");
                return 0;
            }
            char last = stack[top--];
            if((ch == ')' && last != '(') ||
               (ch == '}' && last != '{') ||
               (ch == ']' && last != '[')) {
                printf("? Not balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf(" Balanced expression\n");
    else
        printf("Not balanced\n");

    return 0;
}

