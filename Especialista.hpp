//NOTA DE ALTERAÇÕES
//Remoção de redundância public
//Correção de identação e espaçamentos
//Remoção de variável c criada desnecessariamente, e também da variável percWanda
//Mudança da variável perc para um parâmetro de define, já que é um número estático
//Criação de arquivo cpp separado
//Incorporação de variáveis que estavam para fora da função em main
//Criação de método construtor

#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

//Porcentagem de comissao
#define perc  0.1

class Especialista : public Funcionario {
public:
    //Informações especialista
    string especialidade;
    int numAtendimentos;
    double comissaoValor;

    //Método de inicialização
    Especialista(string, string, int, double, string, int, double);
    
    //Cálculo que retorna o valor de comissao
    double comissao(double);

    //Mostra os dados do especialista
    void print();
};

#endif
