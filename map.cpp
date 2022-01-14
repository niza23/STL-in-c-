#include<iostream>
#include<map>

using namespace std;

int main()
{
    map<int,string>m;
    m[1]="N";
    m[3]="V";
    m[4]="Z";

    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    m.insert({2,"S"});
    cout<<"after insertion"<<endl;

    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    m.erase(3);

    cout<<"after erasing"<<endl;

     for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    m[8]="V";
    m[9]="Z";


    auto it=m.find(4);  //print those element who is equal to  or greater than 4
    for(auto i=it;i!=m.end();i++)
    {
        cout<<""<<(*i).first<<endl;
    }

}