#include<iostream>
#include<algorithm>
using namespace std; 

int main(){
    int arr[]={10,20,30,40,40,40,50,60,70};
    int key;
    cin>>key;
    int n = sizeof(arr)/sizeof(arr[0]);

    // search in sorted array

    bool present = binary_search(arr,arr+n,key);
    if(present){
        cout<<"element is present"<<endl;
    }
    else
    {
        cout<<"element is not present"<<endl;
    }

    // to find index of element
    // two method ----> 1. uper bound   2. lower bound

    auto lb=lower_bound(arr,arr+n,key);
    auto lb2=lower_bound(arr,arr+n,41); // this will give address of next element of last 40th  as it gives us value >=key

    cout<<"lower bound of element "<<lb-arr<<endl;
    cout<<"lower bound2 of element "<<lb2-arr<<endl; //------------>> the lb2 will have address of 50 cz   50>=41 hence its true then 


if((lb-arr)==n)
{
      cout<<"element is not present"<<endl;
}
    auto ub=upper_bound(arr,arr+n,key);
    cout<<"upper bound "<<ub-arr<<endl; 


    // to find frequency occurence  of any element
    cout<<ub-lb;

    return 0;
}