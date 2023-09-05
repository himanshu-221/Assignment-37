/*Implement different operations on priority queue .i.e. adding element, removing element, 
size of priority queue, and print it.*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;     //Max heap priority Queue
    pq.push(10);
    pq.push(6);
    pq.push(4);
    pq.push(7);
    //pq.pop();
    pq.push(8);
    pq.push(9);
    cout<<"Size of queue = ";
    
    cout<<pq.size()<<"\nelements"<<endl;
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<"Size of queue\n";
    
    cout<<pq.size();
    return 0;
}
