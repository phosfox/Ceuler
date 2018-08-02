#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <problems.h>
#include <time.h>

const int NUMBEROFTRIANGLES = 50000;

struct Triangle {
    int xth;
    int value;
    int numberOfFactors;
} Triangle;

int countFactors(int number) {
    int counter = 0;
    for (int i = 1; i < sqrt(number); i++) {
        if (number % i == 0) {
            counter++;
        }
    }
    return counter*2;
}

struct Triangle *createTriangles(int numberOfTris) {
    struct Triangle *triangles = malloc(sizeof(struct Triangle) * numberOfTris);
    for (int i = 0; i < numberOfTris; i++) {
        triangles[i].xth = i;
        triangles[i].value = 0;
        triangles[i].numberOfFactors = 0;
        for (int k = 0; k < triangles[i].xth; k++) {
            triangles[i].value = triangles[i].value + k;
        }


    }
    return triangles;
}

void countFactorsForAll(struct Triangle *triangles) {
    for (int i = 0; i < NUMBEROFTRIANGLES; i++) {
        triangles[i].numberOfFactors = countFactors(triangles[i].value);
        if (triangles[i].numberOfFactors >= 500) {
            printf("triangles[%d].xth: %d \n", i-1, triangles[i-1].xth);
            printf("triangles[%d].value: %d \n", i-1, triangles[i-1].value);
            printf("triangles[%d].numberOfFactors: %d \n", i-1, triangles[i-1].numberOfFactors);
            printf("triangles[%d].value: %d \n", i, triangles[i].value);
            printf("triangles[%d].numberOfFactors: %d \n", i, triangles[i].numberOfFactors);
            return;
        }
        //printf("triangles[%d].xth: %d \n", i, triangles[i].xth);
        //printf("triangles[%d].value: %d \n", i, triangles[i].value);
        //printf("triangles[%d].numberOfFactors: %d \n", i, triangles[i].numberOfFactors);
        //printf("\n");
    }
}

/*
int getTriangleWithNFactor(Triangle * triangles, int n) {
	for (int i = 0; i < sizeof(triangles) - 1; i++)
	{
		if (triangles[i].numberOfFactors > n) {
			return triangles[i].xth;
		}
	}
}
*/


int main() {

    clock_t start = clock(), diff;

    solve_problem_16();

    diff = clock() - start;
    int msec = diff * 1000 / CLOCKS_PER_SEC;
    printf("Time taken %d seconds %d milliseconds", msec/1000, msec%1000);

    //solve_problem_15();
    //solve_problem_14();
    //solve_problem_4();

    //solve_problem_5();

    //solve_problem_6();

    //solve_problem_11();

    //solve_problem_12();


    /*printf("Creating Triangles\n");
    struct Triangle *triangles = createTriangles(NUMBEROFTRIANGLES);
    printf("Done Creating\n");

    printf("Start counting factors\n");
    countFactorsForAll(triangles);
    printf("Done counting factors\n");

    free(triangles);
*/

}