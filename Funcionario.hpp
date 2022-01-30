#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>



class Funcionario
{
public:
    
    virtual void imprimirDados() const;
    std::string getNome() const;
    
    

protected:
    int _idade;
    std::string _nome;
    std::string _RG;
    double _salarioBase;
    
};

#endif
