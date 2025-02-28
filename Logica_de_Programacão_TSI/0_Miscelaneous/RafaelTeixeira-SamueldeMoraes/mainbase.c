#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <Windows.h>
#include <stdbool.h>
#include <time.h>
// Release

/* Configurações da tela*/
#define LARGURA_TELA            80
#define ALTURA_TELA             24
#define DELAY                   0.01*1000           //atraso de um centesimo de segundo, em milisegundos
#define COMP_INICIAL_PALETA     20
#define VAZIO          32
#define SIMBOLO_PALETA 220

/* Comandos */
#define SAIR       'Q'
#define ESQUERDA   75
#define DIREITA    77

/*variáveis de  controle do jogo*/
unsigned short int NIVEL = 0;
unsigned char MAPA[ALTURA_TELA+1][LARGURA_TELA+1];
unsigned char CENARIO[] =  "cenario.txt";

/*variáveis de controle da paleta*/
unsigned short int PALETA_POS_Y = (unsigned short int)ALTURA_TELA - 1; //penúltima linha
unsigned short int PALETA_POS_X = (unsigned short int)(LARGURA_TELA/2); // meio da linha
unsigned short int PALETA_COMP = (unsigned short int)COMP_INICIAL_PALETA;

/*variáveis de  controle da bola*/
unsigned short int BOLA_POS_Y = 15;
unsigned short int BOLA_POS_X = 2;
/* unsigned short int BOLA_VEL_Y = -1;
unsigned short int BOLA_VEL_X = 1; */

unsigned short int pontos = 0, pontosTotais, vida = 5, nivel = 1, vel;
bool move19 = 0, // sentidoinicial 1
	 move37 = 0, // sentidoinicial 2
	 move73 = 0, // sentidoinicial 3
	 move91 = 0, // sentidoinicial 4
	 start  = 0,
     cont73 = 0,
     cont19 = 0,
     autoNoMia = 0,
     sair   = 0;
      
/*lista de funcoes*/
void movimentoJose(void);                   //FUNCAO DOS GURI
void placar();                              //FUNCAO DOS GURI
void zeroMaquina();                         //FUNCAO DOS GURI
void binomo();                              //FUNÇÃO DOS GURI                                    
void reiniciaMapa(int pontosLimite);        //FUNÇÃO DOS GURI
void gotoxy (int x, int y);
void limparTela();
void mensagem(char str[]);
int carregarCenario(unsigned char cenario[], unsigned char mapa[ALTURA_TELA+1][LARGURA_TELA+1]);
void escreverCenario(unsigned char mapa[ALTURA_TELA+1][LARGURA_TELA+1]);
void moverPaleta(unsigned short int nova_PALETA_POS_X, unsigned short int nova_PALETA_POS_Y, unsigned char mapa[ALTURA_TELA+1][LARGURA_TELA+1]);
void escreverPaleta(unsigned short int nova_PALETA_POS_X, unsigned short int nova_PALETA_POS_Y);

/* 
ESSA FUNCAO CONFIGURA UM MOVIMENTO CONTINUO PARA A BOLA.
TAMBEM DEFINIMOS MOVIMENTOS COM BASE NA NUMERACAO DO TECLADO:
    MOVE19; ESQUERDA -> DIREITA : BAIXO -> CIMA
    MOVE37; DIREITA -> ESQUERDA : BAIXO -> CIMA
    MOVE91; DIREITA -> ESQUERDA : CIMA -> BAIXO
    MOVE73; ESQUERDA -> DIREITA  : CIMA -> BAIXO 
 */
