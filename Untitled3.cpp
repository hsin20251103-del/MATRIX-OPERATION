#include <stdio.h>

#define SIZE 3

int main() {
    int A[SIZE][SIZE] = 
	{
        {1,1,1},
        {2,2,2},
        {3,3,3}
    };

    int B[SIZE][SIZE] = 
	{
        {1,1,1},
        {2,2,2},
        {3,3,3}
    };
    
    int result[SIZE][SIZE];

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }


    printf("A+B¬°:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
