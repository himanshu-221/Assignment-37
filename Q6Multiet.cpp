/*Create a c++ program using multiset and returns an iterator to the first element in the 
multiset –> O(1)*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s = {3,0,04,6,1,2,9,7,1,7,0};
    for(int element : s)
    {
        cout<< element<<" ";
    }
    cout<<endl;
    multiset<int>::iterator x = s.begin();
    cout<<*x<<endl;
    return 0;
}