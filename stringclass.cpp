#include<iostream>
#include<string>

using namespace std; 

int main(){

    string s0;
    string s1("hello");
    string s2= "hello world";
    string s3(s2);
    string s4=s3;
    string s5= {'a','b','c','\0'} ;

    cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;

// to check string emplybor not

if(s0.empty())
{
    cout<<"string is empty"<<endl;
}

// to append something in string
  s1.append(" I love c++");
  cout<<s1<<endl;
  s0+="hello hey konnichiwa";
  cout<<s0<<endl;

//remove/erase content from string
cout<<s0.length()<<endl;
s0.erase();
cout<<s0.length()<<endl;

//compare two string

s0="Apple";
s1="Mango";

cout<<s0.compare(s1)<<endl;   // returns an integer value ==0,>0 or <0 

//overloaded operators 
if(s1>s0)
{
    cout<<"s1(Mango) is lexi graphically greater than s0(Apple)"<<endl;
}


// index

string s ="hey its me aman how are you?";
int idx = s.find("aman");
cout<<idx<<endl;

//remove a word from string
 string word="aman";
 int len=word.length();
 s.erase(idx,len+1);
 cout<<s<<endl;

// iterate  over all character
for(int i=0;i<s1.length();i++)
{
    cout<<s1[i]<<":";
}
cout<<endl;

//iteration by begin() and end() ---------------------->> [begin,end)
for(string:: iterator it=s1.begin();it!=s1.end();it++){
    cout<<(*it)<<",";
}
cout<<endl;

//for each loop
for(auto ch:s1)
{
    cout<<ch<<".";
}
cout<<endl;

    return 0;
}