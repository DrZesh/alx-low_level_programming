#include <stdio.h>

void positive_or_negative(int num) {
    if (num > 0) {
        printf("%d is positive\n", num);
    } else if (num < 0) {
        printf("%d is negative\n", num);
    } else {
        printf("Number is zero\n");
    }
}

int main(void) {
    int testNum = 0;
    printf("Testing positive_or_negative() function with input: %d\n", testNum);
    positive_or_negative(testNum);
    return 0;
}
