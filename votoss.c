#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int Candidatos[5];
    int votos;
    int votos1 = 0;
    int votos2 = 0;
    int votos3 = 0;
    int votos4 = 0;
    int votos5 = 0;
    int ganador;
    do
    {
        printf("Ingrese su candidato : ");
        scanf("%d", &votos);
        if (votos > 0 && votos < 2)
        {
            Candidatos[votos - 1]++;
            votos1++;
        }

        if (votos > 1 && votos < 3)
        {
            Candidatos[votos - 1]++;
            votos2++;
        }

        if (votos > 2 && votos < 4)
        {
            Candidatos[votos - 1]++;
            votos3++;
        }
        if (votos > 3 && votos < 5)
        {
            Candidatos[votos - 1]++;
            votos4++;
        }
        if (votos > 4 && votos < 6)
        {
            Candidatos[votos - 1]++;
            votos5++;
        }
    } while (votos != 0);

    printf("\n Votos candidato 1 : %d  ", votos1);
    printf("\n Votos candidato 2 : %d  ", votos2);
    printf("\n Votos candidato 3 : %d  ", votos3);
    printf("\n Votos candidato 4 : %d  ", votos4);
    printf("\n Votos candidato 5 : %d  \n", votos5);
    printf("\n Ganador de los votos es : \n");
    if (votos1 > votos2 && votos1 > votos3 && votos1 > votos4 && votos1 > votos5)
    {
        printf("\nPrimer candidato \n");
        printf("\nCon los siguientes votos : %d ", votos1);
    }
    return 0;
}
