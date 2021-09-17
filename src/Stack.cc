#include"Stack.hh"

Stack::Stack()
{

}

Stack::~Stack()
{
}

void Stack::Push(Crockery*& crockery)
{
    if(IsEmpty())
    {
        head=new Node(crockery);
    }
    else 
    {
        Node* last{head};
        head = new Node(crockery);
        head->nextNode = last;
    }
}
void Stack::Pop()
{

}
bool Stack::IsEmpty()
{
    return head == nullptr;
}

Node* Stack::Peek() const
{
    return head;
} 