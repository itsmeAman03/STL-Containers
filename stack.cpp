#include<iostream>
#include<stack>
using namespace std; 

int main(){
    stack<int> s;
    int n;
    cin>>n;

    // innserting element
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        s.push(element);    // O(1)
    }

    //traversing

    while(!s.empty()){
        cout<<s.top()<<" ";  // O(1)
        s.pop();             // O(1)
    }
    
    return 0;
}