set<int>s;
    set<int>::iterator x;
    
    s.insert(9);
    s.insert(8);
    //s.insert(x,10);
    
    for(x = s.begin();x!=s.end();x++);
    {
        cout<<*x<<endl;
    }
    return 0;