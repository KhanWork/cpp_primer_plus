#ifndef STCKTP1_H_
#define STCKTP1_H_

template <class Type>
class Stack{
    private:
        enum {SIZE = 10};
        int stacksize;
        Type *items;
        int top;
    public:
        explicit Stack(int ss = SIZE);
        Stack(const Stack & st);
        ~Stack() { delete [] items; }
        bool isempty() {return top == 0;}
        bool isfull() {return top == stacksize;}
        bool push(const Type & item);
        bool pop(Type & item);
        Stack & operator=(const Stack & st);
};

template <class Type>
Stack<Type>::Stack(int ss) : stacksize(ss), top(0)
{
    items = new Type [stacksize];
}

template <class Type>
Stack<Type>::Stack(const Stack & st)
{
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];
    for(int i = 0; i < top; i++)
        items[i] = st.items[i];
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if(isfull())
        return false;
    else
    {
        items[top++] = item;
        return true;
    }
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if(isempty())
        return false;
    else
    {
        item = items[--top];
        return true;
    }
}

template <class Type>
Stack<Type> & Stack<Type>::operator=(const Stack<Type> & st)
{
    if(st == this)
        return *this;
    delete [] items;
    stacksize = st.stacksize;
    top = st.top;
    items = new Type [stacksize];

    for(int i = 0; i < top; i++)
        items[i] = st.items[i];
    
    return *this;
}

#endif // !STCKTP1_H_
