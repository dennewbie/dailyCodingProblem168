//
//  header.h
//  dailyCodingProblem168
//
//  Created by Denny Caruso on 01/09/2020.
//  Copyright © 2020 Denny Caruso. All rights reserved.
//

#ifndef header_h
#define header_h

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10
#define newLine() { printf("\n\n"); }

#endif /* header_h */

int generateIntNumber(void);

void setMatrix(int *, int, int);
int *getMatrix(int, int);
void printMatrix(int *, int, int, char *);

void rotateMatrix(int *, int, int);
