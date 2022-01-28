#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {

    public:

    string getEspecialidade();
    int getNumAtendimentos();
    double getComissao();
    int somaNumAtendimentos(int soma);
    double somaComissao(double valor);
    double calculaComissao(double ValorVenda);
    void print();

    Especialista(string nome = "", string idade = "", int rgFunc = 0, double salarioBase = 0, string especialidade = "",
                 int numAtendimentos = 0, double comissao = 0, double procentagem = 0.1);

    private:

    double porcentagem;
    int numAtendimentos;
    double comissao;
    string especialidade;

};

#endif
