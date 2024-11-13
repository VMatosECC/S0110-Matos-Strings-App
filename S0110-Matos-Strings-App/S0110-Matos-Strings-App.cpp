// S0110-Matos-Strings-App.cpp 

#include <iostream>
#include <string>
using namespace std;

//Prototypes ------------------------------------------
void experiment01();
void experiment02();
void experiment03();
string reverse(string s);
void reverse2(string& s);
bool isPalindrome(string s);
bool isPalindrome2(string s);

int main()
{
    //experiment01();
    experiment02();
    cout << "\nAll Done!\n";
}
// User-defined methods --------------------------------
void experiment02()
{
    //find position of each space symbol in s
    string s = "The brown fox jumps over the lazy dog";   
    cout << "0123456789012345678901234567890123456789" << endl;
    cout << s << endl;
    int pos = 0;
    while (true) {
        pos = s.find(" ", pos);
        if (pos == string::npos) break;
        cout << "Space found at position " << pos << endl;
        pos++;
    }
    
}


void experiment01()
{
    string s1 = "Hello world";
    //print each char
    for (int i = 0; i < s1.size(); i++)
    {
        cout << s1[i] << "\t" << (int)s1[i] << endl;
    }

    //Print string in reverse
    cout << endl;
    for (int i = s1.size() - 1; i >= 0; i--) {
        char c = s1[i];
        cout << (char)c << "\t" << (int)c << endl;
    }

    //Reverse the string
    string s2 = reverse(s1);
    cout << "\nReversed string is " << s2 << endl;


    //Version2. Reverse the string
    reverse2(s1);
    cout  << "\nVersion2. Reversed string is " << s1 << endl;

    //Palindromes?
    string s3 = "98489";
    s3 = "MADAMIMADAM";
    //bool result = isPalindrome(s3);
    bool result = isPalindrome2(s3);
    cout << "\nIs " << s3 << " a palindrome? " << result << endl;
}
//-------------------------------------------------------------
bool isPalindrome(string s)
{
    return (s == reverse(s));
}

bool isPalindrome2(string s)
{
    int first = 0;
    int last = s.size() - 1;
    while (first < last) {
        if (s[first++] != s[last--]) return false;
        //first++;
        //last--;
    }
    return true;
}


void reverse2(string& s) {
    char ctemp;
    int n = s.size() - 1;
    for (int i = 0; i < s.size()/2 ; i++) {
        ctemp = s[n - i];
        s[n - i] = s[i];
        s[i] = ctemp;
    }
}



string reverse(string s)
{
    string stemp = s;
    int i2 = 0;
    for (int i1 = s.size() - 1; i1 >= 0; i1--) {
        stemp[i2] = s[i1];
        i2++;
    }
    return stemp;
}
// ------------------
