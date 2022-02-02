#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(bool *board, int row, bool columns[], bool diagonals[], bool rdiagonals[], int n, string position){
    if(row==n-1){
        cout<<position<<endl;
        return;
    }
    for(int c=0;c<n;c++){
        if(*((board)+row*n+c)==false && diagonals[row+c]==false && rdiagonals[row-c+n-1]==false){
           *((board)+row*n+c)=true;
           diagonals[row+c]==true;
           rdiagonals[row-c+n-1]==true;
           columns[c]=true;
           solve((bool *)board,row+1, columns, diagonals, rdiagonals, n, position+to_string(row)+"-"+to_string(c)+",");
           *((board)+row*n+c)=false;
           diagonals[row+c]==false;
           rdiagonals[row-c+n-1]==false;
           columns[c]=false;
        }
    }
}
int main(int argc, char const *argv[])
{
    int size_of_board;
    cin>>size_of_board;
    bool board[size_of_board][size_of_board];
    bool columns[size_of_board];
    bool diagonals[(2*size_of_board)-1];
    bool rdiagonals[(2*size_of_board)-1];
    solve((bool *)board, 0, columns, diagonals, rdiagonals, size_of_board, "");
    return 0;
}
