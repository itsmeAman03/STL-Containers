#include<iostream>
#include<map>
#include<cstring>
using namespace std; 

// map is self balancing BST
//multiple keys can be inserted

int main(){

    multimap<char,string> m;
    int n;
    cin>>n;

    // insert
    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch;
        cin>>s;
        m.insert(make_pair(ch,s));  // O(logN)
        }

    //iterate

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    //erase

    auto it = m.begin();
    m.erase(it);   // erase by pointer     // O(logN)

    //search

    char x;
    cin>>x;
    auto f = m.find(x);     // O(logN)
    if(f!=m.end()){
        cout<<"present"<<endl;
        cout<<x<<"->"<<f->second;
    }

    //by lower bound
    auto it2= m.lower_bound('b');
    auto it3=m.upper_bound('b');

    //to print range of particular keys
    for(auto it4=it2;it4!=it3;it++){
        cout<<it4->second<<endl;
    }
    


  
    for(auto it=m.begin();it!=m.end();it++)
    {
        cout<<it->first<<"  "<<it->second<<endl;  // cout<<(*it).first<<"  "<<(*it).second<<endl;

    }
    return 0;
}