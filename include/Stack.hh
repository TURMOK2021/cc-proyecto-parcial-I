#pragma once
#include"Crockery.hh"
#include"Node.hh"

class Stack
{
private:
    Node* head{};
public:
    Stack();
    ~Stack();
    void Push(Crockery*& crockery);
    void Pop();
    bool IsEmpty();
    Node* Peek() const; 


};