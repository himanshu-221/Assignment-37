/*Create a map, where insert keys and values as string type and integer type respectively 
and print it on the screen.*/
#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    map<string,int>m;
    m.insert({"Ten",10});
    m["one"] = 1;
    m["Two"] = 2;
    m.insert(pair<string,int>("Three",3));
    m.insert({"Four",4});
    m.insert({"Ten",5});
    map<string,int> :: iterator x = m.begin();
    // for(;x != m.end() ; x++)
    // {
    //     cout<<x->first<<" = "<<x->second<<endl;
    // }
    // cout<<"Another way\n";
    for(auto a : m)
    {
        cout<<a.first<<" = "<<a.second<<endl;
    }
    return 0;
}