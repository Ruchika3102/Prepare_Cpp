#include<iostream>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string here: ";
    getline(cin,str);
    int count_vowel =0;
    int count_consonant=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count_vowel++;
        }
        else{
            count_consonant++;
        }
    }
    cout<<"Total number of vowels in the string are: "<<count_vowel<<endl;
    cout<<"Total number of consonants in the string are: "<<count_consonant<<endl;
    return 0;
}