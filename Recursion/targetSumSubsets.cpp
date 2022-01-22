#include<iostream>
#include<vector>
using namespace std;
void printTargetSumSubsets(vector<int> v, int index, string set, int sumOfSet, int target){
    if(index==v.size()){
        if(sumOfSet==target){
            cout<<set<<endl;
        }
        return;
    }    
    printTargetSumSubsets(v, index+1, set+" "+to_string(v[index]), sumOfSet+v[index], target);
    printTargetSumSubsets(v, index+1, set, sumOfSet, target);
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    int n, target;
    cin>>n>>target;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    printTargetSumSubsets(v, 0, "", 0, target);
    return 0;
}
