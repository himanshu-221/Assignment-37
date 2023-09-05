/*Using inbuilt function and insert an element to the set container.*/
#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> mySet = {1, 5, 7, 4};
    
    mySet.insert(6);
    set<int>::iterator x;
    
    for (x = mySet.begin(); x!=mySet.end(); x++)
    {
        cout << *x << " ";
    }
    
    return 0;
}
