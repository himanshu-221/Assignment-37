/* Find the total number of elements of the set container.*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    set<int>s;
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(8);
    cout<<s.size()<<endl;
    return 0;
}