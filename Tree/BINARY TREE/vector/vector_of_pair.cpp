#include <bits/stdc++.h>
using namespace std;
void vector_print(vector<pair<int,char>> &v)
{ 
  for(int i = 0 ; i<v.size(); i++)
  {
    cout<<v[i].first<<" "<<v[i].second<<endl;
  }
}
int main()
{
    vector <pair<int,char> >v = {{1,'a'},{3,'b'},{4,'c'}};
    vector_print(v);
    return 0;
}