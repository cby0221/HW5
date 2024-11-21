#include <stdio.h>

void stringReverse(const char* str);
   

int main() {
    char myString[100]; // 箇砞﹃程

    printf("Enter a string: ");
    fgets(myString, sizeof(myString), stdin);

    // 埃传︽才腹fgets 穦传︽才
    size_t i = 0;
    while (myString[i] != '\0') {
        if (myString[i] == '\n') {
            myString[i] = '\0';
            break;
        }
        i++;
    }

    printf("Original String: %s\n", myString);
    printf("Reversed String: ");
    stringReverse(myString);
    printf("\n");

    return 0;
}
void stringReverse(const char* str)
{
    if (*str == '\0')
    {
        return;
    }
    stringReverse(str + 1);
    putchar(*str);
}
