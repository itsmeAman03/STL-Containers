#include<iostream>
#include<set>
using namespace std; 

typedef multiset<int>::iterator It;

int main(){

    //multiset- that can have multiple elements tht have same elements
    //stored in a specific -> stored according to internal comparison objects
    // values once inserted  can`t be modified 
    // associative container -> elements are referred by their value not by the index
    // underlying data structure -> BST

    int a[]={1,2,3,4,5,56,1,2,22,33,4322,1,2,3,5,5,5};

    int n=sizeof(a)/sizeof(a[0]);
    
    //insertion
    multiset<int> m(a,a+n);

  

    //erase  -- 5
    m.erase(5);

    //insert
    m.insert(10);
    m.insert(10);
    m.insert(10);



    //iterate
    for(auto it:m)
    {
        cout<<it<<" ,";
    }
    cout<<endl;
    //how many times an element is occuring
    cout<<" count 1 -> "<<m.count(1)<<endl;
    cout<<" count 3 -> "<<m.count(3)<<endl;
    cout<<" count 5 -> "<<m.count(5)<<endl;

    //find
    auto it=m.find(10);
    cout<<(*it)<<endl;

    //get all element which are equalt 10
    // pair<multiset<int>::iterator>m.equal_range(10);
    pair<It,It>range=m.equal_range(10);  //  --->> for typedef condition

    for(auto it=range.first;it!=range.second;it++){
        cout<<(*it)<<" # ";
    }
    cout<<endl;

    //lower >= and upper bound >
    
    for(auto it=m.lower_bound(10);it!=m.upper_bound(4322);it++){
        cout<<*it<<"--";
    }
    cout<<endl;




    return 0;
}