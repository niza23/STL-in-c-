#include<iostream>
#include<queue>

using namespace std;

int main()
{
    queue<string>q;

    q.push("N");
    q.push("V");
    q.push("Z");

    cout<<"element at top->"<<q.front()<<endl;
    q.pop();
    cout<<"element at top after popping->"<<q.front()<<endl;

    cout<<"size->"<<q.size()<<endl;

    return 0;
}