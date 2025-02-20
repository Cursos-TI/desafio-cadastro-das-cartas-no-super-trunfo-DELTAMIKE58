#include <stdio.h>

int main() {
 
    char codigo[50],nome[50],estado[100];
    int turismo;
    float pib,territorio;
    int populacao;

    printf("Digite o codigo de sua carta: \n");
    scanf("%s",codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s",nome);

    printf("Digite o Estado:\n");
    scanf("%s",estado);

    printf("Digite o numero populacional da cidade:\n");
    scanf("%d",&populacao);

    printf("Digite o PIB da mesma:\n");
    scanf("%f",&pib);

    printf("Digite seu territorio em kms quadrados:\n");
    scanf("%f",&territorio);

    printf("Codigo: %s\n", codigo);
    printf("Nome:%s\n",nome);
    printf("Estado:%s\n",estado);

    printf("Populacao:%d",populacao);
    printf("PIB:%f\n",pib);
    printf("Territorio:%f\n",territorio);

    printf("SUPER TRUNFO CIDADES , AREA DE CADASTRO!");
    
    
    return 0;
    
    }
