//
// Created by mordr on 25.07.2018.
//
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <time.h>

int numberOfFactors(int number) {
    int counter = 0;
    for (int i = 1; i < sqrt(number); i++) {
        if (number % i == 0) {
            counter++;
        }
    }
    return counter * 2;
}
void solve_problem_12() {
    clock_t start = clock();
    clock_t diff;
    int counter = 0;
    int triangle = 0;

    printf("Start\n");
    for (;;) {
        if ((numberOfFactors(triangle)) > 500) {
            printf("Triangle: %d \n", triangle);
            break;
        }
        counter++;
        triangle += counter;
    }
    diff = clock() - start;
    int msec = diff * 100 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds \n", msec / 1000, msec % 1000);

}

