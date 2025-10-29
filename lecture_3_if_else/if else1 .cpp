#include<iostream>
using namespace std;
int main(){
int age;
cout<<"Enter age: ";
cin>>age;
if(age<18){
    cout<<"you are not eligible to vode"<<endl;
}
else{
    cout<<"you are eligible to vote"<<endl;
}
return 0;
}




// syntax is
//  if(condition){
//     cout<<" "<<endl;
//  }
//  else{  
//     cout<<" "<<endl;
//  }