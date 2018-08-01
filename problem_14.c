//
// Created by Constantin on 01.08.2018.
//
#include <stdio.h>

unsigned long doCollatz(unsigned long input) {
    if (input == 0) {
        return 0;
    }
    unsigned long n = input;
    unsigned long terms = 1;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n >> 1; //n /= 2;
            terms++;
        } else {
            n = n + n + n + 1;//n = 3 * n + 1;
            terms++;
        }
    };

    return terms;
}

void solve_problem_14() {
    unsigned long longest = 0;
    unsigned long terms = 1;
    unsigned long current;


    for (unsigned long i = 50000; i < 1000000; i++) {
        current = doCollatz(i);
        if (current > terms) {
            terms = current;
            longest = i;
            printf("Terms: %li Longest: %li \n", terms, longest);

        }
    }

}