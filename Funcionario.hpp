// Retirei comentarios desnecessarios e o namespace std, nesse caso desnecessario por serem poucas utilizacoes
// Arrumei os nomes das variaveis do tipo string presentes para que fiquem de acordo com as boas praticas
// Fiz algumas alteracoes na impressao, para que o codigo fique mais organizado e facilite o encontro de erros
// Retirei uma funcao aleatoria e desnecessaria para o codigo
// Organizei a identacao da classe para que fique mais legivel

#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {

    public:
        double salario_minimo;
        std::string idade;
        std::string nome;
        int rg_funcionario;


    void print() {
        std::cout << "[Funcionario]" << std::endl;
        std::cout << "  Idade: " << idade << std::endl;
        std::cout << "  RGFunc: " << rg_funcionario << std::endl;
    }


};

#endif
