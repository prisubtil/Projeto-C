#include<stdio.h>
#include<stdlib.h>//Biblioteca para colorir o programa com comandos sustem("color xy").
#include<string.h> //Biblioteca para usar a funçao strcmp.
#define size 200 //variavel constante que nao muda seu valor.
#include <windows.h>
#include <string.h> //necessário para strcpy

//variaveis globais
char nome0[100];
int subMenu,opcao;
int numCadastro[size];
int telefone[size];
char nomeCli[size] [50];
char endeCli[size] [50];
int cpfCli[];
int sair;

int valorFinal2;
int valorFinal1;

static int linha;



//Funcoes usadas no programa
void menu2();
void cadastro();
void exibi();
void pedido();
void total();
void inform();


//inicio do programa
int main()
{
   system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
   system("mode con cols=115");//Altera as Colunas Da Kill Black Window/

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                        PROGRAMA PIZZARIA                                          |");
    puts("\t|                                ===============================                                    |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t|       888888b.     8888  88888888888  88888888888  8888888b.   88888888b.  888  8888888b.         |");
    puts("\t|       888    88b   8888      d888p        d888p           88b  888    88b  888         88b        |");
    puts("\t|       888     888  8888     d888p        d888p     .d88888888  888     888 888  .d88888888        |");
    puts("\t|       888   d88p   8888    d888p        d888p      888    888  888   d88p  888  888    888        |");
    puts("\t|       8888888p     8888   d888p        d888p      888     888  88888888    888 888     888        |");
    puts("\t|       888          8888  88888888888  88888888888  888888888   888   888   888  8888888888        |");
    puts("\t|       888  =================================================== 888    888  ===============        |");
    puts("\t|       888                                                      888     888                        |");
    puts("\t|       888                                                                                         |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t|                                             DELIVERY                                              |");
    puts("\t+===================================================================================================+\t");


            puts("\t                          +===========================================+");
            puts("\t                          |                                           |");
            puts("\t                          |                                           |");
            printf("\t                                           _LOGIN: ");
            fflush(stdin);
            scanf("%[^\n]s" ,nome0);
            printf("\t                                           _SENHA: ");
            scanf("%d" , &opcao);



   switch(opcao){
   case 1234:
        menu2();
        break;

   default:
    //system("cls");
    printf("\n\t                                 senha invalida Insira login e senha:\n");
    Sleep(1200);
    main();

   }

   return 0;
}
//Funcao de menu
void menu2(){

        system("color F1");
        system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
        system("mode con cols=115");//Altera as Colunas Da Kill Black Window/
        system("cls");

        puts("\t+===================================================================================================+");
        puts("\t|                                                                                                   |");
        puts("\t|                                        TELA DE INICIAL                                            |");
        puts("\t|                                ===============================                                    |");
      printf("\t|                                        BEM VINDO %s                                                " ,nome0);
        puts("\t                                                                                                     ");
        puts("\t+===================================================================================================+\t");
        puts("\t|                                                                                                   |");
        puts("\t|                                1- Cadastrar cliente                                               |");
        puts("\t|                                2- Cadastrar funcionario                                           |");
        puts("\t|                                3- Exibir dados dos Clientes                                       |");
        puts("\t|                                4- Realizar Pedidos                                                |");
        puts("\t|                                5- Elogios e Reclamacoes                                           |");
        puts("\t|                                6- Informacoes do programa                                         |");
        puts("\t|                                7- Sair                                                            |");
        puts("\t|                                                                                                   |");
        puts("\t+===================================================================================================+\t");


        printf("\tSelecione uma opcao por favor:\t");
        scanf("%d", &opcao);
        system("cls");

        if(opcao == 1){
            cadastro();
        }
        else if (opcao == 2){
              menu2();
        }
        else if(opcao == 3){
            exibi();
        }

        else if(opcao == 4 ){
            pedido();
        }


        else if(opcao == 5 ){
            menu2();
        }

        else if(opcao == 6 ){
            inform();
        }
        else if(opcao == 7 ){
            return 0;
        }
        else if(opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5 && opcao != 6 && opcao != 7){
             menu2();
        }
}

