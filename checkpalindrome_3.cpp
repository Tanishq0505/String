// Check if the word is Palindrome or not. 
// Ex- In this question upper- and lower-case letter are not considered as same for ex 
// We have Noon this is not palindrome as first and last n are upper and lower case it considers different 
// But NOON it is considered as palindrome as all letters are uppercase. 

#include <iostream>
using namespace std;
// see video from 23:00 min
// https://youtu.be/Wdjr6uoZ0e0?list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA

bool checkPalindrome(char a[], int n)
{

    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if ((a[s]) != (a[e]))
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

// Note - in this question upper and lower case letter are not consider as same for ex
// we have Noon this is not palindrome as first and last n are upper and lower case it consider diffrent
// But  NOON it is conider as palindrome as all letters are uppercase
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
