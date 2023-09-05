/*Write a c++ program to demonstrate functionality of unordered_map*/
#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std;
int main()
{
    unordered_map<string,int> umap;
    //inserting key and values using [] operator;
    umap["Thirty"]=30;
    umap["Ten"]=10;
    umap["Twenty"]=20;
    for(auto x : umap)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}