priint repeated character pattern
#include<stdio.h>
int main() {
    char str[100];
    int i, j, count;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Repeated characters in the string:\n");
    
    for(i = 0; str[i] != '\0'; i++) {
        count = 1;
        if(str[i] != ' ') {
            for(j = i + 1; str[j] != '\0'; j++) {
                if(str[i] == str[j]) {
                    count++;
                    str[j] = ' '; // Mark as counted
                }
            }
            if(count > 1) {
                printf("%c appears %d times\n", str[i], count);
            }
        }
    }
    
    return 0;
}