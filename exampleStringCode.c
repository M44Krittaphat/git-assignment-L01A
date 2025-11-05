#include <stdio.h>
#include <string.h>

int main() {
    char txt1[52], txt2[52], txt3[102];
    printf("Enter String #1 (No longer than 50 letters): ");
    scanf("%s", &txt1);
    printf("Enter String #2 (No longer than 50 letters): ");
    scanf("%s", &txt2);
    if(strcmp(txt1, txt2) == 0) {
        printf("String #1 is the same as String #2\n");
    } else {
        printf("String #1 is different from String #2\n");
    }
    strcpy(txt3, txt1);
    strcat(txt3, txt2);
    printf("%s is a new string create from combination of String #1: %s and String #2: %s", txt3, txt1, txt2);
    return 0;
}