#pragma once
#include"Crockery.hh"

class Node
{
private:
Crockery* crockery{}; 
   
    
public:
    Node* nextNode{};
    Node(Crockery*& crockery);
    ~Node();
    Crockery* GetCrockery() const;
};