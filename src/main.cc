#include<iostream>
#include"Crockery.hh"
#include"Stack.hh"


int main()
{
    Crockery* crockery1{new Crockery(1)};
    Crockery* crockery2{new Crockery(15)};
    Crockery* crockery3{new Crockery(5)};

    Stack* stack{new Stack()};
    stack->Push(crockery1);
    stack->Push(crockery2);
    stack->Push(crockery3);

    Node* currentNode{stack->Peek()};
    while(currentNode)
    {
        std::cout << "Quantity for Crockery in X restaurant is: " << currentNode->GetCrockery()->GetQuantity() << std::endl;
        currentNode = currentNode->nextNode;
    }


    std::cin.get();


    return EXIT_SUCCESS;
}