#include <stdio.h>
#include <string.h>

int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int main() {
    char s[101];

    scanf("%s", s);

    for (int i = 0; s[i] != '\0'; i++) {
        if (!isVowel(s[i])) {
            printf(".%c", s[i]);
        }
    }

    return 0;
}