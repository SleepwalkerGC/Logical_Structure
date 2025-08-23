#include <stdio.h>

//Crie um programa que organize os dados em uma tabela conforme o  exemplo a seguir. Os dados referentes  à coluna “Número de Votos” devem ser informados via teclado.
//O “Percentual de Votos” e o “Total de Votos” devem  ser  calculados.Procure  usar  somente  %f,  %s  e  %d  para  definir  o  formato  e  a  posição  dos  dados.
//Não tente preencher os espaços com brancos. 
//Por exemplo, useprintf ("%-20d, VotosJoao);
//Aoinvés de printf("%d                          ", VotosJoao);

int main()
{
    int VotosJoao, VotosMaria, VotosJose, TotalVotos;
    float PercentualJoao, PercentualMaria, PercentualJose;
    
    printf("Digite o numero de votos de Joao: ");
    scanf("%d", &VotosJoao);
    printf("Digite o numero de votos de Maria: ");
    scanf("%d", &VotosMaria);
    printf("Digite o numero de votos de Jose: ");
    scanf("%d", &VotosJose);

    TotalVotos = VotosJoao + VotosMaria + VotosJose;
    PercentualJoao = (VotosJoao * 100) / TotalVotos;
    PercentualMaria = (VotosMaria * 100) / TotalVotos;
    PercentualJose = (VotosJose * 100) / TotalVotos;

    printf("Numero de Votos    Percentual de Votos\n");
    printf("%-20d%-20.2f\n", VotosJoao, PercentualJoao);
    printf("%-20d%-20.2f\n", VotosMaria, PercentualMaria);
    printf("%-20d%-20.2f\n", VotosJose, PercentualJose);

    return 0;
}