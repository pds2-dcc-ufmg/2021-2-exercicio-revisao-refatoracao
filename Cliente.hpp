#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{

public:
 string NOME;
 string endereco;
 string CEP;
 string AlturaDosPais;
 std::string getNome();
 std::string getEndereco();
 std::string getCep();

 void imprimeInformacoes();

private:
 std::string nome;
 std::string endereco;
 std::string CEP;
};

#endif
