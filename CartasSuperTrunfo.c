#include <stdio.h>

    int main(){
     
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
    
        //O SISTEMA E BEM SIMPLES E SUA FUNÇAO CONSISTE BASICAMENTE EM CADASTRO, COMPARAÇAO E DECISAO DE QUAL CARTA VENCEU
        //BASCIACAMENTE O PROGRAMA RECEBE E ARMAZENA INFORMACOES SOBRE AS CARTAS COM PRINTF E SCANF, DEPOIS ELE CALCULA
        //DENSIDADE POPULACIONAL E PIB PERCAPTA DAS DUAS COM OPERACOES DE DIVISAO IDENTIFICADAS COM BARRA , DEPOIS O SISTEMA DECIDE
        //O VENCEDOR POR MEIO DE UM MENU INTERATIVO FEITO COM SWITH E IF ELSE QUE PERMITE AO JOGADOR DECIDIR QUAL ATRIBUTO COMPARAR
    
    
            char codigo2[50],nome2[50],estado2[100];
            int turismo2;
            float pib2,territorio2;
            int populacao2;
            float percapta2;
            float densidade2;
    
            printf("Digite o codigo da segunda carta: \n");
            scanf("%s",codigo2);
        
            printf("Digite o nome da cidade: \n");
            scanf("%s",nome2);
        
            printf("Digite o Estado:\n");
            scanf("%s",estado2);
        
            printf("Digite o numero populacional da cidade:\n");
            scanf("%d",&populacao2);
        
            printf("Digite o PIB da mesma:\n");
            scanf("%f",&pib2);
        
            printf("Digite seu territorio em kms quadrados:\n");
            scanf("%f",&territorio2);
        
            printf("Codigo: %s\n", codigo2);
            printf("Nome:%s\n",nome2);
            printf("Estado:%s\n",estado2);
            
            printf("PIB:%f\n",pib2);
            printf("Populacao:%d\n",populacao2);  
            densidade2 = populacao2 / territorio2;
            percapta2 = pib2 / populacao2;
            
            printf("PIB per capta:%f\n",percapta2);
        printf("Densidade populacional:%f\n", densidade2);
    
        int opcao1 , opcao2 ;
        int resultado1 , resultado2;
        printf("PREPARE-SE PARA A BATALHA!\n");
        printf("Opcao 1:PIB\n");
        printf("Opcao 2:Territorio\n");
        printf("Opcao 3:Populacao\n");
        printf("opcao 4:Densidade demografica\n");
        printf("opcao 5:Renda percapta\n");
        printf("Ecolha oprimeiro atributo:\n");
        scanf("%d" , &opcao1 );

        switch (opcao1)
        {
        case 1:
            printf("Voce escolheu PIB\n");
            resultado1=pib1 > pib2 ? 1 : 0 ;
            break;
        case 2:
            printf("Voce escolheu territorio\n");
            resultado1=territorio1 > territorio2 ? 1 : 0 ;
            case 3:
            printf("Voce escolheu populacao\n");
            resultado1=populacao1 > populacao2 ? 1 : 0 ;
            case 4: 
            printf("Voce escolheu densidade demografica\n");
            resultado1 = Densidade1 < densidade2 ? 1 : 0 ;
            case 5:
           printf("Voce escolheu renda percapta\n");
           resultado1=percapta2>percapta1 ? 1 : 0 ;
           
           default: 
           printf("INVALIDO\n");
                break;
            }
            
            printf("SEGUNDA ESCOLHA!\n");
            printf("Opcao 1:PIB\n");
            printf("Opcao 2:Territorio\n");
            printf("Opcao 3:Populacao\n");
            printf("opcao 4:Densidade demografica\n");
            printf("opcao 5:Renda percapta\n");
            printf("Ecolha oprimeiro atributo:\n");
            scanf("%d" , &opcao2 );
    
            switch (opcao2)
        {
        case 1:
            printf("Voce escolheu PIB\n");
            
            resultado2=pib1 > pib2 ? 1 : 0 ;
            break;
        case 2:
            printf("Voce escolheu territorio\n");
            resultado2=territorio1 > territorio2 ? 1 : 0 ;
            case 3:
            printf("Voce escolheu populacao\n");
            resultado2=populacao1 > populacao2 ? 1 : 0 ;
            case 4: 
            printf("Voce escolheu densidade demografica\n");
            resultado2 = Densidade1 < densidade2 ? 1 : 0 ;
            case 5:
           printf("Voce escolheu renda percapta\n");
           resultado2=percapta2>percapta1 ? 1 : 0 ;
           default: 
           printf("INVALIDO\n");
                break;
            }


        















            return 0;
        }


    

        
    

        
                              