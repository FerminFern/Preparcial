// Consigna:  el usuaio deberá ingresar dos valores y el programa devolvera el maximo y el mínimo,
// si el usuario ingresa un 0 el programa se finaliza, caso contrario se continua ejecutando

#include <stdio.h>
#define p printf
#define s scanf

// Prototipos
void cargarDato(int *);
int maximo(int, int);
int minimo(int, int);

int main(void)
{
    int num, max, min, flag = 1;

    do
    {
        cargarDato(&num);
        if (num)
        {
            if (flag)
            {
                max = num;
                min = num;
                flag = 0;
            }
            else
            {
                max = maximo(max, num);
                min = minimo(min, num);
            }

            p("El valor max es: %d y el min es: %d",max, min);
        } else {
            p("Ha salido del sistema");
        }
    } while (num);

    return 0;
};

void cargarDato(int* num){
    p("\nIngrese un valor: ");
    s("%d", num);
};

int maximo(int max, int num){
    if(max > num)
        return max;
    else
        return num;
};

int minimo(int min, int num){
    if(min < num)
        return min;
    else
        return num;
};