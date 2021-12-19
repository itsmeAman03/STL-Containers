// WAP to input strings and arrange them in lexigrographically order and if there are two string which is sub string of on string then arrange them in length order which has big length will come first

#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std; 


    bool compare(string a,string b){
        if(a.size()<=b.size() && b.substr(0,a.size())==a){
            return false;
        }
        else if(b.size()<=a.size() && a.substr(0,b.size())==b){
            return true;
           
        }
        else{
            return a<b;
        }
     }

int main(){
    string s[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string p;
        cin>>p;
        s[i]=p;
    }

    sort(s,s+n,compare);

    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}