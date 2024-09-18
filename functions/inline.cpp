#include <iostream>

using namespace std;

// TODO: implement an inline function that checks if a character is a vowel
inline bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
}

int main()
{
    char ch = 'e';
    if (isVowel(ch))
    {
        cout << ch << " is vowel" << endl;
    }
    else
    {
        cout << ch << " is consonant" << endl;
    }
    return 0;
}