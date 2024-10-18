#include <iostream>
#include <bits/stdc++.h>
using namespace std;


class animal{
    public:
    int age;
    int weight;
  
    void talk(){
        cout<<"talk -> "<<endl;

    }
    void operator() (){
        cout<<"mai bracket hunn : "<<endl;
    }

    void operator+ (animal &apple){

    }

};

class dog{

public:

void bark(){
   cout<<"Bark -> "<<endl;

}

};



class humans: public animal, public dog{                 // hybrid class which takes the properties of two or more classes : 

public:

void speak(){
    cout<<"speaking -> "<<endl;
}


};


int main()
{
    humans h1;
    h1.bark();
    h1.talk();
     animal a;
     a();

    return 0;
}