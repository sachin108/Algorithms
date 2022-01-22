#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<string> getMazePath(int sr, int sc, int dr, int dc){
    if(1){

    }
    vector<string> hpaths=getMazePath(sr, sc+1, dr, dc);
    vector<string> vpaths=getMazePath(sr+1, sc, dr, dc);
    vector<string> paths;
    for(string i:hpaths){
        paths.push_back("h"+i);
    }
    for(string i:vpaths){
        paths.push_back("v"+i);
    }
    return paths;
}
/*
    sr - source row
    sc - source column
    dr - destinantion row
    dc - destinantion column
*/
int main(int argc, char const *argv[])
{
    int rows, columns;
    cin>>rows>>columns;
    return 0;
}
