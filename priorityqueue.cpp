#include<iostream>
#include<queue>
using namespace std; 

/*this is also a type of heap 
we can traverse in increasing or decreasing order*/

int main(){
    priority_queue<int> pq;  // by; max heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    int n;
    cin>>n;

    // innserting element
    for(int i=0;i<n;i++){
        int element;
        cin>>element;
        pq.push(element);    // O(logN)
        pq2.push(element);    // O(logN)

    }

    //traverse

    while(!pq.empty()){      //traverse for max heap
        cout<<pq.top()<<" ";  // O(1)
        pq.pop();             // O(logN)
    }

    cout<<endl;
     while(!pq2.empty()){     // travers for min heap
        cout<<pq2.top()<<" ";  // O(1)
        pq2.pop();             // O(logN)
    }
    
    return 0;
}