void movimentoJose(){
	if(move37){  
		if(BOLA_POS_X == 1){                                           //SE A BOLA PEGAR NA PAREDE DA ESQUERDA REALIZA A TRANSIÇÃO PARA MOVE 19
                                         
			move37 = false;                                            //MUDA A DIRECAO DA BOLA
			move19 = true;
		}
		else if(MAPA[BOLA_POS_Y - 1][BOLA_POS_X - 1] ==  178 ){        //DUPLO TESTE PAR OBJETIVO

            if(MAPA[BOLA_POS_Y - 1][BOLA_POS_X - 1] ==  178){          //DIFERENCIANDO O TIPO DE ENTRADA
                gotoxy(BOLA_POS_X - 1,BOLA_POS_Y - 1);                              
                MAPA[BOLA_POS_Y - 1][BOLA_POS_X - 1] = 32;             //ATUALIZAÇÃO DO MAPA
			    printf("%c",32);
                pontos ++;
                pontosTotais ++;                                       // pontuação ++
                move37 = false;                                        //MUDA A DIRECAO DA BOLA
				move91 = true;
            }

			}else if(BOLA_POS_Y == 1){
                 move37 = false;                                        //MUDA A DIRECAO DA BOLA
				 move91 = true;
            }
			else{
                gotoxy(BOLA_POS_X,BOLA_POS_Y);                          //APAGA O ANTERIOR
			    MAPA[BOLA_POS_Y][BOLA_POS_X] = 32;                      //ATUALIZAÇÃO DO MAPA
			    printf("%c",32);
                
                BOLA_POS_X--;
				BOLA_POS_Y--;
                
			}
        
	}else if(move19){

		if(BOLA_POS_Y == 1){
                
                 move19 = false;                                      //MUDA A DIRECAO DA BOLA
				 move73 = true;
			}
            else if(BOLA_POS_X == 77){
                BOLA_POS_Y++;
                cont19 = 1;
				move19 = false;                                         //MUDA A DIRECAO DA BOLA
				move37 = true;
			}else if(MAPA[BOLA_POS_Y - 1][BOLA_POS_X + 1] ==  178){
                gotoxy(BOLA_POS_X + 1,BOLA_POS_Y - 1);                              
                MAPA[BOLA_POS_Y -1][BOLA_POS_X + 1] = 32;           //ATUALIZAÇÃO DO MAPA
			    printf("%c",32);
                pontos ++;
                pontosTotais ++;
                move19 = false;                                     //MUDA A DIRECAO DA BOLA
				move73 = true;

            }
			else{
                gotoxy(BOLA_POS_X,BOLA_POS_Y);                          //APAGA O ANTERIOR
			    MAPA[BOLA_POS_Y][BOLA_POS_X] = 32;                      //ATUALIZAÇÃO DO MAPA
			    printf("%c",32);
				BOLA_POS_X++;
				BOLA_POS_Y--;
		    }

	    } else if(move91){

		    if(BOLA_POS_X == 1){
			    move91 = false;                                         //MUDA A DIRECAO DA BOLA
			    move73 = true;

		    }
		else if(MAPA[BOLA_POS_Y + 1][BOLA_POS_X - 1] ==  178){ 	    //A PROXIMA POS. BOLA E PALETA?
            gotoxy(BOLA_POS_X - 1,BOLA_POS_Y + 1);                              
            MAPA[BOLA_POS_Y +1][BOLA_POS_X - 1] = 32;                                  //ATUALIZAÇÃO DO MAPA
			printf("%c",32);
            pontos++;
            pontosTotais += pontos;  
            move91 = false;                                     //MUDA A DIRECAO DA BOLA
			move37 = true;
		}else if(MAPA[BOLA_POS_Y + 1][BOLA_POS_X - 1] ==  220){
             move91 = false;                                     //MUDA A DIRECAO DA BOLA
			move37 = true;
        }
		else{
            gotoxy(BOLA_POS_X,BOLA_POS_Y);                          //APAGA O ANTERIOR
			MAPA[BOLA_POS_Y][BOLA_POS_X] = 32;                      //ATUALIZAÇÃO DO MAPA
			printf("%c",32); 
			BOLA_POS_X--;
			BOLA_POS_Y++;
		}

	}else if(move73){

		if(BOLA_POS_X == 77){
                BOLA_POS_Y--;
                cont73 = 1;
                move73 = false;
				move91 = true;

		}else if(MAPA[BOLA_POS_Y + 1][BOLA_POS_X + 1] ==  178 ){        // SE A POS. FOR PALETA
                gotoxy(BOLA_POS_X + 1,BOLA_POS_Y + 1);                              
                MAPA[BOLA_POS_Y +1][BOLA_POS_X + 1] = 32;                   //ATUALIZAÇÃO DO MAPA
			    printf("%c",32);
                pontos ++;
                pontosTotais ++;
				move73 = false;                                             //MUDA A DIRECAO DA BOLA
				move19 = true;
		}
        else if(BOLA_POS_Y==22){                                        //TESTE QUANDO NAO PEGA NA PALETA
                vida--;
                sleep(5);
        }
        else if(MAPA[BOLA_POS_Y + 1][BOLA_POS_X + 1] ==  220){
                move73 = false;                                             //MUDA A DIRECAO DA BOLA
				move19 = true;
        }
		else{
                gotoxy(BOLA_POS_X,BOLA_POS_Y);                              //APAGA O ANTERIOR
			    MAPA[BOLA_POS_Y][BOLA_POS_X] = 32;                          //ATUALIZAÇÃO DO MAPA
			    printf("%c",32);
				BOLA_POS_X++;
				BOLA_POS_Y++;
		}
		
	}

    if(cont19){                                         //CONDICAO ESPECIAL PAR NAO DEIXAR RASTRO DE BOLINHA NA PAREDE DA ESQUERDA
                gotoxy(BOLA_POS_X ,BOLA_POS_Y - 1);
			    MAPA[BOLA_POS_Y - 1][BOLA_POS_X] = 32;           
			    printf("%c",32);
                cont19 = 0;
            }
            else if(cont73){                            //CONDICAO ESPECIAL PAR NAO DEIXAR RASTRO DE BOLINHA NA PAREDE DA ESQUERDA
                gotoxy(BOLA_POS_X,BOLA_POS_Y + 1);
			    MAPA[BOLA_POS_Y + 1][BOLA_POS_X] = 32;           
			    printf("%c",32);
                cont73 = 0;
            }
			else{                                       //CONDICAO NORMAL PARA PRINTAR A BOLINHA
                gotoxy(BOLA_POS_X,BOLA_POS_Y);          
			    MAPA[BOLA_POS_Y][BOLA_POS_X] = 1;           
			    printf("%c",1);
            }

            if(BOLA_POS_Y==22){                         //TESTE QUANDO NAO PEGA NA PALETA
                vida--;
                zeroMaquina();
 
                if (vida == 0)sair = 1;
                start = 0;
            }

            Sleep(vel);                                //DIFICULDADE DO JOGO
}

