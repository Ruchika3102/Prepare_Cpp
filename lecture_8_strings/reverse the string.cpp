// #include <iostream>
// using namespace std;
// int main() {
//     string str="Google";
//     for(int i=str.length()-1; i>=0; i--) {
//         cout<<str[i];
//     }
//     return 0;
// }



// or



// #include <iostream>
// using namespace std;
// int main(){
//     string str;
//     cout << "Enter a string to reverse: ";
//     getline(cin, str);
//     int n = str.length();
//     for(int i=0;i<n/2;i++){
//         char temp=str[i];
//         str[i]=str[n-i-1];
//         str[n-i-1]=temp;
//     }
//     cout << "Reversed string: " << str << endl;
//     return 0;

// }




// or





#include <iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter a string to reverse: ";
    getline(cin, str);
    int s = 0;
    int e = str.length()-1;
    while(s<=e){
        char temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    }
    cout << "Reversed string: " << str << endl;
    return 0;

}