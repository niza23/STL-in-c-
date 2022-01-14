//vector is dynamic array
// it will create a vector of double size, copy the values of previous vector and dump the previous one

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;
    vector<int> a(5,1);

    cout<<"memory assigned to a vector v->"<<v.capacity()<<endl;
    cout<<"memory assigned to a vector a->"<<a.capacity()<<endl;

    v.push_back(1);
        cout<<"memory assigned to a vector "<<v.capacity()<<endl;
            cout<<"size of a vector "<<v.size()<<endl;
    v.push_back(2);
        cout<<"memory assigned to a vector "<<v.capacity()<<endl;
    v.push_back(4);
        cout<<"memory assigned to a vector "<<v.capacity()<<endl;
         cout<<"size of a vector "<<v.size()<<endl;


    cout<<"element at index 2->"<<v.at(2)<<endl;

    cout<<"element at the front->"<<v.front()<<endl;
    cout<<"element at the back->"<<v.back()<<endl;

    v.pop_back();
    for(int i:v)
    {
        cout<<"element left->"<<i<<endl;
    }


    v.clear();
    
    cout<<"size is->"<<v.size()<<endl;  //after clear, it will become 0
    cout<<"capacity is->"<<v.capacity()<<endl;  //it will remain same

    vector<int> b(5,1);
    for(int i:b)
    {
        cout<<"elements are->"<<i<<endl;
    }

    return 0;

    //copy of vector
    vector<int>last(b);
    
}