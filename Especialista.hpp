#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Venda.hpp"
#include "Cliente.hpp"

#include <vector>
using namespace std;

//a classe Especialista eh uma classe herdeira da base funcionario, um especialista tem os metodos de calculasalariototal e de adicionar vendas e calcular a comissao sobre elas, eles vem acompanhados do numero de vendas que fizeram e de um vetor com as respectivas vendas


class Especialista : public Funcionario {

    public:
        std::string especialidade;
        double perc = 0.1; //percentual que vai ganhar sobre cada venda, podendo mudar de acordo com o especialista, caso o usuario tiver interesse

    double comissao(double ValorVenda); //calcula a comissao sobre cada venda

    void print(); //override do metodo print de funcionario, imprime os dados, calculando atraves da comissao e da funcao calculasalariototal qual o salario de acordo com as vendas
    
    void adicionavenda(Venda x); //adiciona uma venda no vetor deste funcionario
    
    double calculasalariototal(); //calcula o salario total
    

    private:
    std::vector<Venda> vendas; //vetor com as vendas feitas
    int numvendas=0;  //numero de vendas que este vendedor realizou

};

#endif
