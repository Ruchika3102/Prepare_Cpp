// #include<iostream>
// using namespace std;
// bool PalindromeOfString(string &str,int start,int end){
// if(start>=end){
//     return true;
// }
// if(str[start]!=str[end]){
//     return false;
// }
// return PalindromeOfString(str,start+1,end-1);

// }
// int main(){
// string str;
// cout<<"Enter word here: ";
// cin>>str;
// bool result=PalindromeOfString(str,0,str.length()-1);
// if(result)
//         cout << "Palindrome" << endl;
//     else
//         cout << "Not a palindrome" << endl;
// return 0;
// }



#include <iostream>
using namespace std;
int main() {
    string str, reversed = "";
    cout << "Enter a word: ";
    cin >> str;
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    if (str == reversed) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }
    return 0;
}
