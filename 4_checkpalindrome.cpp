// Check if the word is Palindrome or not. (consider upper- and lower-case letter as same) 
// Note - in this question upper- and lower-case letter are considered as same for ex \
//  we have Noon this is palindrome even if first and last n are upper and lower case is different 
//  and NOON is also considered as palindrome as all letters are uppercase 

#include <iostream>
using namespace std;
// see video from 23:00 min
// https://youtu.be/Wdjr6uoZ0e0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA

char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
        return ch;
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }

    return count;
}

// Note - in this question upper and lower case letter are  consider as same for ex
// we have Noon this is palindrome even if first and last n are upper and lower case is diffrent
// and  NOON is also  conider as palindrome as all letters are uppercase
int main()
{

    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;
    cout << "Your name is ";
    cout << name << endl;
    int len = getLength(name);
    cout << " Length: " << len << endl;
    cout << " Palindrome or Not: " << checkPalindrome(name, len) << endl;

    return 0;
}
