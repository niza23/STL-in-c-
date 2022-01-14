#include<iostream>
#include<list>

using namespace std;

int main()
{
    list<int>l;

    l.push_back(3);
    l.push_back(4);
    l.push_back(2);
    l.push_back(2);

    for(int i:l)
    {
        cout<<"elements are->"<<i<<endl;
    }

    //declaration
    list<int>n(5,100);
    for(int i:n)
    {
        cout<<"elements are->"<<i<<endl;
    }

    //cout<<"element at 1 index->"<<l.at(1)<<endl; not in list

    cout<<"element at front->"<<l.front()<<endl;

    cout<<"element at back->"<<l.back()<<endl;

    


}