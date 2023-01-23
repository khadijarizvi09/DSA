#include<iostream>
#include <vector>
using namespace std;
vector<int> visited ;
void dfs_visited(int i ,vector<int> AdjList[])
{
    cout<<i;
    visited[i] = 1;
    for(int j =0 ; j<AdjList[i].size(); j++)
    {
        if(visited[AdjList[i][j]] == 0)
        dfs_visited(j ,AdjList);
    }
}
void dfs(vector<int> AdjList[] , int v)
{
 vector <int> predecessor(v,-1);
 for(int i =0 ; i<v; i++)
 {
    if (visited[i] == 0){
        dfs_visited(i,AdjList);
    }
 }
}
int main(){
    int v,E;
    cout<<"How many vertices in the graph?";
    cin>>v;
    vector<int>AdjList[v];
    int a ,b ;
    for(int i = 0; i<v ; i++)
    {
       cout<<i<<":";
       cin>>a>>b;
       AdjList[a].push_back(b);
    }
    for(int i = 0 ; i<v;i++)
    {
        for(int j = 0;j<AdjList[i].size();j++)
        {
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    
    
    }
    dfs(AdjList,v);
}