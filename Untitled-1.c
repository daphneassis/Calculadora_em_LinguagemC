#include <stdio.h>
# include<locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
	
int escolha;
float num1, num2, resultado;

printf("-----------CACULADORA----------\n");
printf ("Digite 1 para somar: \n");
printf ("Digite 2 para subtrair: \n");
printf ("Digite 3 para multiplicar: \n");
printf ("Digite 4 para dividir: \n");

printf ("Digite a escolha desejada: \n");
scanf ("%d", &escolha);

printf ("Digite o primeiro número: \n");
scanf ("%f", &num1);

printf ("Digite o segundo número: \n");
scanf ("%f", &num2);

printf ("Digite o segundo número: \n");


switch(escolha){  
case 1:
resultado= num1+num2;
printf ("O resultado da soma é: \n", resultado);
break;
case 2:
resultado = num1-num2;
printf ("O resultado da subtração é: \n", resultado);
break;
case 3:
resultado = num1*num2;
printf ("O resultado da multiplicação é: \n", resultado);
break;
case 4:
resultado = num1/num2;
printf ("O resultado da divisão é: \n", resultado);
break;

return 0;
}
}
