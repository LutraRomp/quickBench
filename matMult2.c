#include <stdio.h>

#define M_SIZE 100
#define ITTER 1000

int main(){
    double a[M_SIZE][M_SIZE],b[M_SIZE][M_SIZE];
    double c[M_SIZE][M_SIZE];
    double sum;
    int i,j,k;
    int n;

    for(i=0; i<M_SIZE; i++){
        for(j=0; j<M_SIZE; j++){
          a[i][j]=i+j*M_SIZE;
          b[i][j]=i*M_SIZE+j*1.31;
        }
    }

    for(n=0; n<ITTER; n++){
        for(j=0; j<M_SIZE; j++){
            for(i=0; i<M_SIZE; i++){
                sum=0;
                for(k=0; k<M_SIZE; k++){
                    sum=sum+a[i][k]*b[k][j];
                }
                c[i][j]=sum;
            }
         }
    }

    return 0;
}
