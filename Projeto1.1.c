#include <stdio.h>

int main(void){
    int n,i;
    float a;
    n = 0; i = 0;


    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de n: ");
    scanf("%d", &n);
    float x[n],y[n];
    //y = ax+y
    printf("Digite o valor os valores do vetor X:");
    for(i=0;i<n;i++){
        scanf("%f", &x[i]);
    }
    printf("Digite o valor os valores do vetor Y:");
    for(i=0;i<n;i++){
        scanf("%f", &y[i]);
    }

    for(i=0;i<n;i++){
        x[i]=x[i]*a;
    }
    for(i=0;i<n;i++){
        y[i]=y[i]+x[i];
    }

    printf("{");
    for(i=0;i<n;i++){
        printf("%f ",y[i]);

    }
    printf("}");

    return 0;
}
