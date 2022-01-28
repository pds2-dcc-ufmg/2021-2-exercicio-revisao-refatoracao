#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
//Removi o "using namespace"

class Cliente{

    private:
        std::string _nome;
        std::string _endereco;
        std::string _cep;       

        //Removi a Altura dos Pais, visto que não era usada
    public:
        Cliente();
        Cliente(std::string nome, std::string endereco, std::string cep);  //Declaro os tipos de construtores

        void print(); // imprime na tela os dados de um cliente cadastrado

       std::string getNome();
};

#endif