#include<iostream>
#include<vector>
#include<string>
using namespace std; 

int main(){

    //creating vector object

    vector<int> a;
    vector<int> b(5,10); // five iint with value 10 --->  init a vector of zeroes (n,0)
    vector<int> c(b.begin(),b.end());  // copying value from another vector 
    vector<int> d{1,2,3,4,5};

    // iteration of vector

    for(int i=0;i<c.size();i++){  //from loop
        cout<<c[i]<<"--";
    }
    cout<<endl;

    for(auto it=b.begin();it<b.end();it++) // using iterator
    {
        cout<<(*it)<<"__";
    }
    cout<<endl;

    for(auto x:d){                  // for each loop
        cout<<x<<" , ";
    }
    cout<<endl;

    // more funtion of vector
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {   int no;
        cin>>no;
        v.push_back(no);
    }
    for(auto x:v){                  
        cout<<x<<" , ";
    }
    cout<<endl;

    //  understanding at memory lvl what are the diffrence

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;    // size of vector array  ---------->>> 5
    cout<<v.max_size()<<endl;   // max no. of element it can store in worst case


    cout<<d.size()<<endl; // size of vector array   -------------->>> 8  ( if push_back() 5 times called)
    cout<<d.capacity()<<endl;   // max no. of element it can store in worst case
    cout<<d.max_size()<<endl;
    
    return 0;
}