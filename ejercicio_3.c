//Carlos Daniel Valdez 21976
//ejercicio 3 

#include <stdio.h>

int main()
{   
    int n;
    int a = 0,b = 1,c;
    printf("Ingrese el número de términos de la serie de Fibonacci: ");
    scanf("%d",&n);
    
    for(int i=1; i<=n; i++){
        c = b+a;
        a = b;
        b = c;
        printf("%d ",c);
    }
    return 0;
}
