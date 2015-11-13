#include <stdio.h>

int main() {
    int maxNumber, i, j, flag;
    maxNumber = 10000000;

    for(i = 0 + 1; i < maxNumber; ++i) {
        flag = 0;

        for(j = 2; j <= i/2; ++j) {
            if(i%j == 0) {
                flag = 1;
                break;
            }
        }

        if(flag == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}