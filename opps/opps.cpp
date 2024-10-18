#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class student{
    private: 
         char level;
    public:
        int rollno;
        
        char section;
        student(int rollno){
            cout<<this->rollno<<endl;
            this -> rollno = rollno;
            cout<<"constructor called : "<<endl;
            cout<<this->rollno<<endl;
        }
        student(student& temp){
            this->rollno = temp.rollno;              // paramitarized constructor : 
            this->section = temp.section;
        }
        
        // student(char level,int rollno){
        //    this->level = level;                 
        //    this->rollno = rollno;
        // }

        void print(){
            cout<<this->level<<endl;
            cout<<this->rollno<<endl;           // only print function : 
        }


        char getlevel(){           // getter function used to get the value of private members make it in public : 
            return level;

        }
        void setlevel(char ch){  // setter function used to set or give the value of private members make it in public : 

         level = ch;
        }
        ~student(){
            cout<<"Destructor bhai called : "<<endl;         // destructor which is called in the last of the object : 
        }

       
    };

int main()
{
    // constructor : 
    //student Tilak(12);

    // paramitraized constructor : 
    
    //student ramesh(25);

    //copy constructor : 
    student s(42);
    // s.print();
   
    s.~student();              // explicitely calling of the destructor : 
     student t(s);            // s value copy to t s -> t;
     t.setlevel('A');
     t.print();
    







    // Tilak.rollno = 42; // giving  value : 
  
    // Tilak.section = 'A'; // using dot operator : 
    // cout<<"before level : "<<Tilak.getlevel()<<endl;

    // Tilak.setlevel('A'); // use of setter function : 

    // cout<<"After level : "<<Tilak.getlevel()<<endl;   // use of getter function :
    
    // cout<<Tilak.rollno<<endl; ///printing the rollno. : 

    // cout<<Tilak.section<<endl;  // printing the section : 

    // cout<<"the size of Tilak is  : "<<sizeof(Tilak)<<endl;   // here there is introduction in the concept of padding  :
    //  // padding yani stack ma chalta hai aur isme int ki 4 byte or char ki 1 byte baki ki char 3 byte char ki padding ma chali jayngi : 
    

    return 0;
}