
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"


class Venda : public Cliente{

    private:
 
        double _valor;
        std::string _descricao;
        Especialista *_especialista;


    public:

        double getValor();
        std::string getDescricao();
        Especialista getEspecialista();

        Venda(std::string nome, std::string descricao, double valor, Especialista *especialista);
        void print();
        

};

#endif
