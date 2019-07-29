# Stack

This is a generic implementation of a stack in C++. I'll cover the basics and not get too fancy. The base for the stack will actually use a singally linked list.

## Public Methods

* push()    - Push an item on the top of the stack
* pop()     - Pop the top item from the stack and return it's value
* peek()    - Returns the top value of the stack but doesn't change the data structure in any way
* isEmpty() - Returns true if the stack is empty, false if the stack contains one or more elements