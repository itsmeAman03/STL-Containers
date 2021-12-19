#include<iostream>
#include<list>
using namespace std; 

int main(){

    list<int> l;

    //init
    list<int> l1{1,2,3,4,5};

    //diffrent data type
    list<string> l2{"apple","mango","pineapple","guava"};
    // add from back
    l2.push_back("kiwi");

    //sort
    l2.sort();
    cout<<"after sorting"<<endl;

     for(auto s=l2.begin();s!=l2.end();s++)
    {
        cout<<(*s)<<"->";
    }
    cout<<endl;

    //reverse
    l2.reverse();

    // iterate over list and give output
    cout<<"after reversing list"<<endl;
    for(auto s=l2.begin();s!=l2.end();s++)
    {
        cout<<(*s)<<"->";
    }
    cout<<endl;

    //remove element from front
    l2.pop_front();

    //add from front
    l2.push_front("orange");

    //remove from back
    l2.pop_back();

    //some more function
    l2.push_front("kiwi");
    l2.push_front("pears");

    cout<<endl<<endl;
    for(auto it:l2)
    {
        cout<<it<<"-->";
    }
    cout<<endl;

    //remove every element wich matches
    string f;
    // cin>>f;

    // l2.remove(f);  

    //remove one element at certain position
    //  auto it = l2.begin()+3; //---------->> wont work cz its not a linear memory

     auto it = l2.begin();
     it++;
     it++;

     l2.erase(it); //------------->> 3rd element from beginning will remove
    
    //insert element at certain position
    auto pt=l2.begin();
     pt++;
    l2.insert(pt,"apple juice"); // ------->>>> element added at 2nd posotion frombeginning


    for(auto it:l2)
    {
        cout<<it<<"-->";
    }
    cout<<endl;
    
    return 0;
}