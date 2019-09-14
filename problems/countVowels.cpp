#include <iostream>
using namespace std;
int countVowel(string s)
{
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count++;
        }
    }
    return count;
}
int main()
{
    string str;
    cout << "Enter the string:";
    getline(cin, str);
    cout << "No. of vowels : " << countVowel(str);
    return 0;
}
