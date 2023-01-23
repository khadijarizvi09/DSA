#include<iostream>
#include <vector>
using namespace std;
int main(){
vector<int> v;
v.push_back(1);
v.push_back(3);
v.push_back(2);
cout<<endl<<"no of element "<<v.size();
for(auto i:v)
   cout<<endl<<i;
//v.pop_back();
//cout<<endl;

for(int i = 0;i<v.size();i++)
{
    cout<<endl<<" "<<v[i];
}
/**********************************************/
//PAIR OF PAIR
vector<pair<int , int>>s;
s.push_back(make_pair(1234,98));  //v[0].first
s.push_back(make_pair(8734,98));
s.push_back(make_pair(9134,98));
s.push_back(make_pair(1634,98));
for(int i = 0;i<s.size();i++)
{
    cout<<endl<<" "<<s[i].first;
    cout<<","<<s[i].second<<endl;
}
/**********************************************/
}
