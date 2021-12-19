#include<iostream>
#include<algorithm>
using namespace std; 

int main(){

    int arr[]={3,10,11,9,100,12,15};
    int key;
    cin>>key;
    int n = sizeof(arr)/sizeof(arr[0]);

    auto it=find(arr,arr+n,key);
     cout<<"adress of element foundd"<<it<<endl; //------------------------>>>>> it will give address at which out element is found
    cout<<"index at which element is found  "<<(it-arr);
    return 0;
}