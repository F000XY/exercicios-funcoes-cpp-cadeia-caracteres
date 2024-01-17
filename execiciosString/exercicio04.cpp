#include <iostream>
#include <cstring>

std::string receberString()
{
    std::cout << "Digite algo: ";
    std::string algo;
    std::getline(std::cin, algo);
    return algo;
}
int main(){
    std::string teste=receberString();
    std::string teste1=receberString();
    // strcat(teste,teste1); nao funciona com str apenas char;
    // sendo assim apliquei a logica de +=;
    teste+=teste1;
    std::cout << teste;
    return 0;
}