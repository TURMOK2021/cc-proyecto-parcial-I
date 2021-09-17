#pragma once
#include<string>
class Crockery
{
private:
    unsigned int quantity{};
    
    
public:
    Crockery(unsigned int quantity);
    ~Crockery();
    unsigned int GetQuantity() const;
};