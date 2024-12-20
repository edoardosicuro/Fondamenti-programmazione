#include <stdio.h>

int main()
{
    char name [20];
    char surname [20];
    int eta;

    printf("Inserire nome :");

    scanf("%s",name);

    printf("\nInserire cognome :");

    scanf("%s",surname);

    printf("\nInserire età :");

    scanf("%d",eta);

    printf("\nBenevenuto %s %s di anni %d\n\n Grazie per aver usato il nostro programma\n\n Ti auguriamo Buone feste\n\n   *\n  ***\n *****\n*******\n  ***",name,surname,eta);

    return 0;

}