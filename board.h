#ifndef BOARD_H
#define BOARD_H
#include<iostream>
#include<string>
#include<map>
#include<iterator>
class Board
{
    private:
        const static int SIZE = 18;
        std::string address[SIZE][SIZE];
    public:
    std::map<std::string, std::string>::iterator itr, itr2, eaten_itr, eaten_itr2, eaten_itr3;
    std::map<std::string, std::string> board_map 
    {
        {"a1", "*"},
        {"a2", " "},
        {"a3", "*"},
        {"a4", " "},
        {"a5", " "},
        {"a6", " "},
        {"a7", "o"},
        {"a8", " "},

        {"b1", " "},
        {"b2", "*"},
        {"b3", " "},
        {"b4", " "},
        {"b5", " "},
        {"b6", "o"},
        {"b7", " "},
        {"b8", "o"},

        {"c1", "*"},
        {"c2", " "},
        {"c3", "*"},
        {"c4", " "},
        {"c5", " "},
        {"c6", " "},
        {"c7", "o"},
        {"c8", " "},

        {"d1", " "},
        {"d2", "*"},
        {"d3", " "},
        {"d4", " "},
        {"d5", " "},
        {"d6", "o"},
        {"d7", " "},
        {"d8", "o"},

        {"e1", "*"},
        {"e2", " "},
        {"e3", "*"},
        {"e4", " "},
        {"e5", " "},
        {"e6", " "},
        {"e7", "o"},
        {"e8", " "},

        {"f1", " "},
        {"f2", "*"},
        {"f3", " "},
        {"f4", " "},
        {"f5", " "},
        {"f6", "o"},
        {"f7", " "},
        {"f8", "o"},

        {"g1", "*"},
        {"g2", " "},
        {"g3", "*"},
        {"g4", " "},
        {"g5", " "},
        {"g6", " "},
        {"g7", "o"},
        {"g8", " "},

        {"h1", " "},
        {"h2", "*"},
        {"h3", " "},
        {"h4", " "},
        {"h5", " "},
        {"h6", "o"},
        {"h7", " "},
        {"h8", "o"}
    };
        Board() 
        {
            for (int i = 0; i < SIZE; i += 2)
            {
                for (int j = 0; j < SIZE; j++)
                { address[i][j] = "--"; }                
            }
            for (int j = 1; j < SIZE; j += 2)
            {
                for (int i = 1; i < SIZE - 2; i += 2)
                { address[i][j] = " | ";  }                
            }
            address[1][0] = '8'; address[3][0] = '7'; address[5][0] = '6'; address[7][0] = '5';
            address[9][0] = '4'; address[11][0] = '3'; address[13][0] = '2'; address[15][0] = '1';
            address[17][0] ="    a   b   c   d   e   f   g   h   "; 

            // for(int i = 1, j = 4; j < SIZE; j += 4) {address[i][j] = "o";} 
            // for(int i = 1, j = 2; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 3, j = 2; j < SIZE; j += 4) {address[i][j] = "o";}
            // for(int i = 3, j = 4; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 5, j = 4; j < SIZE; j += 4) {address[i][j] = "o";}
            // for(int i = 5, j = 2; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 7, j = 2; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 7, j = 4; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 9, j = 4; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 9, j = 2; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 11, j = 2; j < SIZE; j += 4) {address[i][j] = "*";} 
            // for(int i = 11, j = 4; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 13, j = 4; j < SIZE; j += 4) {address[i][j] = "*";}
            // for(int i = 13, j = 2; j < SIZE; j += 4) {address[i][j] = " ";}
            // for(int i = 15, j = 2; j < SIZE; j += 4) {address[i][j] = "*";}
            // for(int i = 15, j = 4; j < SIZE; j += 4) {address[i][j] = " ";}
            
            address[15][2] = board_map["a1"];
            address[13][2] = board_map["a2"];
            address[11][2] = board_map["a3"];
            address[9][2] = board_map["a4"];
            address[7][2] = board_map["a5"];
            address[5][2] = board_map["a6"];
            address[3][2] = board_map["a7"];
            address[1][2] = board_map["a8"];

            address[15][4] = board_map["b1"];
            address[13][4] = board_map["b2"];
            address[11][4] = board_map["b3"];
            address[9][4] = board_map["b4"];
            address[7][4] = board_map["b5"];
            address[5][4] = board_map["b6"];
            address[3][4] = board_map["b7"];
            address[1][4] = board_map["b8"];

            address[15][6] = board_map["c1"];
            address[13][6] = board_map["c2"];
            address[11][6] = board_map["c3"];
            address[9][6] = board_map["c4"];
            address[7][6] = board_map["c5"];
            address[5][6] = board_map["c6"];
            address[3][6] = board_map["c7"];
            address[1][6] = board_map["c8"];

            address[15][8] = board_map["d1"];
            address[13][8] = board_map["d2"];
            address[11][8] = board_map["d3"];
            address[9][8] = board_map["d4"];
            address[7][8] = board_map["d5"];
            address[5][8] = board_map["d6"];
            address[3][8] = board_map["d7"];
            address[1][8] = board_map["d8"];

            address[15][10] = board_map["e1"];
            address[13][10] = board_map["e2"];
            address[11][10] = board_map["e3"];
            address[9][10] = board_map["e4"];
            address[7][10] = board_map["e5"];
            address[5][10] = board_map["e6"];
            address[3][10] = board_map["e7"];
            address[1][10] = board_map["e8"];

            address[15][12] = board_map["f1"];
            address[13][12] = board_map["f2"];
            address[11][12] = board_map["f3"];
            address[9][12] = board_map["f4"];
            address[7][12] = board_map["f5"];
            address[5][12] = board_map["f6"];
            address[3][12] = board_map["f7"];
            address[1][12] = board_map["f8"];

            address[15][14] = board_map["g1"];
            address[13][14] = board_map["g2"];
            address[11][14] = board_map["g3"];
            address[9][14] = board_map["g4"];
            address[7][14] = board_map["g5"];
            address[5][14] = board_map["g6"];
            address[3][14] = board_map["g7"];
            address[1][14] = board_map["g8"];

            address[15][16] = board_map["h1"];
            address[13][16] = board_map["h2"];
            address[11][16] = board_map["h3"];
            address[9][16] = board_map["h4"];
            address[7][16] = board_map["h5"];
            address[5][16] = board_map["h6"];
            address[3][16] = board_map["h7"];
            address[1][16] = board_map["h8"];
        
        }

