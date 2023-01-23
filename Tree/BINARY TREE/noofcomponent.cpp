#include <iostream>
#include<vector>
using namespace std;
vector<int>visited[];
void dfs_visited(int i ,vector<int> AdjList[],int element)
{
    cout<<i;
    element = element + 1;
    visited[i] = 1;
    for(int j =0 ; j<AdjList[i].size(); j++)
    {
        if(visited[AdjList[i][j]] == 0)
        dfs_visited(j ,visited ,AdjList);
    }
    return element;
}
void dfs(vector<int> AdjList[] , int v )
{
 int count = 0,element;
 vector <int> predecessor(v,-1);
 for(int i =0 ; i<v; i++)

 {
    if (visited[i] == 0){
        element = 0;
        count = count + 1;
     element = dfs_visited(i , visited ,AdjList);
    }
 }
}
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
    cout<<"Ënter the end point of edge"<<i;
       cin>>a>>b;
       AdjList[a].push_back(b);

       AdjList[b].push_back(a);
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