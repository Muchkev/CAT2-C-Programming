/*
 2d array
author:kelvin muchoki
registration number:CT101/G/25008/24
date:07/11/24
*/
// preprocessor directive
#include <stdio.h>

int main() {
    int scores[2][2] = {{{65, 92}, {84, 72}}, {{35, 70}, {59, 67}}};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}