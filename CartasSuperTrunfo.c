#include <stdio.h>

int main() {
 
    
    char codigo1[50],nome1[50],estado1[100];
    int turismo1;
    float pib1,territorio1;
    int populacao1;
    float Densidade1;
    float percapta1;
    

    printf("Digite o codigo de sua carta: \n");
    scanf("%s",codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s",nome1);

    printf("Digite o Estado:\n");
    scanf("%s",estado1);

    printf("Digite o numero populacional da cidade:\n");
    scanf("%d",&populacao1);

    printf("Digite o PIB da mesma:\n");
    scanf("%f",&pib1);

    printf("Digite seu territorio em kms quadrados:\n");
    scanf("%f",&territorio1);

    printf("Codigo: %s\n", codigo1);
    printf("Nome:%s\n",nome1);
    printf("Estado:%s\n",estado1);

    printf("Populacao:%d\n",populacao1);
    printf("PIB:%f\n",pib1);
    printf("Territorio:%f\n",territorio1);
    Densidade1 = populacao1 / territorio1;
    percapta1 = pib1 / populacao1;
    printf("PIB per capta:%f\n",percapta1);
    printf("Densidade populacional:%f\n", Densidade1);

    //O SISTEMA E BEM SIMPLES E SUA FUNÇAO CONSISTE BASICAMENTE EM CADASTRO DE CARTAS DO JOGO SUPER TRUNFO
    //ELE ATIA POR MEIO DE PRINTF E SCANF E ESTA DIVIDO E 2 SIMBOLICAMENTE POR ESTAS LINHAS DE COMENTARIO
    //SENDO A PARTE ACIMA DA CARTA 1 CONTENDO AS VARIAVEIS E AS INTERAÇOES E ABAIXO O ESMO SISTEMA PARA CARTA 2


        char codigo[50],nome[50],estado[100];
        int turismo;
        float pib,territorio;
        int populacao;
        float percapta2;
        float densidade2;

        printf("Digite o codigo da segunda carta: \n");
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
    
        printf("Populacao:%d\n",populacao);  
        densidade2 = populacao / territorio;
        percapta2 = pib / populacao;

        printf("PIB:%f\n",pib);
        printf("Territorio:%f\n",territorio);

    
        printf("SUPER TRUNFO CIDADES , AREA DE CADASTRO!");
        
        
        return 0;
        
        }
    