#include <stdio.h>
#include <string.h>

int main() {
    char str[100], newstr[100];
    int n, i;

    printf("Enter string: ");
    scanf("%99s", str);

    printf("Enter rotation: ");
    scanf("%d", &n);

    char d;
    printf("Enter direction (L/R): ");
    scanf(" %c", &d);

    int len = strlen(str);

    n = n % len;

    if (d == 'L' || d == 'l') {
        for (i = 0; i < len; i++) {
            newstr[i] = str[(i + n) % len];
        }
    }
    else if (d == 'R' || d == 'r') {
        for (i = 0; i < len; i++) {
            newstr[i] = str[(i - n + len) % len];
        }
    }
    
    newstr[len] = '\0';

    for (i = 0; i < n && i < len; i++) {
    if (islower(newstr[i]))
        newstr[i] = toupper(newstr[i]);
    else if (isupper(newstr[i]))
        newstr[i] = tolower(newstr[i]);
}

    printf("Result: %s\n", newstr);

    return 0;
}