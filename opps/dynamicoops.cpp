#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class student{
    private :
    int health;
    public:
    int level;
    
    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health = h;
    }
    
    int setlevel(int l){
        level = l;
    }    
};


int main()
{
    cout<<sizeof(*b)<<endl;
    student Tilak;
    Tilak.sethealth(45);
   
 cout<<"The health is : "<<Tilak.gethealth()<<endl;


   student *a = new student;         // here we create a pointer of name a : 
   a->sethealth(30);                 // private member ki value set karni hai using pointer to -> operator ka istmal karna hi pdaga : 
   a->level = 25;


   cout<<"The health in pointer is : "<<(*a).gethealth()<<endl;             // we can access the value using the * operator : 
   cout<<"the level in the pointer is : "<<a->level<<endl;

   cout<<"size of pointer is : "<<sizeof(a);  // here size of pointer will print :
   cout<<"size of pointer is : "<<sizeof(*a);  // here size of the values in the pointer will print : 



   
    

    return 0;
}