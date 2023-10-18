#include <stdio.h>
#include <string.h>

int main() {
    char s[1001];
    scanf("%s", s);

    int length = strlen(s);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (s[i] != s[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("YES", s);
    } else {
        printf("NO", s);
    }

    return 0;
}
