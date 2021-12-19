#include<iostream>
#include<set>
using namespace std; 

int main(){
    int a[]={1,2,3,4,5,56,1,2,22,33,4322,1,2,3,5,5,5};
    set<int> s;
    int n= sizeof(a)/sizeof(a[0]);

    //insert

    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }

    int e;
    cin>>e;

    auto it=s.find(e);
    if(it!=s.end()){
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }

    //erase
    cout<<"erasing  "<<e<<endl;
    s.erase(e);

    /*
    auto it2=s.find(e);
    s.erase(it);
    */

    //iterate

    for(set<int>::iterator it=s.begin();it!=s.end();it++)
    {
        cout<<(*it)<<" ,";
    }


    return 0;
}