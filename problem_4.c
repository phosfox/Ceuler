//
// Created by mordr on 27.07.2018.
//

// A palindromic number reads the same both ways.
// The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

#include <stdbool.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define digits 999

bool isPalindrome(int number) {
    int n = number;
    char string[6];
    itoa(n, string, 10);
    if (string[0] == string[5] && string[1] == string[4] && string[2] == string[3]) {
        for (int i = 0; i < 6; ++i) {
            printf("%c ", string[i]);
        }
        printf("\n");
        return true;
    }
    return false;
}


void solve_problem_4() {
    int biggest = 0;
    int current = 0;
    for (int i = 0; i < digits; i++) {
        for (int j = 0; j < digits; j++) {
            current = i * j;
            if (isPalindrome(current)) {
                if (current >= biggest) {
                    biggest = current;
                }
            }

        }
    }
    printf("Biggest Palindrome: %d\n", biggest);
}

