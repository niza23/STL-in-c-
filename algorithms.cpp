#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    vector<int>v;
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(6);
    v.push_back(5);

    for(int i:v)
    {
        cout<<"elements are->"<<i<<endl;
    }


    vector<int> arr = {10, 15, 20, 25, 30, 35};
     
    // using binary_search to check if 15 exists
    if (binary_search(arr.begin(), arr.end(), 15))
       cout << "15 exists in vector";
    else
       cout << "15 does not exist";
      
    cout << endl;

    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    cout << "The position of 20 using lower_bound "
            " (in single occurrence case) : ";
    cout << lower_bound(arr1.begin(), arr1.end(), 21)
            - arr1.begin();
      
    cout << endl;

    cout << "The position of 20 using upper_bound"
           " (in single occurrence case) : ";
    cout << upper_bound(arr1.begin(), arr1.end(), 25)
            - arr1.begin();


    int a=3;
    int b=4;
    
    cout<<"max value"<<max(a,b)<<endl;
    cout<<"min value"<<min(a,b)<<endl;
    cout<<"swap value";
    swap(a,b);
    cout<<b<<a<<endl;

    cout<<"string values "<<endl;

    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<""<<s<<endl;

    cout<<"vector rotation of 14365"<<endl;

    //vector=14365

    rotate(v.begin(),v.begin()+1,v.end());
     
     for(int i:v)
    {
        cout<<"elements are->"<<i<<endl;
    }

    return 0;
}