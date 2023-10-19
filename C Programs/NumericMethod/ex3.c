#include<stdio.h>
#include<math.h>

int cp(float z[], float p[], int n){
    if(n == 0){
        return 0;
    }else if(z[n] == p[n]){
        n--;
        cp(z,p,n);
        return 1;
    }else {
        return 0;
    }
}

void main(){
    int i,j,n;
    float a[40][40], x[40], z[40], p[40], max;
    printf("\nEnter the order of matrix : ");
    scanf("%d",&n);
    printf("\nEnter the matrix elements row wise\n");
    for(i =1; i<=n; i++){
        for(j =1; j<=n; j++){
            printf("A[%d][%d] = ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    printf("\nEnter the column vector \n");
    for(i =1;i<=n;i++){
        printf("x[%d] = ",i);
        scanf("%f",&x[i]);
    }
    while(1){
        for(i =1; i<=n; i++){
            p[i] = z[i];
        }
        for(i =1;i<=n;i++){
            z[i] =0;
            for(j=1;j<=n;j++){
                z[i] = z[i] + a[i][j]*x[j];
            }
        }
        max = fabs(z[1]);
        for(i =2; i<=n; i++){
            if((fabs(z[i]))>max){
                max = fabs(z[i]);
            }
        }
        for(i =1; i<=n; i++){
            z[i] = z[i]/max;
        }
        for(i =1; i<=n; i++){
            z[i] = round(10*z[i])/10;
            x[i] = z[i];
        }
        if(cp(z,p,n )== 1){
            break;
        }
    }
    printf("\nThe Required eigen value is %f",round(max));
    printf("\n\nThe Required eigen vector is : \n");
    for(i =1;i<=n;i++){
        printf("%f\t",z[i]);
    }
}