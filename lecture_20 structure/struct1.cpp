#include <iostream>
using namespace std;
struct Book{
    string title;
    string author;
    int price;
};
int main(){
    Book b1;
    cin>>b1.title>>b1.author>>b1.price;
    cout<<b1.title<<" "<<b1.author<<" "<<b1.price<<endl;

}