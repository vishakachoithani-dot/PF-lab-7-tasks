#include <stdio.h>
#include <math.h>
int main(){
    int rows,columns;
    printf("enter the no: of rows of a matrix: ");
    scanf("%d",&rows);
    printf("enter the no: of columns of a matrix: ");
    scanf("%d",&columns);
    if(rows<1 || rows>5 || columns<1 || columns>5){
        printf("invalid size, enter between 1 and 5\n");
        return 0;
    }
    int m[rows][columns];
    int zero_flag=1,square=0;
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++){
            printf("enter the value: ");
            scanf("%d",&m[i][j]);
            if (m[i][j] != 0){
                zero_flag=0;
            } 
        }
    }
    if (rows==columns){
        square=1;
        printf("Square matrix\n");
    }
    else{
        printf("Rectangle matrix\n");}
    if (zero_flag){
        printf("Null matrix\n");
    }

    
    if(square){
        int diagonal=1;
        for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(i!=j && m[i][j]!=0){
                diagonal=0;
            }
        }
    }
        if (diagonal){
            printf("Diagonal Matrix\n");
        }

    
    
    int scalor = 1;
    if (diagonal){
        for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(i==j && m[i][j]!=m[0][0]){
                scalor=0;
            }
        }
    }
    if (scalor){
        printf("Scalor Matrix\n");
        }
    }
    int identity = 1;
    if (diagonal){
        for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(i==j && m[i][j]!=1){
                identity=0;
            }
        }
    }
    }
    if (diagonal && identity){
        printf("Identity Matrix\n");
        }
    int upper_t =1;
    if (square){
        for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(i>j && m[i][j]!=0){
                upper_t=0;
            }
        }
    }
    }
    if (upper_t){
        printf("Upper Triangular Matrix\n");
        }
    int lower_t=1;
    if (square){
        for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(j>i && m[i][j]!=0){
                lower_t=0;
            }
        }
    }
    }
    if (lower_t){
        printf("Lower Triangular Matrix\n");
        }
    int symm =1;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(i!=j && m[i][j]!= m[j][i]){
                symm=0;
            }
        }
    }
    
    if (symm){
        printf("Symmetric Matrix\n");
        }
    int skew_sym=1;
    
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if(m[i][j]!= -(m[j][i])){
                skew_sym=0;
            }
        }
    }
    
    if (skew_sym){
        printf("Skew symmetric Matrix\n");
        }
    }
    char compare;
    printf("Do you want to compare a matrix(y/n): ");
    scanf(" %c",&compare);
    switch (compare)
    {
    case 'Y':
    case 'y':{
        int equal=1;
        int r,c;
        printf("enter the no: of rows of a matrix: ");
        scanf("%d",&r);
        printf("enter the no: of columns of a matrix: ");
        scanf("%d",&c);
        if (rows==r && columns==c){
            int m2[r][c];
            for (int i = 0; i < r; i++)
            {
                for (int j = 0; j < columns; j++){
                    printf("enter the value: ");
                    scanf("%d",&m2[i][j]);
                    if (m[i][j]!= m2[i][j]){
                        equal=0;
                    }

            }}
            if(equal){
                printf("The matrices are Equal.\n");
            }
            else{
                printf("The matrices are not Equal.\n");
            }

        }
        else{
            printf("The matrices are not Equal.\n");
        }
        break;}
    
    default:
        break;
    }
    if(rows==1){
        printf("Row matrix\n");
    }
    if(columns==1){
        printf("Column matrix\n");
    }



	if(square){
	int n;
	double a[5][5];

	n = rows;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			a[i][j] = m[i][j];
		}
	}

	double det = 1;         
	int sign = 1;            
	int zero = 0;            

	for (int col = 0; col < n; col++){
		int pivot = -1;
		for (int r = col; r < n; r++){
			if (fabs(a[r][col]) > 1e-9){
				pivot = r;
				break;
			}
		}
		if (pivot == -1){
			zero = 1;
			break;
		}
		if (pivot != col){
			for (int c = 0; c < n; c++){
				double t = a[col][c];
				a[col][c] = a[pivot][c];
				a[pivot][c] = t;
			}
			sign = -sign;
		}
		for (int r = col + 1; r < n; r++){
			double factor = a[r][col] / a[col][col];
			for (int c = col; c < n; c++){
				a[r][c] = a[r][c] - factor * a[col][c];
			}
		}
		det = det * a[col][col];
	}

	if (zero){
		det = 0;
		printf("Singular matrix\n");
	}
	else{
		det = det * sign;
		printf("Non-singular matrix\n");
	}
	printf("Determinant = %.2lf\n", det);
	}

    int idempotent=1;
    if(square){
        int idem_m[rows][columns];
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                int sum=0;
                for(int k=0;k<columns;k++){
                    sum += m[i][k]*m[k][j];
                }
                idem_m[i][j]=sum;
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                if(idem_m[i][j]!=m[i][j]){
                    idempotent=0;
                }
                
            }
    }
        if (idempotent){
            printf("Idempotent Matrix\n");
        }
    int power[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            power[i][j]=m[i][j];
        }
    }
    int is_nilpotent=0;
    int result[rows][columns];
    for(int k=0;k<rows;k++){
        int all_zero = 1;                     
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < columns; j++) {
                    if (power[i][j] != 0) {
                        all_zero = 0;
                    }
                }
            }
            if (all_zero) {
                is_nilpotent = 1;
                break;                          
            }
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                int sum=0;
                for(int k=0;k<columns;k++){
                    sum += m[i][k]*power[k][j];
                }
                result[i][j]=sum;
            }
    }
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                power[i][j]=result[i][j];
        }
        
    }}
        if (is_nilpotent){
            printf("Nilpotent Matrix\n");
        }
    }

    return 0;
}
