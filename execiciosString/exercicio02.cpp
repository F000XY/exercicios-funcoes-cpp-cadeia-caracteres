#include <iostream>
#include <cctype>
std::string receberString()
{
    std::cout << "Digite seu nome: ";
    std::string nome;
    std::getline(std::cin, nome);
    return nome;
}
int main(){
    std::string teste=receberString();
    teste[0] = std::toupper(teste[0]);
    std::cout << "Seu nome com o 1 digito em maiusculo: " << teste;
    return 0;
}