/* 
ESSA FUNÇÃO IMPRIME CONSTANTEMENTE O VALOR
DA TABELA DE PONTOS
    -VAI PARA A POSICAO E IMPRIME
*/

void placar(){                                     
    gotoxy(11,24);
    MAPA[11][24] = pontosTotais;                            //IMPRESSAO DOS PONTOS
    printf("%d",pontosTotais);

    gotoxy(26,24);
    MAPA[26][24] = vida;                                    //IMPRESSAO DAS VIDAS
    printf("%d",vida);

    gotoxy(41,24);
    MAPA[41][24] = nivel;                                   //IMPRESSAO DO NIVEL
    printf("%d",nivel);
}

/* 
TODA VEZ QUE PRECISAMOS REINICIAR O JOGO.
PRINTAMOS A BOLA E A PALETA NA POSICAO INICIAL
 */

void zeroMaquina(){
    binomo();
    gotoxy(BOLA_POS_X,BOLA_POS_Y);                          //APAGA A BOLINHA
	MAPA[BOLA_POS_Y][BOLA_POS_X] = 32;                     
	printf("%c",32);
    int i;
    for(i = 1; i < 81; i++){                                // FUNCAO PARA APAGAR TODA A LINHA DA PALETA
    gotoxy(10,10);
    if(MAPA[21][i] == 220 ){                 
            gotoxy(i,21);
            MAPA[21][i] = 32;                     
		    printf("%c",32);
        }
    }
                
    PALETA_POS_X = 25;                                      //PALETA NA POS. INICIAL
    moverPaleta(PALETA_POS_X,PALETA_POS_Y,MAPA);            //MOVE A PALETA PARA A POS. INICIAL           
    BOLA_POS_X = 34;                            
    BOLA_POS_Y = 20;                                        //ESCREVE A BOLINHA NO CENTRO
    gotoxy(BOLA_POS_X,BOLA_POS_Y);
	MAPA[BOLA_POS_Y][BOLA_POS_X] = 1;           
	printf("%c",1); 
}

//A FUNCAO BINOMO GERA UM NUMERO ALEATORIO DE ZERO 0 A 10

void binomo(){

    int aleatorio = rand() % 10;
    if (aleatorio % 2 == 0){
        move19 = true;
        move37 = false;
        move91 = false;
        move73 = false;
    }
    else{
        move37 = true;
        move19 = false;
        move91 = false;
        move73 = false;
    } 
}

/* 
TODA VEZ QUE ATINGIR O pontosLimite o jogo reinicia o mapa, 
conta um nivel e subtrai 1 caractere da paleta
*/

void reiniciaMapa(int pontosLimite){
    if(pontos == pontosLimite){ //308
                limparTela();
                int x,y;
                for (y = 3; y <= 6 ; y++ ){
                    for(x=1; x <= 77 ; x++){
                        MAPA[y][x] = 178;
                    }
                }
                carregarCenario(CENARIO, MAPA);
                escreverCenario(MAPA);
                PALETA_COMP--;
                zeroMaquina();
                nivel ++;
                pontos = 0;
                placar();
                gotoxy(3,24);
                printf("PONTOS:         VIDAS:         NIVEL:");
                start = 0;
                
            }
}

