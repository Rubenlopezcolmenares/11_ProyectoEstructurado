/*----------------------------------------------------------------------------*/
/*Autor:Ruben Lopez Colmenares                                                */
/*E-mail: rubencolmenares1999@gmail.com                                       */
/*Fecha: 17/05/2018                                                           */
/*Fecha de actualizacion:                                                     */
/* Descripcion: Programa que compara numeros                                  */
/*----------------------------------------------------------------------------*/

/*Declaración de bibliotecas*/
#include <stdio.h>

/*Prototipo de la funcion*/
int resul(int , int , int);


/*Declaración de la función principal*/

int main(void)
{
  int num1, num2, num3;
  printf("Programa que compara numeros\n\n");
  printf("Dame el numero1\n");
  scanf("%d",&num1);
  printf("Dame el numero 2\n");
  scanf("%d",&num2);
  printf("Dame el numero 3\n");
  scanf("%d",&num3);
  resul(num1,num2, num3);
  return 0;
}



  /*Cuerpo de la funcion*/

int resul(int num1, int num2 , int num3)
{
  if (num1>num2 && num1>num3)
  {
    printf("El mayor es %d\n",num1);
  }
    if (num2>num1 && num2>num3)
    {
    printf("El mayor es %d\n",num2);
    }
    if (num3>num1 && num3>num2)
    {
    printf("El mayor es %d\n",num3);
    }
  else if (num1<num2 && num1<num3)
  {
    printf("El menor es %d\n",num1);
  }
    if (num2<num1 && num2<num3)
    {
      printf("El menor es %d\n",num2);
    }
    if (num3<num1 && num3<num2)
    {
      printf("El menor es %d\n",num3);
  }

else if (num1== num2 && num1==num3)
{
printf("Los numeros son iguales\n");
}
}
