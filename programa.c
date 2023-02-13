
#include <stdio.h>

float valor_compra,desc;

int main()
{
printf("Qual o valor da compra?\n");
scanf("%f",&valor_compra);

if (valor_compra<=100){
    desc=valor_compra*0.05;
    printf("O desconto é de R$%.2f.\n",desc);
}
else{
    desc=valor_compra*0.1;
    printf("O desconto é de R$%.2f.\n",desc);
}

    return 0;
}