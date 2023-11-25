#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{

  private:
    string nome;
    string endereco;
    string cep;
    

  public:

    Cliente(const std::string& nome, const std::string& endereco, const std::string& cep);

    std::string getNome();
    std::string getEndereco();
    std::string getCep();

    void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif