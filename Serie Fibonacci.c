#include <stdio.h>

unsigned long long fibonacci(int num, unsigned long long sF[])
{
    if (sF == 1) {
        return sF[num];
    }
    
    if (num <= 1) {
        sF[num] = num;
    } else {
        sF[num] = fibonacci(num - 1, sF) + fibonacci(num - 2, sF);
    }
    
    return sF[num];
}

int main()
{
    int i,num;
    printf("Ingrese el valor hasta el cual desea calcular la serie de Fibonacci: ");
    scanf("%d", &num);
    
    if (num < 0) {
        printf("Por favor, ingrese un valor no negativo.\n");
    } else {
        unsigned long long sF[num + 1];
        
        for ( i = 0; i <= num; i++) {
            sF[i] = 0;
        }
        
        printf("Serie de Fibonacci hasta %d:\n", num);
        for ( i = 0; i <= num; i++) {
            printf("%d. %llu \n", i+1, fibonacci(i, sF));
        }
        printf("\n");
    }
    
    return 0;
}

