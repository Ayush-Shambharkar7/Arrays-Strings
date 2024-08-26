/*
AYUSH SHAMBHARKAR
23070123034
Aim - to check whether the entered string by the user is a palindrome or not a palindrome.
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string a,revstr;
    int length,i;
    
    cout<<"Enter a string: ";
    cin>>a;
    length=a.length();
    
    for(i=length-1;i>=0;i--)
    {
        revstr+=a[i];
    }
    if(a==revstr)
    {
        cout<<"It is a palindrome.";
    } 
    else 
    {
        cout<<"It is not a palindrome";
    }
    
    return 0;
}

/*
OUTPUT
Enter a string: hello
It is not a palindrome

Enter a string: rotator
It is a palindrome.
*/