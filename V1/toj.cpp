#include "simpcon.h"
#define O 'O'
#define X 'X'
#define E ' '
#define JACK_1 "You Suck!"
#define JACK_2 "Son of a Monkey!"
#define JACK_3 "You A$$hole!"
#define JACK_4 "F-U Man!"
#define JACK_5 "Piss off!"
#define JACK_6 "I'm pissed!"
#define JACK_7 "I'm gonna kick your a$$!"
#define JACK_8 "Kiss my a$$"
#define JACK_9 "Get outta my mind!"

char board[10]={E,E,E,E,E,E,E,E,E,E};
void DrawBoard();
void Player1Turn();
void Player2Turn();
void CPUTurn();
int CheckWin();

int main(int argc, char *argv[])
{
    Program("Tick-Off-Jack By JincS");
    int play;
    SetColor(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"                         ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n                         ³       ";
    SetColor(FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"Tick-Off-Jack";
    SetColor(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"       ³\n                         ³  ";
    SetColor(FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"A Variation Of The Game";
    SetColor(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"  ³\n                         ³        ";
    SetColor(FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"Tic-Tac-Toe";
    SetColor(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"        ³\n                         ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´\n                         ³  ";
    SetColor(FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"Copyright (c)2005 JincS";
    SetColor(FOREGROUND_RED|FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"  ³\n                         ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ"<<endl;
    SetColor(FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"Choose Play Style:"<<endl;
    SetColor(FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"\t1.) HMN vs CPU"<<endl;
    SetColor(FOREGROUND_BLUE|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"\t2.) HMN vs HMN"<<endl;
    SetColor(FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"\t3.) CPU vs HMN"<<endl;
    SetColor(FOREGROUND_BLUE|FOREGROUND_GREEN|FOREGROUND_INTENSITY|BACKGROUND_INTENSITY);cout<<"\t4.) Quit"<<endl;
    SetColor(FOREGROUND_RED|FOREGROUND_INTENSITY);cout<<"\t";cin>>play;
    if(play==1)
    {
        for(int i=0;i=8;i++)
        {
            DrawBoard();
            Player1Turn();
            if(CheckWin()==0)
            {
                DrawBoard();
                CPUTurn();
                if(CheckWin()!=0){return 0;}
            }else{return 0;}
        }
    }
    if(play==2)
    {
        for(int i=0;i=8;i++)
        {
            DrawBoard();
            Player1Turn();
            if(CheckWin()==0)
            {
                DrawBoard();
                Player2Turn();
                if(CheckWin()!=0){return 0;}
            }else{return 0;}
        }
    }
    if(play==3)
    {
        for(int i=0;i=8;i++)
        {
            DrawBoard();
            CPUTurn();
            if(CheckWin()==0)
            {
                DrawBoard();
                Player1Turn();
                if(CheckWin()!=0){return 0;}
            }else{return 0;}
        }
    }
    if(play==4){cout<<"\tThanks for Playing!"<<endl;Delay(1000);return 0;}
    else{cout<<"\tInvalid Choice"<<endl;Delay(1000);return 0;}
    return 0;
}

void DrawBoard()
{
    system("CLS");
    printf("ÚÄÄÄÂÄÄÄÂÄÄÄ¿\n");
    printf("³   ³   ³   ³\n");
    printf("³ %c ³ %c ³ %c ³\n", board[7], board[8], board[9]);
    printf("³   ³   ³   ³\n");
    printf("ÃÄÄÄÅÄÄÄÅÄÄÄ´\n");
    printf("³   ³   ³   ³\n");
    printf("³ %c ³ %c ³ %c ³\n", board[4], board[5], board[6]);
    printf("³   ³   ³   ³\n");
    printf("ÃÄÄÄÅÄÄÄÅÄÄÄ´\n");
    printf("³   ³   ³   ³\n");
    printf("³ %c ³ %c ³ %c ³\n", board[1], board[2], board[3]);
    printf("³   ³   ³   ³\n");
    printf("ÀÄÄÄÁÄÄÄÁÄÄÄÙ\n");
    GotoXY(0,13);
}

void Player1Turn()
{
    int key;
    GotoXY(0,13);
    cin>>key;
    switch(key)
    {
        case 1:
             if(board[1]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[1]=X;}
        break;
        case 2:
             if(board[2]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[2]=X;}
        break;
        case 3:
             if(board[3]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[3]=X;}
        break;
        case 4:
             if(board[4]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[4]=X;}
        break;
        case 5:
             if(board[5]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[5]=X;}
        break;
        case 6:
             if(board[6]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[6]=X;}
        break;
        case 7:
             if(board[7]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[7]=X;}
        break;
        case 8:
             if(board[8]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[8]=X;}
        break;
        case 9:
             if(board[9]!=E){
             cout<<"That's Already Full!"<<endl;
             Player1Turn();}
             else{board[9]=X;}
        break;
        default:
             cout<<"Not a valid key!"<<endl;
        break;
    }
}

int CheckWin()
{
     if(
     (board[7]==X&&board[8]==X&&board[9]==X)||
     (board[4]==X&&board[5]==X&&board[6]==X)||
     (board[1]==X&&board[2]==X&&board[3]==X)||
     (board[7]==X&&board[5]==X&&board[3]==X)||
     (board[9]==X&&board[5]==X&&board[1]==X)||
     (board[7]==X&&board[4]==X&&board[1]==X)||
     (board[9]==X&&board[6]==X&&board[3]==X)||
     (board[8]==X&&board[5]==X&&board[2]==X)
     )
     {
         cout<<"Player 1 Wins!!!!!"<<endl;
         Delay(1000);
         return 1;
     }
     if(
     (board[7]==O&&board[8]==O&&board[9]==O)||
     (board[4]==O&&board[5]==O&&board[6]==O)||
     (board[1]==O&&board[2]==O&&board[3]==O)||
     (board[7]==O&&board[5]==O&&board[3]==O)||
     (board[9]==O&&board[5]==O&&board[1]==O)||
     (board[7]==O&&board[4]==O&&board[1]==O)||
     (board[9]==O&&board[6]==O&&board[3]==O)||
     (board[8]==O&&board[5]==O&&board[2]==O)
     )
     {
         cout<<"Player 2 Wins!!!!!"<<endl;
         Delay(1000);
         return 2;
     }
     if(
     board[7]!=E&&board[8]!=E&&board[9]!=E&&
     board[4]!=E&&board[5]!=E&&board[2]!=E&&
     board[9]!=E&&board[6]!=E&&board[3]!=E
     )
     {
         cout<<"The Game Was A Draw . . ."<<endl;
         Delay(1000);
         return 3;
     }
     return 0;
}

void CPUTurn()
{
     //check for blocks
     //top line
     if(board[7]==X&&board[8]==X&&board[9]==E){board[9]=O;cout<<JACK_1<<endl;Delay(1000);return;}
     if(board[7]==X&&board[8]==E&&board[9]==X){board[8]=O;cout<<JACK_1<<endl;Delay(1000);return;}
     if(board[7]==E&&board[8]==X&&board[9]==X){board[7]=O;cout<<JACK_1<<endl;Delay(1000);return;}
     //middle line
     if(board[4]==X&&board[5]==X&&board[6]==E){board[6]=O;cout<<JACK_2<<endl;Delay(1000);return;}
     if(board[4]==X&&board[5]==E&&board[6]==X){board[5]=O;cout<<JACK_2<<endl;Delay(1000);return;}
     if(board[4]==E&&board[5]==X&&board[6]==X){board[4]=O;cout<<JACK_2<<endl;Delay(1000);return;}
     //bottom line
     if(board[1]==X&&board[2]==X&&board[3]==E){board[3]=O;cout<<JACK_3<<endl;Delay(1000);return;}
     if(board[1]==X&&board[2]==E&&board[3]==X){board[2]=O;cout<<JACK_3<<endl;Delay(1000);return;}
     if(board[1]==E&&board[2]==X&&board[3]==X){board[1]=O;cout<<JACK_3<<endl;Delay(1000);return;}
     //negative diagnol 
     if(board[7]==X&&board[5]==X&&board[3]==E){board[3]=O;cout<<JACK_4<<endl;Delay(1000);return;}
     if(board[7]==X&&board[5]==E&&board[3]==X){board[5]=O;cout<<JACK_4<<endl;Delay(1000);return;}
     if(board[7]==E&&board[5]==X&&board[3]==X){board[7]=O;cout<<JACK_4<<endl;Delay(1000);return;}
     //positive diagnol
     if(board[9]==X&&board[5]==X&&board[1]==E){board[1]=O;cout<<JACK_5<<endl;Delay(1000);return;}
     if(board[9]==X&&board[5]==E&&board[1]==X){board[5]=O;cout<<JACK_5<<endl;Delay(1000);return;}
     if(board[9]==E&&board[5]==X&&board[1]==X){board[9]=O;cout<<JACK_5<<endl;Delay(1000);return;}
     //left down
     if(board[7]==X&&board[4]==X&&board[1]==E){board[1]=O;cout<<JACK_6<<endl;Delay(1000);return;}
     if(board[7]==X&&board[4]==E&&board[1]==X){board[4]=O;cout<<JACK_6<<endl;Delay(1000);return;}
     if(board[7]==E&&board[4]==X&&board[1]==X){board[7]=O;cout<<JACK_6<<endl;Delay(1000);return;}
     //right down
     if(board[9]==X&&board[6]==X&&board[3]==E){board[3]=O;cout<<JACK_7<<endl;Delay(1000);return;}
     if(board[9]==X&&board[6]==E&&board[3]==X){board[6]=O;cout<<JACK_7<<endl;Delay(1000);return;}
     if(board[9]==E&&board[6]==X&&board[3]==X){board[9]=O;cout<<JACK_7<<endl;Delay(1000);return;}
     //middle down
     if(board[8]==X&&board[5]==X&&board[2]==E){board[2]=O;cout<<JACK_8<<endl;Delay(1000);return;}
     if(board[8]==X&&board[5]==E&&board[2]==X){board[5]=O;cout<<JACK_8<<endl;Delay(1000);return;}
     if(board[8]==E&&board[5]==X&&board[2]==X){board[8]=O;cout<<JACK_8<<endl;Delay(1000);return;}
     //can't find a block?
     if(board[7]==E){board[7]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[4]==E){board[4]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[1]==E){board[1]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[8]==E){board[8]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[5]==E){board[5]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[2]==E){board[2]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[9]==E){board[9]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[6]==E){board[6]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     if(board[3]==E){board[3]=O;cout<<JACK_9<<endl;Delay(1000);return;}
     return;
}

void Player2Turn()
{
    int key;
    GotoXY(0,13);
    cin>>key;
    switch(key)
    {
        case 1:
             if(board[1]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[1]=O;}
        break;
        case 2:
             if(board[2]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[2]=O;}
        break;
        case 3:
             if(board[3]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[3]=O;}
        break;
        case 4:
             if(board[4]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[4]=O;}
        break;
        case 5:
             if(board[5]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[5]=O;}
        break;
        case 6:
             if(board[6]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[6]=O;}
        break;
        case 7:
             if(board[7]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[7]=O;}
        break;
        case 8:
             if(board[8]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[8]=O;}
        break;
        case 9:
             if(board[9]!=E){
             cout<<"That's Already Full!"<<endl;
             Player2Turn();}
             else{board[9]=O;}
        break;
        default:
             cout<<"Not a valid key!"<<endl;
        break;
    }
}
