//
// Created by mordr on 27.07.2018.
//

#include <stdio.h>

void solve_problem_6(){
    int sumOfSquare = 0;
    int squareOfSums = 0;

    for (int i = 1; i < 101; ++i) {
        squareOfSums += i;
    }
    squareOfSums *= squareOfSums;

    for (int j = 1; j < 101; ++j) {
        sumOfSquare += j*j;
    }

    printf("Difference between square of sums and sums of square : %d", squareOfSums - sumOfSquare);
}