#include <stdio.h>

int main()
{

    int escolha;
    float num1, num2, resultado;
    
   do{ 
    printf("-----------CACULADORA----------\n");
    printf("Digite 0 para sair: \n");
    printf("Digite 1 para somar: \n");
    printf("Digite 2 para subtrair: \n");
    printf("Digite 3 para multiplicar: \n");
    printf("Digite 4 para dividir: \n");
   
    printf("\nDigite a sua escolha: \n");
    scanf("%d", &escolha);

    if (escolha>0 && escolha<5){
    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);
    }else{
         printf("Opcao invalida \n");
    }

    switch (escolha)
    {
    case 0:
        printf("Encerrando o programa\n");
        break;
    case 1:
        resultado = num1 + num2;
        printf("Resultado da soma: %.2f \n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado da subtracao: %.2f\n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado da multiplicacao:%.2f \n", resultado);
        break;
    case 4:
       if (num2==0){
        printf("Nao existe divisao por zero. Digite outro numero:");
            scanf("%f", &num2);
        }
        resultado = num1/num2;
        printf("Resultado da divisao: %.2f\n", resultado);
        break;
    default:
        printf("Opcao invalida!Tente de novo!");
    }
   } while (escolha!=0); 
    getchar();
     return 0;
}