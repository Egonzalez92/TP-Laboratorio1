float suma (float num1, float num2)
    {
    float retorno;
    retorno=num1+num2;

    return retorno;
    }

float resta (float num1, float num2)
    {
    float retorno;
    retorno=num1-num2;

    return retorno;
    }
float division (float num1, float num2)
{
    while(num2 <0 || num2==0)
    {
        printf("ERROR: No se puede dividir por 0, ingrese nuevamente un numero\n\n");
        scanf("%f", &num2);
    }

    float retorno;
    retorno=num1/num2;
    return retorno;
}
float multiplicacion(float num1, float num2)
{
    float retorno;
    retorno=num1*num2;
    return retorno;
}
float factorial(float num1)
{
    int i,aux=1;

    while(num1 <0 || num1==0)
    {
        printf("ERROR: El numero debe ser mayor a 0, ingrese nuevamente un numero:\n\n");
        scanf("%f", &num1);
    }

    for(i=1; i<=num1; i++)
     {
     aux=aux*i;
     }
    return aux;
}
