/*
==================================================================================

                Programa para determinação da Resistência Elétrica

==================================================================================
Empresa: KALCULUS
Equipe de Programadores:
               Igor Rosa Ramalho
               Diogo Takeshi Fukuhara Barbosa Mendes
               Gabriel de Oliveira Barreto
               Daniel Porto
Curso: TADS
Data de início do projeto: 25/08/2022
----------------------------------------------------------------------------------
Descrição do Programa:
		Este é um  programa para determinação da resistência elétrica a partir do código de
    cores (4 faixas) para resistores..
Versão do programa: 1.0
Melhorias da versão: Primeira Versão

Data de lançamento da versão: 11/10/2022
==================================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{



    //Mudando linguagem para poder usar acentos
    setlocale(LC_ALL, "Portuguese");



    //Declaração de Variáveis      i=contador     p=Peso      esc*=escolhas      cor*=cores     tol=tolerancia   y=Resposta "Sim" do loop     n=Resposta "Não" do loop

    int i, jun1, jun2, caso7, cor1, cor2, cor3, esc1, esc2, esc3, esc4;
    float conta, tol, cor4;
    char op,y,n;
    y= 's', 'sim';
    n='n';
    caso7 = 0;


    //Looping para recomecar o programa caso o usuario queira
    while(y == 's' || y == 'S' || y == 'sim')
 {system("cls");



    //Cabecalho do programa
    printf("========================================================================================================================\n*");
    printf("\t\t\t\tPrograma para determinação da Resistência Elétrica\t\t\t\t      * \n");
    printf("========================================================================================================================\n*");
    printf("\t\t\t\tBem vindo ao calculador de Resistência Elétrica\t\t\t\t\t       *\n*\t\tInforme as cores das 4 faixas do resistor para saber a Resistência Elétrica e a Tolerância\t\t*\n");
    printf("------------------------------------------------------------------------------------------------------------------------\n");


    //Looping
     for(i=1 ; i<=4 ; i++){
        if(i=1){
                printf("\t\t\t\t\t\tOPÇÕES DE FAIXAS\n\n\n");
                printf("\t\t\t\t\t1 -  Preto\t\t2 -  Marrom\n\n");
                printf("\t\t\t\t\t3 - Vermelho\t\t4 - Laranja\n\n");
                printf("\t\t\t\t\t5 - Amarelo\t\t6 - Verde\n\n");
                printf("\t\t\t\t\t7 - Azul\t\t8 - Violeta\n\n");
                printf("\t\t\t\t\t9 - Cinza\t\t10 - Branco\n\n");

                printf("Informe a cor da primeira faixa: ");
                scanf("%d", &esc1);


            //Escolha das cores
            switch(esc1){
                            case 1 :
                            cor1=0;
                            break;

                            case 2 :
                            cor1=1;
                            break;

                            case 3 :
                            cor1=2;
                            break;

                            case 4 :
                            cor1=3;
                            break;

                            case 5 :
                            cor1=4;
                            break;

                            case 6 :
                            cor1=5;
                            break;

                            case 7 :
                            cor1=6;
                            break;

                            case 8 :
                            cor1=7;
                            break;

                            case 9 :
                            cor1=8;
                            break;

                            case 10:
                            cor1=9;
                            break;

                }//Fim Swtch
        }//Fim If

        if(i=2){system("cls");
                printf("========================================================================================================================\n*");
                printf("\t\t\t\tPrograma para determinação da Resistência Elétrica\t\t\t\t      * \n");
                printf("========================================================================================================================\n*");
                printf("\t\t\t\tBem vindo ao calculador de Resistência Elétrica.\t\t\t\t\t*\n*\t\t\tInforme as cores das 4 faixas do resistor para saber a Resistência Elétrica.\t\t\t*\n");
                printf("------------------------------------------------------------------------------------------------------------------------\n");


                printf("\t\t\t\t\t\tOPÇÕES DE FAIXAS\n\n\n");
                printf("\t\t\t\t\t1 -  Preto\t\t2 -  Marrom\n\n");
                printf("\t\t\t\t\t3 - Vermelho\t\t4 - Laranja\n\n");
                printf("\t\t\t\t\t5 - Amarelo\t\t6 - Verde\n\n");
                printf("\t\t\t\t\t7 - Azul\t\t8 - Violeta\n\n");
                printf("\t\t\t\t\t9 - Cinza\t\t10 - Branco\n\n");

                printf("Informe a cor da segunda faixa: ");
                scanf("%d", &esc2);


                //Escolha das cores
                switch(esc2){
                            case 1 :
                            cor2=0;
                            break;

                            case 2 :
                            cor2=1;
                            break;

                            case 3 :
                            cor2=2;
                            break;

                            case 4 :
                            cor2=3;
                            break;

                            case 5 :
                            cor2=4;
                            break;

                            case 6 :
                            cor2=5;
                            break;

                            case 7 :
                            cor2=6;
                            break;

                            case 8 :
                            cor2=7;
                            break;

                            case 9 :
                            cor2=8;
                            break;

                            case 10 :
                            cor2=9;
                            break;
                }//Fim Swtch
        }//Fim If

         if(i=3){system("cls");

            printf("========================================================================================================================\n*");
            printf("\t\t\t\tPrograma para determinação da Resistência Elétrica\t\t\t\t      * \n");
            printf("========================================================================================================================\n*");
            printf("\t\t\t\tBem vindo ao calculador de Resistência Elétrica.\t\t\t\t\t*\n*\t\t\tInforme as cores das 4 faixas do resistor para saber a Resistência Elétrica.\t\t\t*\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\tOPÇÕES DE FAIXAS\n\n\n");
            printf("\t\t\t\t\t1 -  Preto\t\t2 -  Marrom\n\n");
            printf("\t\t\t\t\t3 - Vermelho\t\t4 - Laranja\n\n");
            printf("\t\t\t\t\t5 - Amarelo\t\t6 - Verde\n\n");
            printf("\t\t\t\t\t7 - Dourado\t\t8 - Prateado\n\n");

            printf("Informe a cor da terceira faixa: ");
            scanf("%d", &esc3);
                //Escolha das cores
                switch(esc3){
                            case 1 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*1;
                            break;

                            case 2 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*10;
                            break;

                            case 3 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*100;
                            break;

                            case 4 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*1000;
                            break;

                            case 5 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*10000;
                            break;

                            case 6:
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*100000;
                            break;

                            case 7 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*0.1;
                            caso7=1;
                            break;

                            case 8 :
                            jun1 = (cor1*10) + cor2;
                            cor3=jun1*0.01;
                            caso7=1;
                            break;


                }//Fim Swtch
        }//Fim If

        if(i=4){system("cls");

            printf("========================================================================================================================\n*");
            printf("\t\t\t\tPrograma para determinação da Resistência Elétrica\t\t\t\t      * \n");
            printf("========================================================================================================================\n*");
            printf("\t\t\t\tBem vindo ao calculador de Resistência Elétrica.\t\t\t\t\t*\n*\t\t\tInforme as cores das 4 faixas do resistor para saber a Resistência Elétrica.\t\t\t*\n");
            printf("------------------------------------------------------------------------------------------------------------------------\n");
            printf("\t\t\t\t\t\tOPÇÕES DE FAIXAS\n\n\n");
            printf("\t\t\t\t\t1 -  Preto\t\t2 -  Marrom\n\n");
            printf("\t\t\t\t\t3 - Vermelho\t\t4 - Laranja\n\n");
            printf("\t\t\t\t\t5 - Amarelo\t\t6 - Dourado\n\n");
            printf("\t\t\t\t\t7 - Prateado\n\n");
            printf("Informe a cor da quarta faixa: ");
            scanf("%d", &esc4);


                    switch(esc4){
                            case 1 :
                            tol =cor3*0.20;
                            break;

                            case 2 :
                            tol =cor3* 0.01;
                            break;

                            case 3 :
                            tol =cor3*0.02;
                            break;

                            case 4 :
                            tol =cor3*0.03;
                            break;

                            case 5 :
                            tol =cor3*0.04;
                            break;

                            case 6:
                            tol =cor3*0.05;
                            break;

                            case 7 :
                            tol =cor3*0.10;
                            break;
                    }//Fim Swtch

        }//Fim If
    }//Fim For
    //Mostrando Resultado
    printf("\n\t\t\tA Resistência Elétrica é %d e a Tolerância será de %.2fOhms.", cor3, tol);


    //Reinicialização opcional do programa
      printf("\nQuer fazer outra vez?\nDigite s(sim) ou n(nao)\n");
      scanf(" %c",&y);
 }

      while( y != 's' || y != 'S')
            {
       system("taskkill /IM cb_console_runner.exe");
            }
    return 0;


}







