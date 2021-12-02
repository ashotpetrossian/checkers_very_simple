#include<iostream>
#include<string>
#include"board.h"
#include"game.h"

void play()
{
    Game gm;

    std::cout<<"Hello and welcome to checkers, worse then chess but i tak soydet!\n";
    std::string player1;
    std::string player2;
    std::cout<<"Player1 name: ";
    std::getline(std::cin, player1);
    std::cout<<"Player2 name: ";
    std::getline(std::cin, player2);
    std::cout<<"Players do moves after each other, I supppose you know the rules\n"
        <<" as this game is like the game in the real world where you can do mistake"
        <<" and put the piece in the wrong place..."
        <<" so the first input is the localization of the piece your want to move (a3)"
        <<" and the squre where to you want to move, for eating the pieces you'll"
        <<" see some instructions.. have a fun!"<<std::endl;  
    std::cout<<player1<<" starts the game\n";
    gm.show_board();
    while(!gm.bd.black_won() || !gm.bd.white_won())
    {
        std::cout<<player1<<", do you want to move or to eat [move]/[eat]?\n";
        std::string move_or_eat;
        std::getline(std::cin, move_or_eat);
        if(move_or_eat == "move")
        {
            std::string square1, square2;
            std::cout<<player1<<" set two squares to move the piece: ";
            std::getline(std::cin, square1);std::getline(std::cin, square2);
            gm.make_move_Player1(square1, square2);
            gm.show_board();
        }
        if(move_or_eat == "eat")
        {
            std::string eat_count;
            std::cout<<"How many pieces do you want to eat: ";
            std::getline(std::cin, eat_count);
            if(eat_count == "1")
            { 
                std::cout<<"Select the piece for eat, then set the square"
                <<" you'll appear after eating, then the square you want to eat.\n";
                std::cout<<"from: ";std::string square1;std::getline(std::cin, square1);
                std::cout<<"to: ";std::string square2; std::getline(std::cin, square2);
                std::cout<<"piece you want to eat\n";
                std::string eat_piece;std::getline(std::cin, eat_piece);
                gm.eat_Player1(square1, square2, eat_piece);
                gm.show_board();
            }
            else if(eat_count == "2")
            {
                std::string square1, square2; std::string eat_piece, eat_piece2;
                std::cout<<"Select the piece for eat, then set the square"
                <<" you'll appear after eating, then the squares you want to eat.\n";
                std::cout<<"from: "; std::getline(std::cin, square1);
                std::cout<<"to: "; std::getline(std::cin, square2);
                std::cout<<"piece you want to eat 1: "; std::getline(std::cin, eat_piece);
                std::cout<<"piece you want to eat 2: ";std::getline(std::cin, eat_piece2);
                gm.double_eat_player1(square1, square2, eat_piece, eat_piece2);
                gm.show_board();
            }
            else if(eat_count == "3")
            {
                std::string square1, square2; std::string eat_piece, eat_piece2, eat_piece3;
                std::cout<<"Select the piece for eat, then set the square"
                <<" you'll appear after eating, then the squares you want to eat.\n";
                std::cout<<"form: ";std::getline(std::cin, square1);
                std::cout<<"to: ";std::getline(std::cin, square2);
                std::cout<<"piece you want to eat 1: ";std::getline(std::cin, eat_piece);
                std::cout<<"piece you want to eat 2: ";std::getline(std::cin, eat_piece2);
                std::cout<<"piece you want to eat 3: ";std::getline(std::cin, eat_piece3);
                gm.triple_eat_player1(square1, square2, eat_piece, eat_piece2, eat_piece3);
                gm.show_board();
            }
        }
        if(!gm.bd.black_won() || !gm.bd.white_won())
        {
            std::cout<<player2<<", do you want to move or to eat [move]/[eat]?\n";
            std::getline(std::cin, move_or_eat);
            if(move_or_eat == "move")
            {
                std::string square1, square2;
                std::cout<<player2<<" set two squares to move the piece: ";
                std::getline(std::cin, square1);std::getline(std::cin, square2);
                gm.make_move_Player2(square1, square2);
                gm.show_board();
            }
            if(move_or_eat == "eat")
            {
                std::string eat_count;
                std::cout<<"How many pieces do you want to eat: ";
                std::getline(std::cin, eat_count);
                if(eat_count == "1")
                {
                    std::string square1, square2; std::string eat_piece; 
                    std::cout<<"Select the piece for eat, then set the square"
                    <<" you'll appear after eating, then the square you want to eat.\n";
                    std::cout<<"from: ";std::getline(std::cin, square1);
                    std::cout<<"to: ";std::getline(std::cin, square2);
                    std::cout<<"piece you want to eat: ";std::getline(std::cin, eat_piece);
                    gm.eat_Player2(square1, square2, eat_piece);
                    gm.show_board();
                }
                else if(eat_count == "2")
                {
                    std::string square1, square2; std::string eat_piece, eat_piece2;
                    std::cout<<"Select the piece for eat, then set the square"
                    <<" you'll appear after eating, then the squares you want to eat.\n";
                    std::cout<<"from: "; std::getline(std::cin, square1);
                    std::cout<<"to: "; std::getline(std::cin, square2);
                    std::cout<<"piece you want to eat 1: "; std::getline(std::cin, eat_piece);
                    std::cout<<"piece you want to eat 2: ";std::getline(std::cin, eat_piece2);
                    gm.double_eat_player2(square1, square2, eat_piece, eat_piece2);
                    gm.show_board();
                }
                else if(eat_count == "3")
                {
                    std::string square1, square2; std::string eat_piece, eat_piece2, eat_piece3;
                    std::cout<<"Select the piece for eat, then set the square"
                    <<" you'll appear after eating, then the squares you want to eat.\n";
                    std::cout<<"form: ";std::getline(std::cin, square1);
                    std::cout<<"to: ";std::getline(std::cin, square2);
                    std::cout<<"piece you want to eat 1: ";std::getline(std::cin, eat_piece);
                    std::cout<<"piece you want to eat 2: ";std::getline(std::cin, eat_piece2);
                    std::cout<<"piece you want to eat 3: ";std::getline(std::cin, eat_piece3);
                    gm.triple_eat_player2(square1, square2, eat_piece, eat_piece2, eat_piece3);
                    gm.show_board();
                }
        }
        }
    }
    std::cout<<"\nGame over\n";
}

int main()
{
    play();
    return 0;
}