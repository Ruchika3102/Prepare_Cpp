#include<iostream>
using namespace std;
int main(){
   int n,count=0;
   cout<<"Enter limit here: ";
   cin>>n;
   for(int i=0;i<+n;i++){
    if(i%2!=0){
      count++;
      cout<<i<<endl;
    }
   }
   cout<<"the total oddd natural numbers between given limit is: "<<count<<endl;

}