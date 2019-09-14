#include <iostream>
using namespace std;
void frequency(string str)
{
    int len = str.length();

    int j, alphabet[26] = {0};
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            j = str[i] - 'a';
            alphabet[j]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] != 0)
        {

            cout << "occurrence of character " << char(i + 'a') << " is " << alphabet[i] << endl;
        }
    }
}
int main()
{
    string str;

    cout << "Enter the string :";
    getline(cin, str);
    frequency(str);

    return 0;
}