#include<iostream>


int multiplikation()
{
    float a,b;
    std::cout << "Geben Sie bitte die erste Zahl ein" << std::endl;
    std::cin >> a;
    std::cout << "Geben Sie bitte die zweite Zahl ein mit der die erste multipliziert wird" << std::endl;
    std::cin >> b; 
    return a*b;  
}


int main()
{
    std::cout << multiplikation() <<std::endl;

    return 0;
}