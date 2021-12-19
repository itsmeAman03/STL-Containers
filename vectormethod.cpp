#include<iostream>
#include<vector>
using namespace std; 

int main(){
    vector<int> v{1,2,3,4,5};
    // add element
    // push back O(1)  for most of the case
    v.push_back(10);

    //pop back ---> remove element
    v.pop_back();

    // insert an element in the middle  ----> O(N)
    v.insert(v.begin()+3,100); // (position,elewnt to add)
    v.insert(v.begin()+3,4,100); // insert as range  (position,no. of times to add tht element,element to add)


    // erase some element from the middle 
    v.erase(v.begin()+2);        // (position)
    v.erase(v.begin()+2,v.begin()+5); // removing element by range ----->> erase(position begin,position last)
    // size
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    // shrink ---> we avaoid this 
    v.resize(18);  // if the size is increasing then more memeory will be allocated 
    cout<<v.capacity()<<endl;

    //remove all element 
    v.clear();  //------------------------>> it doesnt delete thr memory occupied by array
    cout<<v.size()<<endl;

    //empty
    if(v.empty()){ cout<<"vector is empty"<<endl;}


    for(auto x:v)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    v.push_back(10);
    v.push_back(11);
    v.push_back(12);

    cout<<v.front()<<endl;  
    cout<<v.back()<<endl;

    vector<int> d;

    int n;
    cin>>n;
    // here doubling of size occur , to avoid we use reserve function

    d.reserve(100);
   for(int i=0;i<n;i++)
    {   int no;
        cin>>no;
        d.push_back(no);
        cout<<"changing capacity "<<d.capacity()<<endl;
    }
    cout<<d.capacity()<<endl;

     
    return 0;
}