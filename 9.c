#include <stdio.h>
 
int main() {
    char s[1000], ch;
    int i, freq = 0;
 
    fgets(s, sizeof(s), stdin);   
    scanf(" %c", &ch);          
 
    for (i = 0; s[i] != '\0' && s[i] != '\n'; i++) {
        if (s[i] == ch)
            freq++;
    }
 
    printf("Frequency of '%c' = %d\n", ch, freq);
    return 0;
}
