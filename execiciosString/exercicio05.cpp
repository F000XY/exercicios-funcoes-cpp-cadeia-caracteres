#include <iostream>
#include <algorithm>
std::string receberString()
{
    std::cout << "Digite uma palavra para verificacao de palindromo: ";
    std::string palavra;
    std::getline(std::cin, palavra);
    return palavra;
}
int main(){
    std::string teste1=receberString();
    std::string teste= teste1;
    std::reverse(teste1.begin(),teste1.end());
    if (teste==teste1)
    {
        std::cout << "A palvra -->" << teste <<" eh igual ao contario";
    }
    else
    {
        std::cout << "A palvra --> " << teste <<" nao eh igual a palavra --> " << teste1 <<" ao contario";
    }
    
    
    return 0;
}