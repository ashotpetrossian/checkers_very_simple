#ifndef GAME_H
#define GAME_H
#include<map>
#include<iterator>
#include<string>
#include<iostream>
#include"board.h"

class Game
{
    private:

    public:
    Board bd;
    
    bool is_validMove_Player1(std::string pos1, std::string pos2)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        if(bd.itr->second == "*" && bd.itr2->second == " ") {return true;}
        else {std::cout<<"wrong move!\n"; return false;}      
    }
    bool is_validMove_Player2(std::string pos1, std::string pos2)
    {
        bd.itr = bd.board_map.find(pos1);
        bd.itr2 = bd.board_map.find(pos2);
        if(bd.itr->second == "o" && bd.itr2->second == " ") {return true;}
        else {std::cout<<"wrong move!\n"; return false;}                  
    }

    void make_move_Player1(std::string pos1, std::string pos2)
    {
        if(is_validMove_Player1(pos1, pos2))
        {  bd.itr->second = " "; bd.itr2->second = "*";  }
    }
    void make_move_Player2(std::string pos1, std::string pos2)
    {
        if(is_validMove_Player2(pos1, pos2))
        {   bd.itr->second = " "; bd.itr2->second = "o";  }
    }

    bool is_valid__forEat_Player1(std::string pos1, std::string pos2, std::string be_eaten)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        bd.eaten_itr = bd.board_map.find(be_eaten);
        if(bd.itr->second == "*" && bd.eaten_itr->second == "o" && bd.itr2->second == " ")
        {return true;} else {return false;}
    }

    bool is_valid_for_double_eat_player1(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        bd.eaten_itr = bd.board_map.find(eaten1);
        bd.eaten_itr2 = bd.board_map.find(eaten2);
        if(bd.itr->second == "*" && bd.itr2->second == " " && bd.eaten_itr->second == "o" && bd.eaten_itr2->second == "o")
        {return true;} else {return false;}
    }

    bool is_valid_tripleEat_player1(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2, std::string eaten3)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        bd.eaten_itr = bd.board_map.find(eaten1);
        bd.eaten_itr2 = bd.board_map.find(eaten2);
        bd.eaten_itr3 = bd.board_map.find(eaten3);
        if(bd.itr->second == "*" && bd.itr2->second == " " && bd.eaten_itr->second == "o" && bd.eaten_itr2->second == "o" && bd.eaten_itr3->second == "o")
        {return true;} else {return false;}
    }

    bool is_valid__forEat_Player2(std::string pos1, std::string pos2, std::string be_eaten)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        bd.eaten_itr = bd.board_map.find(be_eaten);
        if(bd.itr->second == "o" && bd.eaten_itr->second == "*" && bd.itr2->second == " ")
        {return true;} else {return false;}
    }

    bool is_valid_for_double_eat_player2(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        bd.eaten_itr = bd.board_map.find(eaten1);
        bd.eaten_itr2 = bd.board_map.find(eaten2);
        if(bd.itr->second == "o" && bd.itr2->second == " " && bd.eaten_itr->second == "*" && bd.eaten_itr2->second == "*")
        {return true;} else {return false;}
    }

    bool is_valid_tripleEat_player2(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2, std::string eaten3)
    {
        bd.itr = bd.board_map.find(pos1); 
        bd.itr2 = bd.board_map.find(pos2);
        bd.eaten_itr = bd.board_map.find(eaten1);
        bd.eaten_itr2 = bd.board_map.find(eaten2);
        bd.eaten_itr3 = bd.board_map.find(eaten3);
        if(bd.itr->second == "o" && bd.itr2->second == " " && bd.eaten_itr->second == "*" && bd.eaten_itr2->second == "*" && bd.eaten_itr3->second == "*")
        {return true;} else {return false;}
    }

    

    void eat_Player1(std::string pos1, std::string pos2, std::string be_eaten)
    {
        if(is_valid__forEat_Player1(pos1, pos2, be_eaten))
        {
            bd.itr->second = " ";
            bd.itr2->second = "*";
            bd.eaten_itr->second = " ";
        }
    }

    void eat_Player2(std::string pos1, std::string pos2, std::string be_eaten)
    {
        if(is_valid__forEat_Player2(pos1, pos2, be_eaten))
        {
            bd.itr->second = " ";
            bd.itr2->second = "o";
            bd.eaten_itr->second = " ";
        }
    }

    void double_eat_player1(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2)
    {
        if(is_valid_for_double_eat_player1(pos1, pos2, eaten1, eaten2))
        {
            bd.itr->second = " ";
            bd.itr2->second = "*";
            bd.eaten_itr->second = " ";
            bd.eaten_itr2->second = " ";
        }
    }
    void double_eat_player2(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2)
    {
        if(is_valid_for_double_eat_player2(pos1, pos2, eaten1, eaten2))
        {
            bd.itr->second = " ";
            bd.itr2->second = "o";
            bd.eaten_itr->second = " ";
            bd.eaten_itr2->second = " ";
        }
    }
    void triple_eat_player1(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2, std::string eaten3)
    {
        if(is_valid_tripleEat_player1(pos1, pos2, eaten1, eaten2, eaten3))
        {
            bd.itr->second = " ";
            bd.itr2->second = "*";
            bd.eaten_itr->second = " ";
            bd.eaten_itr2->second = " ";
            bd.eaten_itr3->second = " ";
        }
    }
    void triple_eat_player2(std::string pos1, std::string pos2, std::string eaten1, std::string eaten2, std::string eaten3)
    {
        if(is_valid_tripleEat_player2(pos1, pos2, eaten1, eaten2, eaten3))
        {
            bd.itr->second = " ";
            bd.itr2->second = "o";
            bd.eaten_itr->second = " ";
            bd.eaten_itr2->second = " ";
            bd.eaten_itr3->second = " ";
        }
    }   


    void show_board()
    {
        bd.change_board();
        bd.display();
    }
};
#endif