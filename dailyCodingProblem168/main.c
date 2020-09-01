//
//  main.c
//  dailyCodingProblem168
//
//  Created by Denny Caruso on 01/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

/*
    Daily Coding Problem 161 - Level: Medium
    This problem was asked by Facebook.

    Given an N by N matrix, rotate it by 90 degrees clockwise.
    For example, given the following matrix:

    [[1, 2, 3],
     [4, 5, 6],
     [7, 8, 9]]
    you should return:

    [[7, 4, 1],
     [8, 5, 2],
     [9, 6, 3]]
    Follow-up: What if you couldn't use any extra space?
 
 */

#include "header.h"

int main(int argc, const char * argv[]) {
    srand((unsigned int) time(NULL));
    int N = generateIntNumber();
    int *matrix = getMatrix(N, N);

    printMatrix(matrix, N, N, "");
    rotateMatrix(matrix, N, N);
    printMatrix(matrix, N, N, "Rotated");
    
    return 0;
}
