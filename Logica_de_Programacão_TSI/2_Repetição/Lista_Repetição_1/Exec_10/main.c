#include <stdio.h>

int main(void)
{
    int n_alunos, notas = 2, i, j;
    float media;

    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &n_alunos);

    float tabela[n_alunos][notas];

    for (i = 0; i < n_alunos; i++)
    {
        printf("Digite a nota da primeira prova do aluno: \n");
        scanf("%f", &tabela[i][0]);

        printf("Digite a nota da segunda prova do aluno: \n");
        scanf("%f", &tabela[i][1]);

        media = (tabela[i][0] + tabela[i][1]) / 2;

        if (media >= 6)
        {
            printf("A media do aluno foi de: %.2f e ele foi aprovado!\n", media);
        }
        else
        {
            printf("A media do aluno foi de: %.2f e ele foi reprovado!\n", media);
        }
    }
}