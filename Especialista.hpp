#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"





class Especialista : public Funcionario {
    public:
        Especialista(std::string nome,double salarioBase,
                    int idade, int rgFunc,const double perComissao)
                    :Funcionario(salarioBase,idade,nome,rgFunc){
            this->_nome = nome;
            this->_salarioBase = salarioBase;
            this->_idade = idade;
            this->_rgFunc = rgFunc;
            this->_perComissao = perComissao;
        }    
    double _perComissao;    
};

#endif
