/*. Create a c++ program using multiset and returns an iterator to the theoretical element 
that follows the last element in the multiset –> O(1)*/
#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s = {3,4,6,1,2};
    for(int element : s)
    {
        cout<< element<<" ";
    }
    cout<<endl;
    multiset<int>::iterator x = s.end();
    cout<<*x<<endl;
    return 0;
}