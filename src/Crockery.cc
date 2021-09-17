#include<iostream>
#include"Crockery.hh"

Crockery::Crockery(unsigned int quantity)
{
    this->quantity = quantity;
    
}

Crockery::~Crockery()
{
    std::cout << "Data delete" << std::endl;

}
unsigned int Crockery::GetQuantity() const
{
    return quantity;
}
