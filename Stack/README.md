# Stack

This is a generic implementation of a stack in C++ and Python. I'll cover the basics and not get too fancy. The base for the stack will actually use a singaly linked list.

## Public Methods

* isEmpty() - Returns true if the stack is empty, false if the stack contains one or more elements
* peek()    - Returns the top value of the stack but doesn't change the data structure in any way
* pop()     - Pop the top item from the stack and return it's value
* push()    - Push an item on the top of the stack
* size()    - Returns the number of elements in the stack
