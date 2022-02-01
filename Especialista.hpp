#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

/*
A variével double perc declarada foi movida para o cpp, e a variável double percWanda foi retirada pois não possuia
um uso concreto no programa.
Foi criado um arquivo .cpp para conter a implementação das funcões, deicando no .hpp apenas seu escopo, para respeitar
a modularização.
Foi feito um construtor para a classe Especialista, e ele foi inicializado devidamente.
As variáveis da classe Especialista foram declaradas como private, a fim de respeitar o encapsulamento. E foi feito
um método get() const para acessa-las.
Foi retirado um public declarado sem necessidade e vazio.
Foi mudado o nome do método print() para evitar ambiguidade para o chamar na função main. 
*/

class Especialista : public Funcionario {

    public:
    Especialista (string idade, int rg, string nome, double salario, string especial) : Funcionario(idade, rg, nome, salario),
                                                                                        especialidade(especial) {};
    double comissao(double ValorVenda); 
    void printEspecialista();
    string getEspecialidade() const;    

    private:  
        string especialidade;                                                                          

};
    

#endif
