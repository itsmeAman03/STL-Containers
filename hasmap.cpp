//hasmap <student,int >
//          ^
//          |
//      custom key ---> 1. hash fun   2. s1==s2

#include<iostream>
#include<cstring>
#include<unordered_map>
using namespace std;

class student {
    public:
    string firstname;
    string lastname;
    string rollno;

    student(string f,string l,string r){
        firstname=f;
        lastname=l;
        rollno=r;
    }

    bool operator==(const student &d)const{
        return rollno==d.rollno?true:false;
    }
};

class hashfn{
        public:
        size_t operator()(const student &s)const{
            return s.firstname.length() + s.lastname.length();
        }
};

int main(){

    unordered_map<student,int,hashfn> student_map;
    student s1("prateek","kumar","010");
    student s2("aman","kumar","023");
    student s3("rahul","singh","033");
    student s4("shiv","khera","044");


    //add student - marks to hasmap
    student_map[s1]=100;
    student_map[s2]=120;
    student_map[s3]=10;
    student_map[s4]=50;

    //iterate overall student;
    for(auto s:student_map){
        cout<<s.first.firstname<<" "<<s.first.rollno<<endl<< "marks "<<s.second<<endl;
    }


}