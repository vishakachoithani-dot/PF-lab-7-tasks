
#include <stdio.h>
int main(){
    int layers[3][3][3];
    int l1[3][3],l2[3][3],l3[3][3];
    for(int k=0;k<3;k++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                printf("enter the element of layer %d for layer[%d][%d]:  ",k+1,i,j);
                scanf("%d",&layers[k][i][j]);
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        
        printf("Layer %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("%d\t",layers[i][j][k]);}
            printf("\n");}
        printf("\n");
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            l1[i][j] = layers[0][i][j];
        }
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            l2[i][j] = layers[1][i][j];
        }
    }
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            l3[i][j] = layers[2][i][j];
        }
    }

    int flag_of_1_and_2 = 1;
    int flag_of_1_and_3 = 1;
    int flag_of_2_and_3 = 1;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if (l1[i][j] != l2[i][j]){
                flag_of_1_and_2 =0;
            }
            if (l1[i][j] != l3[i][j]){
                flag_of_1_and_3 =0;
            }
            if (l2[i][j] != l3[i][j]){
                flag_of_2_and_3 =0;
            }
        }
    }
    if (flag_of_1_and_2){
        printf("layer 1 and 2 are identical.\n");
    }
    else{
        printf("layer 1 and 2 are distinct.\n");
    }
    if (flag_of_1_and_3){
        printf("layer 1 and 3 are identical.\n");
    }
    else{
        printf("layer 1 and 3 are distinct.\n");
    }
    if (flag_of_2_and_3){
        printf("layer 2 and 3 are identical.\n");
    }
    else{
        printf("layer 2 and 3 are distinct.\n");
    }

}
