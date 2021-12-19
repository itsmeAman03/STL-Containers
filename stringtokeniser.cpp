#include<iostream>
#include<cstring>
using namespace std; 

int main(){
    
    char s[100]="today is a good day";  

    char* ptr=strtok(s," ");
    cout<<ptr<<endl;
    
    // ptr=strtok(s," ");
    // cout<<ptr<<endl;

    // to get next token strtok(NULL," ")
    //by using NULL it maintain state of string internally

    ptr=strtok(NULL," ");
    cout<<ptr<<endl;

    ptr=strtok(NULL," ");
    cout<<ptr<<endl;




    return 0;
}