void limparTela(){
    int i;
    gotoxy(0,0);
    for(i = 0; i < LARGURA_TELA; i++)
        printf("%s", "                                                                                ");
    gotoxy(0,0);
    return;
}
void mensagem(char str[]){
    char tecla;
    limparTela();
    gotoxy(0,0);
    printf("********************************************************************************");
    gotoxy(10,5);
    printf("%s", str);
    gotoxy(10,20);
    printf("********************************************************************************");
}

int carregarCenario(unsigned char cenario[],unsigned char mapa[ALTURA_TELA][LARGURA_TELA+1]){
    int i,j, inicio_paleta = 0;
    FILE *fp;
    fp = fopen(cenario,"r");
    /* printf("%s", fp);
    sleep(50); */

    if (!fp)
        return 0;

    for (j = 0; j < ALTURA_TELA; j++)
        for (i = 0; i < LARGURA_TELA; i++)
            mapa[j][i] = VAZIO;

    for (j = 0; j < ALTURA_TELA; j++){
        fgets(mapa[j], 8026, fp);
        mapa[j][LARGURA_TELA] = 0;
    }

    for (j = 0; j < ALTURA_TELA; j++)
        for (i = 0; i < LARGURA_TELA; i++)

            switch (mapa[j][i]){
                case '#'://Paredes
                    mapa[j][i] = 219;
                    break;
                case '$'://Blocos
                    mapa[j][i] = 178;
                    break;
                case 'o'://Bola
                    mapa[j][i] = 1;
                    BOLA_POS_X = i;
                    BOLA_POS_Y = j;
                    break;
                case '='://Paleta
                    if (!inicio_paleta){
                        inicio_paleta = 1;
                        PALETA_POS_X = i;
                        PALETA_POS_Y = j;
                    }
                    mapa[j][i] = 220;
                    break;
                default:
                    mapa[j][i] = ' ';
            }

    fclose(fp);//fecha o arquivo
    return 1;
}

void escreverCenario(unsigned char mapa[ALTURA_TELA+1][LARGURA_TELA+1]){
    int i,j;
    limparTela();
    gotoxy(0,0);
    for(i = 0; i < ALTURA_TELA; i++)
        for (j = 0; j < LARGURA_TELA; j++){
            gotoxy(j,i);
            if (mapa[i][j] != '\n'){
                //printf("%d",j);
                printf("%c",mapa[i][j]);
            }
        }
    gotoxy(0,0);
    return;
}

void escreverPaleta(unsigned short int nova_PALETA_POS_X, unsigned short int nova_PALETA_POS_Y){
    int i;
    int x_inicio_paleta = PALETA_POS_X;
    int x_final_paleta = x_inicio_paleta + PALETA_COMP;
    int x_novo_inicio_paleta = nova_PALETA_POS_X;
    int x_novo_final_paleta = x_novo_inicio_paleta + PALETA_COMP;

    gotoxy(PALETA_POS_X, PALETA_POS_Y);
    for (i=x_inicio_paleta; i<=x_final_paleta; i++){
        printf("%c",VAZIO);
    }
    gotoxy(nova_PALETA_POS_X, nova_PALETA_POS_Y);
    for (i=x_novo_inicio_paleta; i<=x_novo_final_paleta; i++){
         printf("%c",SIMBOLO_PALETA);
    }
}

void moverPaleta(unsigned short int nova_PALETA_POS_X, unsigned short int nova_PALETA_POS_Y, unsigned char mapa[ALTURA_TELA+1][LARGURA_TELA+1]){
    int i;
    int x_inicio_paleta = PALETA_POS_X;
    int x_final_paleta = x_inicio_paleta + PALETA_COMP;
    int x_novo_inicio_paleta = nova_PALETA_POS_X;
    int x_novo_final_paleta = x_novo_inicio_paleta + PALETA_COMP;

    for (i=x_inicio_paleta; i<=x_final_paleta; i++){
        mapa[PALETA_POS_Y][i] = ' ';
    }

    for (i=x_novo_inicio_paleta; i<=x_novo_final_paleta; i++){
        mapa[PALETA_POS_Y][i] = SIMBOLO_PALETA;
    }
    escreverPaleta( nova_PALETA_POS_X, nova_PALETA_POS_Y);

    PALETA_POS_X = nova_PALETA_POS_X;
    PALETA_POS_Y = nova_PALETA_POS_Y;
    return;
}