//Funcao de cadastro de cliente
void cadastro(){


     puts("\t+===================================================================================================+");
     puts("\t|                                                                                                   |");
     puts("\t|                                        TELA DE CADASTRO                                           |");
     puts("\t|                                ===============================                                    |");
   printf("\t|                                        BEM VINDO %s                                             |" ,nome0);
     puts("\t                                                                                                     ");
     puts("\t+===================================================================================================+");


    do{
    printf("\t\t   Digite um numero de (1 a 200) para cadastrar novo cliente:\t ");
    scanf("%d", &numCadastro[linha]);
    printf("\n\tDigite nome do cliente : ");
    fflush(stdin);
    scanf("%[^\n]s",nomeCli[linha]);
    printf("\n\tDigite o endereco do cliente : ");
    fflush(stdin);
    scanf("%[^\n]s",endeCli[linha]);
    printf("\n\tDigite o telefone do cliente : ");
    scanf("%d", &telefone[linha]);
    printf("\n\tDigite  o numero do CPF : ");
    scanf("%d", &cpfCli[linha]);
    printf("\n\tDigite 1 para continuar a cadastrar ou numero 0 para voltar ao menu\t");
    scanf("%d" , &opcao);

    linha++;


    }while(opcao==1);
    return menu2();
}

//Funcao de verificacao de cadastro
void exibi(){
    int verifCadastro;
    int i;

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                       TELA DE VERIFICACAO                                         |");
    puts("\t|                                ===============================                                    |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\t");


    //printf("\nCodigo: %i \nNome: %s\nEndereco: %s\ntelefone: %i\n", numCadastro, nomeCli, endeCli, telefone );
    printf("\n\t(1) - para pesquisar por (numero) de codigo ou \n\t(2) - para verificar todos os cadastros - ");
    scanf("%d" , &opcao);
    switch(opcao){
        case 1:
            printf("\n\tDigite o Codigo :");
            scanf("%d", &verifCadastro);
            for(i=0;i<size;i++){
                if(numCadastro[i]== verifCadastro ){
                    printf("\nCodigo: %i\nNome: %s\nEndereco: %s\nTelefone: %i \nCPF: %i\n", numCadastro[i], nomeCli[i], endeCli[i], telefone[i], cpfCli[i]);
                }
            }
        break;
        case 2:
            printf("\n\tTodos os cadastros: ");
            if (numCadastro[0] !=0){
                for(i=0;i<size;i++){
                    if(numCadastro[i] != 0 ){
                        printf("\n\tCodigo: %i\n\tNome: %s\n\tEndereco: %s\n\tTelefone: %i \n\tCPF: %i\n", numCadastro[i], nomeCli[i], endeCli[i], telefone[i], cpfCli[i]);
                    }
                  }
            }else{
                printf("nao ha clientes cadastrados");
            }
            break;

        default:

            break;
    }




    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf("\n\t(1) - para continuar a pesquisa ou qualquer numero para sair - ");
    scanf("%i", &sair);

    if(sair == 1){
        system("cls");
        exibi();

    }else{
    menu2();
    }
    return 0;



};

