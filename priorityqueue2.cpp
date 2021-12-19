#include<iostream>
#include<queue>
#include<cstring>
using namespace std; 

class person{
    public:
    string name;
    int age;

    person(){

    }
    person(string a,int b): name(a),age(b){
    }

};

class personcompare{
    public:
    bool operator()(person a,person b){
        return a.age<b.age;    // according to age
        //return a.name<b.name ;   // according to name 
    }

};


int main(){
    int n;
    cin>>n;

    priority_queue<person,vector<person>,personcompare> pq;
    priority_queue<person,vector<person>,personcompare> pq1;



    while(n--){
        string name;
        int age;
        cin>>name;
        cin>>age;
        person p(name,age);
        pq.push(p); }

    
    // to find top 3 oldest person in queue--
    // why not sorting ------>> cz  TC = O(NlogN)

    int k = 3;   // desired top 3 otherwise we can take it from user as well

    for(int i=0;i<k;i++){
        person p=pq.top();
        cout<<p.name<<"  "<<p.age<<endl;
        pq.pop();
    
    }

    return 0;
}