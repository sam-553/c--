
// #include<iostream>
// #include<string>
// using namespace std;
// class Teacher{
//     public:
// string name;
// int age;
// string* deptptr;

// Teacher(string name,int age,string dept){
// this->name=name;
// this->age=age;
// deptptr=new string;
// *deptptr=dept;

// }
// Teacher(Teacher &t){
//     name=t.name;
//     age=t.age;
//     deptptr=new string;
//     *deptptr=*(t.deptptr);
// }
// void getinfo(){
//     cout<<"name:"<<name<<endl;
//     cout<<"age:"<<age<<endl;
//     cout<<"dept:"<<*deptptr<<endl;

// }
// };
// int main(){
//     Teacher t1("hakeem",20,"ME");
//     t1.getinfo();
//     Teacher t2(t1);
//    *( t2.deptptr)="CSE";
//     cout<<endl;
//     t2.getinfo();
//     cout<<endl;
//     t1.getinfo();

// }

// #include<iostream>
// #include<string>
// using namespace std;
// class student{
//     private:
//      int id;
//     public:
//     string name,age,dept;
//     double* cgpaptr;

//     student(int id,string name,string age,string dept,double cgpa){
//         this->name=name;
//         this->age=age;
//         this->dept=dept;
//         this->id=id;
//         cgpaptr=new double;
//         *cgpaptr=cgpa;

      

//     }
//     student(student &s){
//         name=s.name;
//         age=s.age;
//         dept=s.dept;
//         id=s.id;
//         cgpaptr=new double;
//         *cgpaptr=*(s.cgpaptr);
//     }
//     void display(){
//         cout<<"name:"<<name<<endl;
//         cout<<"age:"<<age<<endl;
//         cout<<"dept:"<<dept<<endl;
//         cout<<"id:"<<id<<endl;
//         cout<<"cgpa:"<<*cgpaptr<<endl;
//     }
   
// };
// int main(){
//     student s1(101,"sanjay","21","CSE",9.2);
//    student s2(s1);
  
//     s1.display();
//       *(s2.cgpaptr)=8.5;
//       cout<<endl;
//     s1.display();
//      cout<<endl;
//     s2.display();

// }


#include<iostream>
#include<string>
using namespace std;
class animal{
    public:
    string* nameptr;
    string type;

    animal(string name,string type){
        nameptr=new string;
      *nameptr=name;
      this->type=type;
    }
    animal(animal &a){
        type=a.type;
        nameptr=new string;
        *nameptr=*(a.nameptr);

    }
    void getinfo(){
    cout<<"name:"<<*nameptr<<endl;
    cout<<"type:"<<type<<endl;
    }

};
int main(){
    animal a1("jacky","dog");
    animal a2(a1);
     a1.getinfo();
    *(a2.nameptr)="jack";
    cout<<endl;
    a1.getinfo();
    cout<<endl;
    a2.getinfo();
    
}
















