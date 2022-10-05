/* Hola mes obres :)
 *
 * Te amo
 *
 * mio parlez de l'espianol
 *
 * Ugh
 * */
#include <unistd.h>
#include <stdio.h>

int main(void) {

    int UserInput;

//Einleitung zum Spiel
        printf(" ________________________________________________________ \n");printf("|                                                        |\n");printf("|                   Herzlich wilkommen                   |\n");printf("|________________________________________________________|\n\n");

        printf("\t\tWas wollen sie spielen?\n\n");
int bait;
int scam;
       //Erstes Spiel
        printf("(A)\tTic-Tac-Toe\n");
       //Zweites Spiel
        printf("(B)\tSnake\n");
       //Letztes Spiel
        printf("(C)\tMinesweeper\n\n");

        printf("Enter your game A, B or C --->");
        scanf("%c", &UserInput);
        printf("Nice choise, have fun");

    sleep(1);
// I also want to sleep











    if(UserInput == 'A' || UserInput == 'a'){
        system("start https://playtictactoe.org");
    }
    else if(UserInput == 'B' || UserInput == 'b'){
        system("start https://snake.io");
        printf("Hallo");
    }
    else if(UserInput == 'C' || UserInput == 'c'){
        system("start https://minesweeperonline.com");
    }
//wäge isch lustig
    while(1){
        printf("\t\tYou got Hacked HAHAHAHAHA\t\t");
    }
    return 0;
}

