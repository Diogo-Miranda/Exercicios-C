#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("\n == Iluminacao correta de comodos == ");

    float primeiraDimensao,
          segundaDimensao,
          potenciaUtilizada,
          area = 0;

    printf("\n Informe uma dimensao do comodo: ");
    scanf("%f", &primeiraDimensao);

    printf("\n Informe a outra dimensao do comodo: ");
    scanf("%f", &segundaDimensao);

    area = primeiraDimensao*segundaDimensao;
    potenciaUtilizada = area * 18;

    printf("\n A potencia a ser utilizada para iluminar o comodo e de: %.2f", potenciaUtilizada);
    printf("W");
    return 0;
}
