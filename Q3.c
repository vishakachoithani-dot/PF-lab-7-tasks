#include <stdio.h>

int main() {
    int r1, c1;
    printf("enter the number of rows for matrix 1: ");
    scanf("%d", &r1);
    printf("enter the number of columns for matrix 1: ");
    scanf("%d", &c1);
    int m1[r1][c1];

    int r2, c2;
    printf("enter the number of rows for matrix 2: ");
    scanf("%d", &r2);
    printf("enter the number of columns for matrix 2: ");
    scanf("%d", &c2);

    if (c1 != r2) {
        printf("Matrix Multiplication is not possible for matrix 1 and 2!\n");
    }
    else {
        int m2[r2][c2];

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c1; j++) {
                printf("enter the element (matrix 1): ");
                scanf("%d", &m1[i][j]);
            }
        }

        for (int i = 0; i < r2; i++) {
            for (int j = 0; j < c2; j++) {
                printf("enter the element (matrix 2): ");
                scanf("%d", &m2[i][j]);
            }
        }

        int m[r1][c2];
        for (int x = 0; x < r1; x++) {
            for (int i = 0; i < c2; i++) {
                int sum = 0;
                for (int j = 0; j < c1; j++) {
                    sum += m1[x][j] * m2[j][i];
                }
                m[x][i] = sum;
            }
        }

        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                printf("%4d", m[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
