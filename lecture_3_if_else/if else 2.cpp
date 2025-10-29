#include<iostream>
using namespace std;
int main(){
int pan_card,adhar_card;
cout<<"you have pan card or not???if have then enter 1 else 0"<<endl;
cin>>pan_card;
cout<<"you have adhar card or not??? if have then enter 1 else 0"<<endl;
cin>>adhar_card;
if(pan_card && adhar_card==1){
    cout<<"You are eligible for form";
}
else{
    cout<<"You are not eligible for form";
}
return 0;
}



