#include <iostream>
#include <bits/stdc++.h>
using namespace std;


typedef class student{
    private:
    char *name = new char[20];

    public:
    int rollno;
    int age;
    
    

    void setname(char name[]){
        strcpy(this->name,name);
    }
    void getname(){
       cout<<this->name<<endl;
    }
    void print(){
        //cout<<"name->"<<this->name<<endl;
        cout<<"roll no -> "<<this->rollno<<endl;
        cout<<"age ->"<<this->age<<endl;
    }
}stu;

class teachers: public stu{
 public :
//  char *gender = new char[20];

int srno;

  

};
int main()
{
    // stu Tilak;
    // Tilak.setname("Tilak");
    teachers manoj;
   


cout<<manoj.srno<<endl;
cout<<manoj.rollno<<endl;


// strcpy(te->gender,"male");

// cout<<"the gender is := "<<te->gender<<endl;


    return 0;
}