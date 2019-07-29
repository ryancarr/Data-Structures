/*******************************************************************************
 * Name    : Palindrome checker                                                *
 * Author  : Ryan Carr                                                         *
 * Created : 07/28/2019                                                        *
 * Purpose : This code uses a stack to check whether a string is a palindrome. *
 * This is not intended to use the most efficient method of checking a         *
 * palindrome but is a method for testing a stack in a realistic way.          *
 *******************************************************************************/
#include <iostream>
#include <string>
#include "Stack.hpp"

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

int main()
{
    string input;
    Stack<char> stack;

    cout << "Enter a word or a sentence: ";
    getline(cin, input);

    // Load the stack with our data
    for(char letter : input)
    {
        stack.push(letter);
    }

    // I forgot to include a size variable in the stack, perhaps a good addition
    bool isPalindrome = false;

    for(char letter : input)
    {
        if(letter == stack.pop())
        {
            isPalindrome = true;
        }
        else
        {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << input << " is a palindrome." << endl;
    else
        cout << input << " is not a palindrome." << endl;

    return 0;
}