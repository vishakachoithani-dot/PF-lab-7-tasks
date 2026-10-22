#include <stdio.h>

int main() {
    int matrix[3][3][3];

    printf("Enter elements for the 3x3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("Enter element [%d][%d][%d]: ", i, j, k);
                scanf("%d", &matrix[i][j][k]);
            }
        }
    }
    int max = matrix[0][0][0];
    int min = matrix[0][0][0];
    int total_all = 0;
    float avg;
    for (int i = 0; i < 3; i++) {
        int total = 0;
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d\t", matrix[i][j][k]);
                if (matrix[i][j][k] > max){
                    max = matrix[i][j][k];
                }
                if (matrix[i][j][k] < min){
                    min = matrix[i][j][k];
                }
                total += matrix[i][j][k];
                total_all+= matrix[i][j][k];
            }
            printf("\n");

        }
        
        printf("total for layer %d is: %d\n",i+1,total);
        printf("\n");
    }
    avg = total_all/27.0;
    printf("The gratest element in array is: %d\n",max);
    printf("The smallest element in array is: %d\n",min);
    printf("The total of array is: %d\n",total_all);
    printf("The average of the array is: %.2f\n",avg);
    return 0;
}
