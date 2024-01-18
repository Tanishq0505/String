// )Code studio Replace Spaces 
// You have been given a string 'STR' of words. You need to replace all the spaces between words with "@40". 
// Sample Input 1: 
// 2 
// Coding Ninjas Is A Coding Platform 
// Hello World 
// Sample Output 1: 
// Coding@40Ninjas@40Is@40A@40Coding@40Platform 
// Hello@40World 

#include <string>
#include <iostream>
using namespace std;
// 1hour 14 min watch
// https://youtu.be/Wdjr6uoZ0e0
string replaceSpaces(string &str)
{
    string temp = "";

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    return temp;
}
int main()
{
    string s;
    cout << "Type your sentence: ";
    getline(cin, s);
    cout << "Your sentence is: " << s << endl;
    cout << replaceSpaces(s);
    return 0;
}
