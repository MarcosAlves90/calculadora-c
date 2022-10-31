
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

int op;
float n1, n2, res;

printf("Digite 1 para somar;\n");
printf("Digite 2 para subtrair;\n");
printf("Digite 3 para multiplicar;\n");
printf("Digite 4 para dividir;\n");

scanf("%d", &op);

printf("Insira o primeiro numero:\n");
scanf("%f", &n1);
printf("Insira o segundo numero:\n");
scanf("%f", &n2);

switch(op) {

case 1:
res = n1 + n2;
printf("Soma: %f.\n", res);
break;

case 2:
res = n1 - n2;
printf("Subtracao: %f.\n", res);
break;

case 3:
res = n1 * n2;
printf("Multiplicacao: %f.\n", res);
break;

case 4:

    if(n2 != 0) {
     res = n1 / n2;
     printf("Divisao: %f.\n", res);
    } else {
     printf("Divisao por zero. ");
    }

break;

}

system("pause");

return 0;
}
