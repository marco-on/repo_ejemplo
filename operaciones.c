#include "ejemplo.h"

float sumar_valores (float num1, float num2)
{
        return (num1+num2);
}
void restar_valores (float num1, float num2, float *res)
{
        *res = num1 - num2;
}
void mostrar_resultado (float result)
{
        printf("\n\n\tEl resultado es:  %f\n\n",result);
}