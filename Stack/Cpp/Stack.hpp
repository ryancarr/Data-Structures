template <typename T>
class Stack
{
    private:
        struct Node
        {
            T data;     // The payload for each element
            Node *prev; // A pointer to the previous element
        };
        Node *top;
    
    public:
        Stack();
        ~Stack();        
        bool isEmpty();
        T peek();
        T pop();
        void push(T);
};

template <typename T>
Stack<T>::Stack()
{
    top = nullptr;
    //top->prev = nullptr;
}

template <typename T>
Stack<T>::~Stack()
{
    while(top)
    {
        Node *temp = top;
        top = top->prev;
        delete temp;
    }
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return top == nullptr;
}

template <typename T>
T Stack<T>::peek()
{
    if(isEmpty())
        return NULL;
    else
        return top->data;
    
}

template <typename T>
T Stack<T>::pop()
{
    T value;

    if(isEmpty())
        return NULL;
    else
    {
        Node *temp = top;
        top = top->prev;
        value = temp->data;
        delete temp;
    }

    return value;
}

template <typename T>
void Stack<T>::push(T value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->prev = top;

    top = newNode;
}