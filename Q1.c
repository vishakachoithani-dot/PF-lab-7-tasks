#include <stdio.h>
int main(){
    int matrix[3][3]={{3,2,1},
                      {4,1,0},
                      {5,2,6}};
    //Transpose
    int m_transpose[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (i==j){
                m_transpose[i][j]=matrix[i][j];
            }
            else{
                m_transpose[i][j]=matrix[j][i];
            }
        }
    }
    printf("Transpose of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",m_transpose[i][j]);
        }
        printf("\n");
    }

    //Determinant
    int det = 0;
    for (int i = 0; i < 3; i++) {
        int c1, c2;
        if (i == 0) {
            c1 = 1;
            c2 = 2;
        }
        else if (i == 1) {
            c1 = 0;
            c2 = 2;
        }
        else {
            c1 = 0;
            c2 = 1;
        }
        int minor_det =
            (matrix[1][c1] * matrix[2][c2])- (matrix[1][c2] * matrix[2][c1]);
        if (i % 2 == 0)
            det += matrix[0][i] * minor_det;
        else
            det -= matrix[0][i] * minor_det;
    }
    printf("the determinant is: %d\n",det);

    //cofactor
    int cofactor[3][3];
    for (int i=0;i<3;i++){
        int r1, r2;

        if (i == 0) {
            r1 = 1;
            r2 = 2;
        }
        else if (i == 1) {
            r1 = 0;
            r2 = 2;
        }
        else {
            r1 = 0;
            r2 = 1;
        }
    for (int j= 0;j<3;j++) {
        int c1, c2;
        if (j == 0) {
            c1 = 1;
            c2 = 2;
        }
        else if (j == 1) {
            c1 = 0;
            c2 = 2;
        }
        else {
            c1 = 0;
            c2 = 1;
        }
        int minor_det =
            (matrix[r1][c1] * matrix[r2][c2])- (matrix[r1][c2] * matrix[r2][c1]);
        if ((i+j)%2==0){
            cofactor[i][j]= minor_det;
        }
        else{
            cofactor[i][j]= -minor_det;
        }
        
    }
    }
    printf("cofactor of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",cofactor[i][j]);
        }
        printf("\n");
    }

    //adjoint
    int adjoint[3][3];
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            if (i==j){
                adjoint[i][j]=cofactor[i][j];}
            else{
                adjoint[i][j] = cofactor[j][i];
            }
        }
    }
    printf("Adjoint of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4d",adjoint[i][j]);
        }
        printf("\n");
    }
    if (det!=0){
        double inverse[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            inverse[i][j] = (double)adjoint[i][j]/det;
        }
    }
    printf("Inverse of matrix:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%4.2f ",inverse[i][j]);
        }
        printf("\n");
    }
    }
    else{
        printf("Inverse of a singular matrix does not exist !");
    }
    

return 0;
}
