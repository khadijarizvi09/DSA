#include <iostream>
#include<vector>
using namespace std;
int main(){
    int v,E;
    cout<<"How many vertices in the graph?";
    cin>>v;
    cout<<"How many edges in the graph";
    cin>>E;
    int M[v][E]={0};
    int a,b;
    for(int i = 1 ; i<v ;i++)
    {
    cin>>a>>b;
    for(int j = 1 ; j<v ; j++)
     {
      M[a][b] = 1;
      M[b][a] = 1;
     }
    }
    for(int i = 1 ; i<=v ; i++)
    {
        for(int j = 1 ; j<=v ; j++)
        {
            cout<<M[i][j]<<" ";
        }
        cout<<endl;
    }

    }