        void change_board()
        {
            address[15][2] = board_map["a1"];
            address[13][2] = board_map["a2"];
            address[11][2] = board_map["a3"];
            address[9][2] = board_map["a4"];
            address[7][2] = board_map["a5"];
            address[5][2] = board_map["a6"];
            address[3][2] = board_map["a7"];
            address[1][2] = board_map["a8"];

            address[15][4] = board_map["b1"];
            address[13][4] = board_map["b2"];
            address[11][4] = board_map["b3"];
            address[9][4] = board_map["b4"];
            address[7][4] = board_map["b5"];
            address[5][4] = board_map["b6"];
            address[3][4] = board_map["b7"];
            address[1][4] = board_map["b8"];

            address[15][6] = board_map["c1"];
            address[13][6] = board_map["c2"];
            address[11][6] = board_map["c3"];
            address[9][6] = board_map["c4"];
            address[7][6] = board_map["c5"];
            address[5][6] = board_map["c6"];
            address[3][6] = board_map["c7"];
            address[1][6] = board_map["c8"];

            address[15][8] = board_map["d1"];
            address[13][8] = board_map["d2"];
            address[11][8] = board_map["d3"];
            address[9][8] = board_map["d4"];
            address[7][8] = board_map["d5"];
            address[5][8] = board_map["d6"];
            address[3][8] = board_map["d7"];
            address[1][8] = board_map["d8"];

            address[15][10] = board_map["e1"];
            address[13][10] = board_map["e2"];
            address[11][10] = board_map["e3"];
            address[9][10] = board_map["e4"];
            address[7][10] = board_map["e5"];
            address[5][10] = board_map["e6"];
            address[3][10] = board_map["e7"];
            address[1][10] = board_map["e8"];

            address[15][12] = board_map["f1"];
            address[13][12] = board_map["f2"];
            address[11][12] = board_map["f3"];
            address[9][12] = board_map["f4"];
            address[7][12] = board_map["f5"];
            address[5][12] = board_map["f6"];
            address[3][12] = board_map["f7"];
            address[1][12] = board_map["f8"];

            address[15][14] = board_map["g1"];
            address[13][14] = board_map["g2"];
            address[11][14] = board_map["g3"];
            address[9][14] = board_map["g4"];
            address[7][14] = board_map["g5"];
            address[5][14] = board_map["g6"];
            address[3][14] = board_map["g7"];
            address[1][14] = board_map["g8"];

            address[15][16] = board_map["h1"];
            address[13][16] = board_map["h2"];
            address[11][16] = board_map["h3"];
            address[9][16] = board_map["h4"];
            address[7][16] = board_map["h5"];
            address[5][16] = board_map["h6"];
            address[3][16] = board_map["h7"];
            address[1][16] = board_map["h8"];
        }

        bool white_won()
        {
            for (int i = 0; i < SIZE; i++)
            {
                for (int j = 0; j < SIZE; j++)
                {
                    if(address[i][j] == "o") {return false;}
                }              
            }   
            return true;  
        }
        bool black_won()
        {
            for (int i = 0; i < SIZE; i++)
            {
                for (int j = 0; j < SIZE; j++)
                {
                    if(address[i][j] == "*") {return false;}
                }              
            }  
            return true;
        }
      

        void display()
        {
            for (int i = 0; i < SIZE; i++)
            {
                for (int j = 0; j < SIZE; j++)
                {
                    std::cout<<address[i][j];
                }
                std::cout<<std::endl;                
            }            
        }
};
#endif