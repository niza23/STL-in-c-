#include<iostream>
#include<stack>

using namespace std;

int main()
{
    stack<string>s;

    s.push("N");
    s.push("V");
    s.push("Z");

    cout<<"element at top->"<<s.top()<<endl;
    s.pop();
    cout<<"element at top after popping->"<<s.top()<<endl;

    cout<<"size->"<<s.size()<<endl;
     
     cout<<"check if its empty or not->"<<s.empty()<<endl;

    


}