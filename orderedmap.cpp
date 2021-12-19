#include<iostream>
#include<map>
#include<cstring>
using namespace std; 

// map is self balancing BST
//multiple keys can`t  be inserted

int main(){

    map<string,int> m;


    //insert
    m.insert(make_pair("mango",30));


    pair<string,int> p;

    p.first= "apple";
    p.second= 33;

    m.insert(p);

    m["banana"]=40;

    //search

    string fruit;
    cin>>fruit;

    // update value of key
    m["mango"]+= 20;  // will add 20 to previous value  (to completely change m[fruit]=20 ------>> this will overwrite the previous value )


    auto it= m.find(fruit);
    if(it!=m.end()){
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<"fruit is not present"<<endl;
    }

    //erase
    m.erase(fruit);



    //another way to find a particular map
    // it stores unique keys only once
    if(m.count(fruit)){
        cout<<"price of "<<fruit<<" is "<<m[fruit]<<endl;
    }
    else{
        cout<<"fruit is not present"<<endl;
    }

    m["lichi"]=100;
    m["guava"]=55;

    //iterate

    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;  // cout<<(*it).first<<"  "<<(*it).second<<endl;
    }

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
  
    return 0;
}