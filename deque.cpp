#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int>d;

    d.push_back(1);
    d.push_front(3);

    for(int i:d)
    {
        cout<<"elements are->"<<i<<endl;
    }

    cout<<"element at 1 index->"<<d.at(1)<<endl;

    cout<<"element at front->"<<d.front()<<endl;

    cout<<"element at back->"<<d.back()<<endl;

    cout<<d.empty()<<endl; //returns true or false

    d.erase(d.begin(),d.begin()+1); //delete in range

    for(int i:d)
    {
        cout<<"elements are->"<<i<<endl;
    }




    return 0;
}