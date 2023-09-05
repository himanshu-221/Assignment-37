/*Write a c++ program to demonstrate the implementation of multimap*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int , char> m;
    m.insert({10,'T'});
    m.insert(pair<int,char>(3,'t'));
    m.insert({4,'F'});
    m.insert({5,'f'});
    for (auto itr = m.find(3); itr != m.end(); itr++)
    {
        cout << itr->first<< '\t' << itr->second << '\n';
        break;
    }
             
}