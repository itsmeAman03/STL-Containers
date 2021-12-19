#include<iostream>
#include<queue>
using namespace std; 

int main(){
    queue<int> q;
    int n;
    cin>>n;

    // innserting element
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        q.push(element);    // O(1)
    }

    //traversing

    while(!q.empty()){
        cout<<q.front()<<" ";  // O(1)
        q.pop();             // O(1)
    }
    
    return 0;
}