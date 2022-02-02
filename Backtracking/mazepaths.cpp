#include<iostream>
#include<string>
using namespace std;
void uniquePaths(int destinationCol, int destinationRow , int rows, int columns, string path);
int main(int argc, char const *argv[])
{
    int rows, columns;
    cin>>rows>>columns;
    int destinationCol=columns-1, destinationRow=rows-1;
    
    uniquePaths(destinationCol, destinationRow, 0, 0, "");
    return 0;
}
void uniquePaths(int destinationCol, int destinationRow , int rows, int columns, string path){
    if(destinationCol==columns && destinationRow==rows){
        cout<<path<<endl;
        return;
    }
    if(rows<destinationRow)
        uniquePaths(destinationCol, destinationRow, rows+1, columns, path+"h");

    if(columns<destinationCol)
        uniquePaths(destinationCol, destinationRow, rows, columns+1, path+"v");
}
