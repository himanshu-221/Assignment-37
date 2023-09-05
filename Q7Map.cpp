/*Create a map, insert at least 5 pairs of keys and values and print it*/
#include<iostream>
#include<map>
#include<cstring>
using namespace std;
int main()
{
    map<int,string>m;
    pair<int,string> p1;
    p1 = make_pair(1 , "One");
    m.insert(p1);
    m[2] = "Two";
    m.insert({3,"Three"});
    m.insert(pair<int,string>(4,"Four"));
    m[5] = "Five";
    map<int,string> :: iterator x = m.begin();
    for(;x != m.end() ; x++)
    {
        cout<<x->first<<" = "<<x->second<<endl;
    }
    return 0;
}