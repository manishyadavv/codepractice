//
// Created by MANISH YADAV on 07/06/20.
//



#include<iostream>
#include<string>
#include "vector"
using namespace std;

static int counter=0;

bool isValidOption(vector<vector<int>>& board,int i , int j,int option)
{
    for(int jj=0;jj<board.size();jj++)
    {
        if(board[i][jj]==option)
        {
            return false;
        }
    }
    for(int ii=0;ii<board.size();ii++)
    {
        if(board[ii][j]==option)
        {
            return false;
        }
    }

    //pehle jo i j aaya hai usska istemaal krte hue
    //3X3 box ke top pr phuch gaye aur fir pura box traverse kr diya
    for(int ii=0;ii<3;ii++)
    {
        for(int jj=0;jj<3;jj++ )
        {
            int row = i / 3 * 3 + ii;
            int col = j / 3 * 3 + jj;
            if(board[row][col]==option)
            {
                return false;
            }

        }
    }


    return true;

}

void solve(vector<vector<int>> board,int i , int j )
{

    if(i==board.size()&&j==0)
    {
        counter++;
        for(int r = 0; r < board.size(); r++){
            for(int c = 0; c < board.size(); c++){
                cout<<board[r][c]<<" ";
            }
            cout<<endl;
        }

        //return;

    }
    else if(j == board.size() - 1){
        if(board[i][j] != 0){
            solve(board, i + 1, 0);
        } else {
            for(int option = 1; option <= 9; option++){
                if(isValidOption(board, i, j, option)){
                    board[i][j] = option;
                    solve(board, i + 1, 0);
                    board[i][j] = 0;
                }
            }
        }
    }

    else {
        if(board[i][j] != 0){
            solve(board, i, j + 1);
        } else {
            for(int option = 1; option <= 9; option++){
                if(isValidOption(board, i, j, option)){
                    board[i][j] = option;
                    solve(board, i, j + 1);
                    board[i][j] = 0;
                }
            }
        }
    }

//    else
//            {
//                if(board[i][j]!=0)
//                {
//                    sodokusolve(board,i,j+1);
//                }
//                else{
//                    for(int option = 1; option <= 9; option++){
//                        if(isValidOption(board, i, j, option)){
//                            board[i][j] = option;
//                            sodokusolve(board, i, j + 1);
//                            board[i][j] = 0;
//                        }
//                    }
//                }
//
//            }



}

int main()
{
    vector<vector<int>> board{
            {3, 0, 6, 5, 0, 8, 4, 0, 0},
            {5, 2, 0, 0, 0, 0, 0, 0, 0},
            {0, 8, 7, 0, 0, 0, 0, 3, 1},
            {0, 0, 3, 0, 1, 0, 0, 8, 0},
            {9, 0, 0, 8, 6, 3, 0, 0, 5},
            {0, 5, 0, 0, 9, 0, 6, 0, 0},
            {1, 3, 0, 0, 0, 0, 2, 5, 0},
            {0, 0, 0, 0, 0, 0, 0, 7, 4},
            {0, 0, 5, 2, 0, 6, 3, 0, 0},
    };

//    for(int r = 0; r < board.size(); r++){
//        for(int c = 0; c < board.size(); c++){
//            cout<<board[r][c]<<" ";
//        }
//        cout<<endl;
//    }
    solve(board,0,0);
     return 0;

}