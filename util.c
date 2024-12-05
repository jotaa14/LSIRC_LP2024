#include "functions.h"

void ClearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int GetInt(int minValue, int maxValue, char *msg) {
    int value;
    printf(msg);
    while (scanf("%d", &value) != 1 || value < minValue || value > maxValue) {
        puts(ERROR_INVALID_VALUE);
        ClearInputBuffer();
        printf(msg);
    }
    ClearInputBuffer();
    return value;
}

void ReadString(char *str, unsigned int size, const char *msg) {
    printf("%s", msg);
    if (fgets(str, size, stdin) != NULL) {
        unsigned int len = strlen(str) - 1;
        if (str[len] == '\n') {
            str[len] = '\0';
        } else {
            ClearInputBuffer();
        }
    }
}
