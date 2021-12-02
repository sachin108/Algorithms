//  not efficient
#include "iostream"
using namespace std;
int gridTravel(int x, int y){
    if(x==1 && y==1)
        return 1;
    if(x==0 || y==0)
        return 0;
    return gridTravel(x-1, y)+gridTravel(x, y-1);
}
int main(int argc, char const *argv[])
{
    int x,y;
    cin>>x>>y;
    cout<<gridTravel(x,y);
    return 0;
}
