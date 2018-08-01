//
// Created by mordr on 27.07.2018.
//
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

void solve_problem_5(){
    bool flag = false;
    for (int i = 1; i < INT_MAX ; ++i) {
        for (int j = 1; j <= 20; ++j) {
            if(i % j != 0) {
                break;
            }
            if (j == 20) {
                printf("%d \n", i);
                return;
            }

        }
    }
}