void gotoxy (int x, int y) //Funcao que recebe as coordenadas X e Y e manda o cursor para a posicao recebida
{
        COORD coord = {0, 0};
        coord.X = x; coord.Y = y; // X and Y coordinates
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(int argc, char *argv[]) {
    int x=0, y=0;
    int xEscrita = 30;
    int tecla, troca=1, op = 0;

    srand(time(NULL));

        gotoxy(xEscrita,10);
        printf("BREAKOUT: DOS GURI EDITION");
        gotoxy(xEscrita,12);
        printf("TU QUE JOGAH OU FICAH OLHANDO? ESCOLHE UMA OPCAO AI!!!");
        gotoxy(xEscrita,13);
        printf("1 - JOGAR");
        gotoxy(xEscrita,14);
        printf("2 - AUTOMATICO");
        gotoxy(xEscrita,15); 
        
        inicio:
        
        scanf("%d", &op);

        switch (op)
        {
        case 1:                 //JOGO MANUAL
            gotoxy(xEscrita, 15);
            printf("VOCE ESCOLHEU JOGAR!");
            autoNoMia = 0;
            break;
        case 2:                 //JOGO AUTOMATICO
            gotoxy(xEscrita, 15);
            printf("UEH?! FICOU COM MEDINHO?");
            sleep(1);
            autoNoMia = 1;      
            break;
    
        default:
            gotoxy(xEscrita, 16);
            printf("Digita um valor que preste neh querido...");
            Sleep(2000);
            gotoxy(xEscrita, 16);
            printf("                                         ");
            gotoxy(xEscrita, 15);
            goto inicio;                //obriga o jogador a digitar um valor válido
            break;
        }

    gotoxy(xEscrita,17);
    printf("ESCOLHA UMA VELOCIDADE DE 0 A 50 PARA A BOLINHA.");
    gotoxy(xEscrita,18);
    printf("0 --> RAPIDO   50 --> LENTO");
    gotoxy(xEscrita,19);
    scanf("%d", &vel);

    binomo();               //GERANDO O PRIMEIRO NUMERO ALEATORIO

    if (!carregarCenario(CENARIO, MAPA)){
        NIVEL = 0;
        mensagem("O cenario digitado nao existe!");
        return;
    }else{
        escreverCenario(MAPA);
    }
    
    gotoxy(3,24);
    printf("PONTOS:         VIDAS:         NIVEL:");

    while(!sair) {

        if( kbhit() && !autoNoMia) { // Verifica se uma tecla qualquer foi pressionada
            start = 1;
            tecla = toupper(getch()); // Recebe a tecla digitada pelo usuario, e passa para maiuscula
            
            switch(tecla) { // codigo ASCII da tecla pressionada
                case SAIR:
                    start = 0;
                    sair = 1;
                case ESQUERDA:
                    if(PALETA_POS_X <= 2 ) break/* continue */;
                    moverPaleta(PALETA_POS_X - 4, PALETA_POS_Y, MAPA);
                    break;
                case DIREITA:

                    if(PALETA_POS_X >= LARGURA_TELA - PALETA_COMP - 4) break/* continue */; // DELIMITANDO A PAREDE NA DIREITA
                    moverPaleta(PALETA_POS_X+4, PALETA_POS_Y, MAPA);
                    break;
                default: break;
            }
            //PQ o carro não pode ser gato?
        }else if(autoNoMia){
            start = 1;
            if(BOLA_POS_X > PALETA_POS_X + (PALETA_COMP / 2) + 1 ){
                tecla = DIREITA;
            }else if (BOLA_POS_X < PALETA_POS_X + (PALETA_COMP / 2) - 1){
                tecla = ESQUERDA;
            }   
                if(kbhit()){
                    tecla = toupper(getch()); // Recebe a tecla digitada pelo usuario, e passa para maiuscula
                    if(tecla == SAIR) sair = 1;
                }
                switch(tecla) { // codigo ASCII da tecla pressionada
                case SAIR:
                    start = 0;
                    sair = 1;
                case ESQUERDA:
                    if(PALETA_POS_X <= 2 ) break;
                    moverPaleta(PALETA_POS_X - 4, PALETA_POS_Y, MAPA);
                    break;
                case DIREITA:

                    if(PALETA_POS_X >= LARGURA_TELA - PALETA_COMP - 4) break; // DELIMITANDO A PAREDE NA DIREITA
                    moverPaleta(PALETA_POS_X+4, PALETA_POS_Y, MAPA);
                    break;
                default: 
                    break;
                }
                
        }

        if (start){
            movimentoJose();
            placar();
            
        }
        reiniciaMapa(308);        //308 EH O LIMITE PARAMETRO DE ENTRADA E A QUANTIDADE DE PONTOS A FAZER PARA REINICIAR O MAPA

        Sleep(DELAY);
    }

  return 0;

}