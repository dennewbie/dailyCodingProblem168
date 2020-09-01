//
//  header.c
//  dailyCodingProblem168
//
//  Created by Denny Caruso on 01/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

#include "header.h"

int generateIntNumber(void) {
    return 1 + rand() % MAX_SIZE;
}

int *getMatrix(int rows, int cols) {
    int *matrix = (int *) malloc(sizeof(int) * rows * cols);
    if(!matrix) {
        printf("\nError allocating memory for matrix...\n");
        exit(EXIT_FAILURE);
    }
    
    setMatrix(matrix, rows, cols);
    return  matrix;
}

void setMatrix(int *matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(matrix + i * cols + j) = generateIntNumber();
        }
    }
}

void printMatrix(int *matrix, int rows, int cols, char *usrMessage) {
    newLine();
    printf("%s Matrix:", usrMessage);
    newLine();
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf(" %5d ", *(matrix + i * cols + j));
        }
        printf("\n");
    }
    newLine();
}

void rotateMatrix(int *matrix, int rows, int cols) {
    if (rows == cols) {
        for (int i = 0; i < (rows / 2); i++) {
            for (int j = i; j < (rows - i - 1); j++) {
                int savedNumber = *(matrix + i * cols + j);
                *(matrix + i * cols + j) = *(matrix + (rows - 1 - j) * cols + i);
                *(matrix + (rows - 1 - j) * cols + i) = *(matrix + (rows - 1 - i) * cols + (rows - 1 - j));
                *(matrix + (rows - 1 - i) * cols + (rows - 1 - j)) = *(matrix + j * cols + (rows - 1 -i));
                *(matrix + j * cols + (rows - 1 -i)) = savedNumber;
            }
        }
    } else {
        printf("\nRows != Cols\n");
    }
}

