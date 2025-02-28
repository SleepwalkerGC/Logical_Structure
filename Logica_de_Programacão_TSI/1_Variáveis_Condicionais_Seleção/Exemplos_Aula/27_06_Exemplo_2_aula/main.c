#include <stdio.h>

int main()
{
    float nota1, nota2, freq, media;

    do
    {
        printf("Digite a nota 1 do aluno:\n");
        scanf("%f", &nota1);

    } while (nota1 > 10 || nota1 < 0);

    do
    {
        printf("Digite a nota 2 do aluno:\n");
        scanf("%f", &nota2);

    } while (nota2 > 10 || nota2 < 0);

    do
    {
        printf("Digite a frequencia do aluno:\n");
        scanf("%f", &freq);

    } while (freq > 100 || freq < 0);

    media = (nota1 + nota2)/2;

    if (freq >= 75 && nota1 >= 6 && nota2 >= 6)
    {
        printf("O aluno foi aprovado com media %.2f e frequencia %.2f!\n", media, freq);
    }else if(freq >= 75 && nota1 < 6 || nota2 < 6){

        printf("O aluno foi reprovado por alguma nota abaixo de 6. Sua media foi %.2f, e frequencia %.2f!\n", media, freq);

    }else if(freq < 75 && nota1 >= 6 && nota2 >= 6){

        printf("O aluno foi reprovado por frequencia. Sua media foi %.2f, e frequencia %.2f!\n", media, freq);

    }
    else
    {
        printf("O aluno foi reprovado por alguma nota abaixo de 6 e frequencia. Sua media foi %.2f, e frequencia %.2f!\n", media, freq);
    }

    return 0;
}