//Funcao de pedido de pizza e bebidas
void pedido(){
int sair2;
int verficaCpf;
int i;
int j;
int OpcaoPedido;
int valorTotal;

char nome[30];
int Option;
int PizzaBrasileira= 45;
int PizzaCalabreza= 30;
float PizzaMussarela= 40.50;
int CocaCola=8;
int quantPed;
int opcao;
int opcao1;
int opcao2;
int opcao3;
float valorPizza=0;
int valorPizza1=0;




    system("color b");
    system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
    system("mode con cols=115");//Altera as Colunas Da Kill Black Window/

    puts("\t+===================================================================================================+");
    puts("\t|                                                                                                   |");
    puts("\t|                                        TELA DE PEDIDOS                                            |");
    puts("\t|                                ===============================                                    |");
    puts("\t|                                                                                                   |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\t");

    printf("\tDigite o CPF do cliente para cadastar o pedido :");
    scanf("%i", &verficaCpf);

   for(i=0;i<size;i++){
        if(cpfCli[i] == verficaCpf){
            printf("\n\tCodigo: %i \n\tNome: %s \n\tEndereco: %s \n\tTelefone: %i \n\tCPF: %i\n", numCadastro[i], nomeCli[i], endeCli[i], telefone[i], cpfCli[i]);
        }else{
            printf("\n\tNao ha cadastro de cliente\n");

        }
        break;
    }
    puts("\t+===================================================================================================+\t");
    printf("\n\tDigite (1) - para fazer pedido ou (0) - para voltar ao menu principal: ");
    scanf("%i", &sair2);

    if(sair2 == 1){


            do{
                system("cls");
                puts("\t+===================================================================================================+\t");
                puts("\t|          `----`                                                                 `----`            |");
                puts("\t|         `--::..:                       SABORED DE PIZZAS                        :..::--`          |");
                puts("\t|       -:--:::::/                                                               /:::::--:-         |");
                puts("\t|    `::``.://:+o+-./                 1 - Pizza De Mussarela                   /.-+o+://:.``::`     |");
                puts("\t|   -:``.//-..-oso-.+                                                          /.-oso-..-//.``:-    |");
                puts("\t|   .-://-....-....-+                 2 - Pizza De Calabreza                   +-....-....-//:-.    |");
                puts("\t|      .:/-.-yy+.--yy                                                          yy-..+yy-.-::.       |");
                puts("\t|         -+/::-..-/o`                3 - Pizza De Brasileira                 .o/...-::/+-          |");
                puts("\t|         `s.-/-....:-                                                        -:....-/-.s`          |");
                puts("\t|             /+:/-.-:                4 - Refrigerante Coca-cola              :-.-/:+/              |");
                puts("\t|                +s/-/                                                        :-/s+                 |");
                puts("\t|                   :o                                                        o:                    |");
                puts("\t|                                                                                                   |");
                puts("\t+===================================================================================================+\t\n");

                puts("\t+===================================================================================================+\t");
                printf("\n\tDigite uma opcao : ");
                scanf("%i", &opcao1);

                int total=0;

                if(opcao1 ==1){
                    strcpy(nome, "Pizza De Mussarela");
                    printf("\n\tVoce escolheu a %s, De Preco R$: %0.2f\n",nome, PizzaMussarela);
                    valorPizza = valorPizza + 40.50;
                    printf("\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);

                }

                else if(opcao1 ==2){
                    strcpy(nome, "Pizza De Calabreza");
                    printf("\n\tVoce escolheu a %s, De Valor R$:%i\n",nome, PizzaCalabreza);
                    valorPizza = valorPizza + 30;
                    printf("\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                else if(opcao1 ==3){
                    strcpy(nome, "Pizza Brasileira");
                    printf("\n\tVoce escolheu a %s, De Valor R$:%i\n",nome, PizzaBrasileira);
                    valorPizza = valorPizza + 45;
                    printf("\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                else if(opcao1 ==4){
                    strcpy(nome, "Coca-cola");
                    printf("\n\tVoce escolheu refrigerante %s, De Valor R$:%i\n",nome, CocaCola);
                    valorPizza = valorPizza + 8;
                    printf("\tSoma: %0.2f", valorPizza);
                    printf("\n\tPressione 1 para continuar pedindo ou 8 para finalizar pedido: ");
                    scanf("%d", &Option);
                }
                 if(Option == 8){

                    printf("\n\tValor total da compra R$: %0.2f ", valorPizza);
                    printf("\n\tPressione 1 para voltar ao menu principal ");
                    scanf("%d", &Option);

                }
                if(Option == 1){
                     system("cls");
                     menu2();
                }
            }while(opcao1 == 1 || opcao1 == 2 || opcao1 == 3 || opcao1 == 4 );
            menu2();



    }else if(sair2==0){
        menu2();
    }


    return 0;
};

//Funçao de informacoes sobre o programa e ciradores
void inform(){

    int Option;


    system("color b");
    system("mode con lines=60");//Altera as Linhas Da Kill Black Window/
    system("mode con cols=115");//Altera as Colunas Da Kill Black Window/
    system("cls");


    puts("\t+===================================================================================================+");
    puts("\t+===================================================================================================+");
    puts("\t*===                                                                                             ===*");
    puts("\t*===                                                                                             ===*");
    puts("\t*===                                    TELA DE INFORMACAO                                       ===*");
    puts("\t*===                              ===============================                                ===*");
    puts("\t*===                                                                                             ===*");
    puts("\t*===                                                                                             ===*");
    puts("\t+===================================================================================================+\t");
    puts("\t+===================================================================================================+\n\n");


    puts("\t+===================================================================================================+\t");
    puts("\t|                                                                                                   |");
    puts("\t|                                 UNIP - Universidade Paulista                                      |");
    puts("\t|                       ================================================                            |");
    puts("\t|                                                                                                   |");
    puts("\t|                                          Integrantes                                              |");
    puts("\t|                       -----------------------------------------------                             |");
    puts("\t|                       *                                             *                             |");
    puts("\t|                       *         Rudinei Lopes  RA: N53717-5         *                             |");
    puts("\t|                       *         Priscila Cubo  RA: F09DAJ-8         *                             |");
    puts("\t|                       *         Lorena Silva   RA: F087921          *                             |");
    puts("\t|                       *         Iara Cordeiro  RA: N512CF4          *                             |");
    puts("\t|                       *                                             *                             |");
    puts("\t|                                       Sao paulo /2019                                             |");
    puts("\t|                                                                                                   |");
    puts("\t+===================================================================================================+\n\t");


    printf("\n\tPressione (1) para voltar ao menu principal ");
    scanf("%d", &Option);

    if(Option == 1){
        system("cls");
        menu2();
    }

return 0;
};

//funcao de elogios e reclamacoes
