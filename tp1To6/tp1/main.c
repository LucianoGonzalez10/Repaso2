#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

const int colm = 20;
int checkPalindromo (char array []);
void intercambio (int *a, int *b);
void ordenarArreglo (int arreglo1 [], int arreglo2 [], int arreglo3[], int val, int val2);

void encontrarMayorApellido(char apellidos[][colm], int edades[]);


int main()
{
    int arreglo[20] = {2, 3, 7, 18};
    int arreglo2 [20] = {4, 5, 9, 10,11};
    int arreglo3 [20];

    ordenarArreglo (arreglo, arreglo2,arreglo3, 4, 5);
    for(int i = 0; i<9; i++)
    {
        printf("Num: -%i- \n", arreglo3[i]);
    }

    char apellidos [][25]=  {"lana", "fernandez", "gonzalez", "raul"};
    int edades[4] = {18, 19, 24, 14};


 encontrarMayorApellido(apellidos, edades);
    return 0;
}

///Dada una cadena de caracteres, hacer una función que determine si dicha cadena es palíndromo
///(se lee de igual forma de adelante para atrás como viceversa) o no. La función recibe como parámetro
///la cadena y retorna 1 o 0 según sea la respuesta.

int checkPalindromo (char array [])
{
    int i=0;
    int j=strlen(array)-1;
    int flag=0;

    while (i<j && flag == 0)
    {
        if (array[i] != array[j])
        {
            flag = 1;
        }
        i++;
        j--;
    }

    return flag;

}

///Hacer una función que intercambie el contenido de dos variables. (pasaje de parámetros por referencia)

void intercambio (int *a, int *b)
{
    int aux;

    aux = *a;

    *a = *b;

    *b = aux;

}

///Dados dos arreglos de números enteros ordenados de menor a mayor, hacer una función que los reciba
///como parámetros y retorne un tercer arreglo que contenga los datos de los arreglos anteriores,
///también ordenados. Se los debe intercalar.

void ordenarArreglo (int arreglo1 [], int arreglo2 [], int arreglo3[], int val, int val2)
{
    int i = 0;
    int j = 0;
    int o = 0;
    int validos = (val + val2);

    while (o<validos)
    {
        if((i<val && arreglo1[i] < arreglo2[j]) || j==val2)
        {
            arreglo3[o] = arreglo1[i];
            i++;
        }
        else
        {
            arreglo3[o] = arreglo2[j];
            j++;
        }
        o++;
    }
}


/// Dados dos arreglos paralelos, uno con apellidos y otro con edades. Se debe hacer un programa para encontrar
///el apellido de la persona de mayor edad. Se debe modularizar.

void encontrarMayorApellido(char apellidos[][colm], int edades[])
{
    int i = 0;
    int edadMayor = edades[i];
    int pos = 0;
    while(i<4)
    {
        if(edadMayor < edades[i])
        {
            edadMayor = edades[i];
            pos = i;
        }
        i++;

        puts(apellidos[pos]);
    }
}







