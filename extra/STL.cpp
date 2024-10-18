#include <iostream>

#include<array>
#include<vector>
#include<deque>
#include<list>
#include<queue>
#include<map>
#include<stack>
#include<set>
#include<algorithm>


using namespace std;
void print(vector<int>v);

int main()

{

//     array<int , 5>a;
//     int size = a.size();
//     cout<<"The size of the array is : "<<size<<endl;
//     cout<<"Enter the elements of the array : ";

//     for(int i = 0; i < 5; i++){
//         cin>>a[i];
//     }
//     // for printing :
// for(int i = 0; i < 5; i++){
//         cout<<a[i]<<"\t";
//     }
 
//     cout<<endl<<"the 2nd element is : "<<a.at(2)<<endl;  // To print the elements of the array using the indexes : 
//      cout<<endl<<"the 3rd element is : "<<a.at(3)<<endl;

//      cout<<"Empty or not : "<<a.empty()<<endl;       // To check that an ary is empty or not : it gives 1 when there is something in the array and it will give 0 if  there is something in the array : 
    



//     cout<<"first element : "<<a.front()<<endl;
//     cout<<"last element : "<<a.back()<<endl;




















// Vector in c++ : 

// Defination =  vector can change their capacity according to the requirement they can double their size if the elements are out of range of the vector : 

// vector<int>v;
// int n;
// cout<<"Enter the n : ";
// cin>>n;


// for(int i = 0; i < n; i++ ){            // Taking input in vector :
//     int x;
//     cin>>x;
//     v.push_back(x);

// }

// v.push_back(5);
// v.pop_back();
// for(int i = 0;i < v.size(); i++)
// cout<<v[i]<<endl;

// v.pop_back();
// cout<<"size : "<<v.size()<<endl;

// cout<<"capacity : "<<v.capacity()<<endl; 







// vector<int>v(5,2);                 // creating and initilazing a vector to 2;
// vector<int>s = v;
// s.pop_back();
// s.pop_back();                     //  pop_back function is used to remove one element from the last
// for(int i: s){
//     cout<<i<<" "<<endl;
// }


// vector<int>v;
// int n;
// cout<<"n : ";
// cin>>n;
// for(int i = 0; i < n; i++){
//     int x;
//     cin>>x;
//     v.push_back(x);
// }
// cout<<"size before : "<<v.size()<<endl;
      

//     return 0;
// }

// void check(vector<int>v){
// v.pop_back();
// v.pop_back();
// for(int i : v)
// cout<<i<<"\t";
// cout<<endl;
// cout<<"size after : "<<v.size()<<endl;





vector<pair<int,int>> v;              // pair of vector : 
 v = {{1,2},{2,3},{3,4},{4,5}};        //initilizing the pair vector : 

//for printing :   
 for(int i =0; i < v.size() ;i++){            //printing the pair vector : 
    cout<<v[i].first<<" "<<v[i].second<<endl;              
 }
}
// taking input from user : 

// int n;
//  cout<<"enter n : ";
//  cin>>n;
// for(int i = 0; i < n; i++){
//     int x,y;
//     cout<<"enter the x and y : ";
//     cin>>x>>y;                                    //input the pair elements of the vector : 
//     v.push_back(make_pair(x,y));
// }


// for(int i= 0; i < v.size(); i++){
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }




// vector<int>v[2];
// int n;
// for(int i = 0; i < 2; i++){
 
//     cout<<"Enter  the size of the arr : "<<i;
//     cin>>n;
//     for(int j = 0; j < n; j++){

// int x;
// cout<<"enter the element : ";
// cin>>x;
// v[i].push_back(x);


//     }
// }


// for(int i = 0; i < v.size(); i++){
//     print( v[i]);
// }




// return 0;

// }

// void print(vector<int>v){

// for(int i = 0; i < v.size() ;i++){
//     cout<<v[i]<<"\n";
// }

// cout<<"the second one is start : "<<endl;










/*

//  Deque in STL :

deque<int>d;
// deque ma element add or remove dono trf se ho sakta hai , means from the front side or the back side : 

// Adding element in deque :
d.push_back(2);
d.push_back(3);
d.push_back(4);
d.push_back(5);         //Adding element from back side :

d.push_front(0);        //Adding element from front side : 
d.push_front(14);

// the above statement is used to print all the stl functions :
cout<<"before pop : "<<endl;
for(int i : d){
    cout<<i<<" ";
}cout<<endl;


//removing element from deque : 
d.pop_back();   
d.pop_back();           // removing element from the back side : 
d.pop_front();                                                                  // pop means element delete karna hota hai : 
d.pop_front();          //removing element from the front side : 

cout<<"after pop : "<<endl;
for(int i : d){
    cout<<i<<" ";
}cout<<endl;

// Accessing element :
cout<<"first : "<<d.at(0)<<endl;
cout<<"second : "<<d.at(1)<<endl;            // By using at operator we can access any element by using the index number of the element : 

// printing all elements :
for(int i : d){
    cout<<i<<" ";                           // By this method we can print all the elements in the deque or double ended deque : 
}cout<<endl;                


// accessing the first and the last element : 
cout<<"first : "<<d.front()<<endl;
cout<<"last : "<<d.back()<<endl;


// checking for the empty or not : 
cout<<"empty or not : "<<d.empty()<<endl;     // function return only boolean value (0 for flase 1 for true ). only check if there is element present or not  :

d.push_front(7);
d.push_back(8);

// deleting any element : by using erase function : 
d.erase(d.begin(),d.begin()+1);              // isme hma starting element and last element dena hota hai : 

for(int i : d){
    cout<<i<<" ";
}cout<<endl;

cout<<"size in last : "<<d.size()<<endl;    //for checking the size (size means how many elements are the there and capacity means how much size is allocated to the deque : )


*/





