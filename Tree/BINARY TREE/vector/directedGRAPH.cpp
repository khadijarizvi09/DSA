#include <iostream>
#include<vector>
using namespace std;
int main(){
    int v,E;
    cout<<"How many vertices in the graph?";
    cin>>v;
    cout<<"How many edges in the graph";
    cin>>E;
    vector<int>AdjList[v];
    int a ,b ;
    for(int i = 1; i<=E ; i++)
    {
    cout<<"enter the end point of edge"<<i;
       cin>>a>>b;
       AdjList[a].push_back(b);
       cout<<"?";
    }
    for(int i = 1; i<v;i++)
    { 
        for(int j = 1 ;j< AdjList[i].size() ; j++)
        {
            cout<<AdjList[i][j]<<" ";
        }
    }

    
    
    
    
    }