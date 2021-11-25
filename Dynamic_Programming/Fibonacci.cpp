#include<vector>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<int> v;
    int n;
    v.push_back(0);
    v.push_back(1);
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        v.push_back(v.at(i)+v.at(i-1));
    }
    cout<<v.at(v.size()-1);
    return 0;
}