// // Stack in STL : 

// // In stack there is concept of last in first out :
// // jaise ek ke upar ek plate rakhna ke bad phir jab hum plate uthate hai to last vali phala aati hai na bss yahi concept hai :

// //creating a stack : 
// stack<string>s;
// s.push("Tilak");
// s.push("saini");                // isme  push ke sath back ya front nhi lagate kyoki concept last in first out hai : 
// s.push("Alone");



// cout<<s.top()<<endl;
// int n = s.size();               //To print we  have to store the size of the stack in the another variable because hum loop mai pop yani element remove kar rha hai to bar bar size change ho rha hai :
// for(int i = 0; i < n;i++){
//     cout<<s.top()<<" ";         //top element print first : 
//     s.pop();
// }cout<<endl;


// //copying one stack to another :
// stack<string>p(s);              // here the value of s hi 0 because we pop all the elements from the s stack : we need to comment the pop line to print and copy the p stack :  

// int m = p.size();               
// for(int i = 0; i < m;i++){
//     cout<<p.top()<<" ";         
//     p.pop();
// }cout<<endl;

// //integer stack :
// stack<int>I;
// I.push(2); 
// I.push(3);                 //for integer : 
// I.push(6); 
// I.push(5); 
// cout<<I.top()<<endl;





// // Queue in STL : 
// //concept of queue is first in first out : 
// // phala aao phala pao : 

// //creating queue 
// queue< string > q;
// q.push("Tilak");
// q.push("Saini");
// q.push("is alone");

// cout<<q.front()<<endl;

// int n = q.size();
// for(int i = 0; i < n; i++){
//     cout<<q.front()<<" ";           //It first print Tilak ,then Saini then, is alone : according to concept : 
//     q.pop();
// }


// cout<<"size : "<<q.size()<<endl;          //for checking the size :
// cout<<"empty or not : "<<q.empty()<<endl; //for checking that queue is empty or not :






// //priority queue in STL : 

// //have two concept 1. max heap 2. min heap
// //1. in max heap always the first element is greatest :     (on printing)
// //2. in min heap always the first element is smallest :     (on printing)



// //creating priority queue : 
// priority_queue<int>maxi;

// priority_queue<int,vector<int>,greater<int>>mini;

// maxi.push(2);
// maxi.push(3);                 //for maximum
// maxi.push(4);
// maxi.push(5);

// mini.push(2);
// mini.push(3);                 //for minimum
// mini.push(4);
// mini.push(5);



// // cout<<maxi.top()<<endl;
// // cout<<mini.top()<<endl;

// int n = maxi.size();
// for(int i = 0; i < n; i++){
//     cout<<maxi.top()<<" ";               //printing max heap : 
//     maxi.pop();
// }cout<<endl;

// int m = mini.size();  
// for(int i = 0; i < m; i++){
//     cout<<mini.top()<<" ";             //printing min heap : 
//     mini.pop();
// }cout<<endl;


// //checking size :
// n = maxi.size();
// m = mini.size();
// cout<<"maximum size : "<<n<<endl;           //size dono ka hi zero aayga kyonki humne pop kak dia hai loop mai hi :  
// cout<<"minimum size : "<<m<<endl;





// set in STL :
// in set there is all the elements are unique means koi sa bhi element same nhi hona chahiya : 
// elements modifie nhi ho sakte hai ya to delete ya nhi :
//element access in sorted way : 



// //creating stack : 
// set<int>s;

// //inserting the elements in the set : 
// s.insert(1);
// s.insert(2);
// s.insert(3);
// s.insert(4);
// s.insert(5);
// s.insert(6);

// //count function : 
// cout<<"hai ya nhi : "<<s.count(4)<<endl; //this function checks only if there is the given element is present or not (returns only boolean value ):

// //find function : 
// //creating iterator :
// set<int>:: iterator it = s.find(5);
// cout<<*it<<endl;
// for(auto i = it ; i != s.end(); i++){
//     cout<<*i<<" ";
// }cout<<endl;



// //map in STL : 
// //in map one key points only one element : 

// //creating map :
// map<int,string>m;
// // inserting the elements in map ;
// m.insert({1,"Tilak"});
//  // or
//  m[2] = "Saini";
//  m[3]= "Is";
//  m[4] = "Alone";
 
//  cout<<"size : "<<m.size()<<endl;
 
//  for(auto i : m){
//     cout<<i.first<<" "<<i.second<<" ";
//     cout<<endl;
//  }cout<<endl;

// we come back tomarrow -------------->   allways remeber there no any tomarrow : ---------->  kal kabhi kisi ka nhi aata aaj realise kar bhi lia :ṇ





// vector<int>v = {2,4,6,7,8,9};

// cout<<binary_search(v.begin(),v.end(),8)<<endl;              // binary search in one function : 


//to find maximum and minimum of the two variables : 
// int a = 90;
// int b = 9;
// cout<<min(a,b)<<endl;
// cout<<max(a,b)<<endl;         

// //swap of two numbers : 
// swap(a,b);
// cout<<"after swaping : "<<a<<" "<<b<<endl;

// string s = "Tilak Saini";
// reverse(s.begin(),s.end());
// cout<<s<<endl;              //# badiya chal rha hai :
// reverse(s.begin(),s.end()); 

// cout<<s<<endl;


// //soring :
// sort(v.begin(),v.end());
// for(int i : v){
//    cout<<i<<"    ";
// }cout<<endl;


// }
