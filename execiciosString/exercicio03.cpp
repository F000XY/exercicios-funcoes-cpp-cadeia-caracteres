#include <iostream>
#include <algorithm>
std::string receberString()
{
    std::cout << "Digite seu nome para inverter a palavra: ";
    std::string nome;
    std::getline(std::cin, nome);
    return nome;
}
int main(){
    std::string teste=receberString();
    std::reverse(teste.begin(),teste.end());
    std::cout << "Seu nome invertido: " << teste;
    return 0;
}