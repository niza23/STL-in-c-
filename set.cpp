#include<iostream>
#include<set>

using namespace std;

int main()

{
    set<int>s;

    s.insert(5);
    s.insert(6);
    s.insert(4);
    s.insert(2);
    s.insert(2);

    for(int i:s)
    {
        cout<<"elements are->"<<i<<endl; //does not include repeating elements and store in sorted way
    }
    
    s.erase(s.begin());
    for(int i:s)
    {
        cout<<"elements are->"<<i<<endl; //does not include repeating elements also store in sorted way
    }
cout<<"iterator"<<endl;
    set<int>::iterator it=s.begin();
    it++;


    s.erase(it);

for(int i:s)
    {
        cout<<"elements are->"<<i<<endl; //remove i+1 postion element
    }

    cout<<"no of time, element has appeared->"<<s.count(6); 



}