#include<iostream>       //This is the headerfooter library used for input and output operations.
#include<cstdlib>        //This is the headerfooter library used for genrate random numbers srand() and rand().. rand() used for 
//genrate random numbers between any specific limit for computer, rand() genrate same numbers if we don't used srand() it keep sequence to the rand() numbers.
#include<ctime>         //This is the headerfooter library used for control time when programme runs ,it generally used in games currently control time.
#include<windows.h>     //This is the headerfooter library used for short pause when a player player their turn and short pause reveal the other player turn .
using namespace std;    // it is used for space between the name cout, cin and string .



char getRandomChoice(){     // we create this function  to genrate random number.
    int randNum = rand() % 3;    // we set the limit of the random number is 3 .
    if(randNum == 0) return 'r';  // if rand is equal to 0 return char and so on.
    if(randNum == 1) return 'p';  
    return 's';
}

string choiceToWord(char choice){      //we use string to change char to string mean 'r' is a Rock and so on . 
    if(choice == 'r') return "Rock✊ ";   // In all these we use (if condition) to logic and decision base.
    if(choice == 'p') return "Paper🖐️";
    if(choice == 's') return "Scissors ✂️";
    return "Invalid";
}

int getResult(char p1, char p2){    // we use this function to get the result of the game, Who player win!
    if(p1 == p2)return 0;             // if both are same it is tie. 

    if((p1 == 'r' && p2 == 's')||(p1 == 's' && p2 == 'p')|| (p1 == 'p' && p2 == 'r'))  //if both are different the player one winter or second.
    return 1;
    return 2;
}

int main (){             // This is the main function which run all the programme.
    srand(time(0));       // we use srand control the sequence of the randdom numbers and time to control the currently time of the game like when radom number selection it is beneficial for the game.
    int mode, p1Score = 0, p2Score = 0, ties = 0;  // it is the variable decalaration  we use variables like mode, p1 ,p2 and ties.
    char playAgain;    // and char playAgain  .  these all variables are used in the whole game.

  // For note:  we use for loop when we want to run any thing in multiples times and while loop use when we want to run anything when condition is true and use do-While loop  when we want to run anything in just one time .
  // so in this game we use do-while loop because we want when player select game mode it run just one time and break ,for the seletion of game mode we use it.
 // and for the whole game run it on the base of do while loop.
  do{
    cout<<"\n Start the Game\n";                   //This is the dispaly of these game menue.
    cout<<"Rock ✊, Paper 🖐️ ,Scissor✂️\n";                                                                    
    cout<<"1. Player vs Player\n";
    cout<<"2. Player vs Computer\n";
    cout<<"3. Computer vs Computer\n";
    cout<<"Choose game mode(1 - 3):";
    cin>>mode;                                      //output of the mode when player enter their mode .
                                               
    char p1,p2;                                    // in game we have a character p1 and p2.

    if(mode == 1){                                // we use (if condition) for decision making .
        cout<<"Player 1 (r/p/s):";
        cin>>p1;
        cout<<choiceToWord(p1)<<endl;
        cout<<"Player 2 (r/p/s):";
        cin>>p2;
        cout<<choiceToWord(p2)<<endl;
    } else if (mode == 2) {
        cout<<"Player (r/s/p):";
        cin>>p1;
        cout<<choiceToWord(p1)<<endl;
        cout<<"Computer is choosing";
        Sleep(500); cout<<".";Sleep(500);cout<<"."; Sleep(500); cout<<".\n";   // we use Sleep(500) for the short pause between player turn and a computer turn.
        p2 = getRandomChoice();                                  // we use the function of getRandomChoice which declare before main . used for computer get number randomly.
        cout<<"Computer chose: " <<choiceToWord(p2)<<endl;       //And choiceToWord function to convert char to string.
    } else if(mode == 3){
        cout<<"Computer 1 is choosing";
        Sleep(500); cout<<"."; Sleep(500); cout<<"."; Sleep(500); cout<<".\n";
        p1 = getRandomChoice();
        cout<<"Computer 1 chose: " <<choiceToWord(p1)<<endl;

        cout<<"Computer 2 is choosing";
        Sleep(500); cout<<"."; Sleep(500); cout<<".";Sleep(500); cout<<".\n";
        p2 = getRandomChoice();
        cout<<"Computer 2 chose: " <<choiceToWord(p2)<<endl;
    } else{
        cout<<"Invalid move.\n";
        continue;
    }

    int result = getResult(p1,p2);         //This is the get result function which we decalre besfore main and implement there.
    if(result == 0){                       // to collect the score of the palyers.
        cout<<"It's a tie!\n";
        ties++;
    } else if( result == 1 ){
        cout<<"Player 1 wins!\n";
        p1Score++;
    } else{
        cout<<"Player 2 wins! \n";
        p2Score++;
    }

    cout<<"\nScoreBoard:";                   //Dispaly the Score Board  which player get Scores.
    cout<<"\nPlayer 1:" << p1Score;
    cout<<"\nPlayer 2:" << p2Score;
    cout<<"\n Ties:" << ties <<endl;

    cout<<"\nPlay again? (Y/n):";             // this is use when game end  dispaly message play again .if yes play agin and no not play again.
    cin.ignore();
    cin>>playAgain;
  } while(playAgain == 'Y' || playAgain == 'y');

  cout<<"\nThanks for Playing! \n";   // Show Message Thanks for Playing.
  return 0;



}
