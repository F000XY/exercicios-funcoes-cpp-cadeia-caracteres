#include <iostream>
#include <cstring>
std::string receberString()
{
    std::cout << "Digite seu nome completo: ";
    std::string nomeCompleto;
    std::getline(std::cin, nomeCompleto);
    std::cout << "Seu nome completo eh: " << nomeCompleto << std::endl;

    return nomeCompleto;
}
void verificarEspacosEmBranco(const std::string& nomeCompleto)
{
    char branco= ' ';
    int contador= 0;
    for (char i : nomeCompleto)
    // lembrando que : eh um construtor ou seja carrega herança
    {
        if (i == branco)
        {
            contador++;
            std::cout<<"espaco (os)em branco encontrado(s) no nome --->"<<contador<<std::endl;
        }
    }
    
}
int main()
{
    std::string teste=receberString();
    verificarEspacosEmBranco(teste);
    
    return 0;
}