#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()

{
    char seguir='s';
    int opcion=0;
    float num1;
    float num2;
    float resultado;
    float i;
    float aux=1;

    while(seguir=='s')
    {
        printf("1- Ingresar 1er operando (A=%.2f)\n", num1);
        printf("2- Ingresar 2do operando (B=%.2f)\n", num2);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n\n");

        printf("Seleccione una opcion:\n\n");
        scanf("%d",&opcion);
        printf("\n\n");

        switch(opcion)
        {
            case 1:
                printf("Ingresar 1er operando: \n");
                system("cls");
                scanf("%f",&num1);
                printf("\n\n");
                break;
            case 2:
                printf("Ingresar 2do operando\n");
                system("cls");
                scanf("%f",&num2);
                printf("\n\n");
                break;
            case 3:
                printf("La suma es: %.2f\n\n", suma(num1, num2));
                getche();
                printf("\n\n");
                break;
            case 4:
                printf("La resta es: %.2f\n\n", resta(num1,num2));
                getche();
                printf("\n\n");
                break;
            case 5:
                printf("La division es: %.2f\n\n", division(num1,num2));
                getche();
                printf("\n\n");
                break;
            case 6:
                printf("La multiplicacion es: %.2f\n\n", multiplicacion(num1,num2));
                getche();
                printf("\n\n");
                break;
            case 7:
                printf("El factorial del numero es: %.2f \n\n", factorial(num1));
                getche();
                printf("\n\n");
                break;
            case 8:
                printf("La suma es: %.2f\n\n", suma(num1, num2));
                printf("La resta es: %.2f\n\n", resta (num1, num2));
                printf("La division es: %.2f\n\n", division(num1, num2));
                printf("La multiplicacion es: %.2f\n\n", multiplicacion(num1, num2));
                printf("El factorial del numero es: %.2f \n\n", factorial(num1));
                getche();
                break;
            case 9:
                seguir = 'n';
                break;
        }
    while (opcion ==9)
        {
        printf("\n\n");
        return printf("Gracias por utilizar MathCalculator");
        }
    }

}



