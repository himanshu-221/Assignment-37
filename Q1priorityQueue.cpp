/*Write a c++ program, to demonstrate priority queue.*/
#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> pq;     //Max heap priority Queue
    pq.push(10);
    pq.push(9);
    pq.push(8);
    pq.push(7);
    pq.push(6);
    pq.push(5);
    while(!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    cout<<"Incresing order queue\n";
    priority_queue<int,vector<int>,greater<int>> p; //Min heap priority queue
    p.push(3);
    p.push(5);
    p.push(2);
    p.push(1);
    while(!p.empty())
    {
        cout<<p.top()<<endl;
        p.pop();
    }
    return 0;
}