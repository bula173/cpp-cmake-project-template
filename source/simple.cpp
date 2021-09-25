#include "simple.hpp"

#include <iostream>
    
Simple::Simple()
{
    std::cout << "> Simple Ctr\n";
}

Simple::Simple(const Simple&)
{
    std::cout << "> Simple Copy Ctr\n";
}

Simple::Simple(const Simple&&)
{
    std::cout << "> Simple Move Ctr\n";
}

Simple& Simple::operator=(const Simple& t)
{
    std::cout << "> Simple Assign Operator\n";
    return *this;
}

Simple& Simple::operator=(const Simple&& t)
{
    std::cout << "> Simple Assign Move Operator\n";
    return *this;
}

int Simple::add(int a, int b)
{
    return (a + b);
}


    
Simple::~Simple()
{
    std::cout << "> Simple Dtr\n";

}