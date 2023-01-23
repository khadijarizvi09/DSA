#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>k;
    for(int i = 0; i<n ; i++)
    {
        k.push_back(i);
    }
    int i = 0;
    vector<int>v(n+1);
    for( auto i:k)
    {
        v[k[i]]++;
    }
    for( auto j:k)
    {
        if(v[i]>1)
        return i;
    }
    return 0;
}