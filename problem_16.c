#include <stdio.h>
#include <stdlib.h>

//
// Created by Constantin on 02.08.2018.
//
void solve_problem_16() {
    const char number[] = {
            "10715086071862673209484250490600018105614048117055336074437503883703510511249361224931983788156958581275946729175531468251871452856923140435984577574698574803934567774824230985421074605062371141877954182153046474983581941267398767559165543946077062914571196477686542167660429831652624386837205668069376"};
    int sum = 0;

    for (int i = 0; i < sizeof(number) / sizeof(number[0]) -1; ++i) { //-1 otherwise \0 will be counted aswell
        sum +=  (number[i]) - '0'; //convert char into equivalent int
        printf("Sum: %d i: %d\n", sum, i);

    }
    printf("Sum: %d\n", sum);
}
