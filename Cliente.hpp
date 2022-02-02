#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{

public:
 std::string getNome();
 std::string getEndereco();
 std::string getCep();
 std::string nome;
 std::string endereco;
 std::string CEP;

 void imprimeInformacoes();
};

#endif
