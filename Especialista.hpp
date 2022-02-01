#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

// Padronização do espaço entre as linhas
// Padronização das linebreaks
// Ajuste do encapsulamento, colocando no lugar certo e alternando entre public e private
// Como adicionou o namespace std, não precisa colocar o std:: no código
// Adicionar mais um cout na linha 33 para diminuir a interdepêndencia do código

using namespace std;

static double perc = 0.1;
static double percWanda = 0.1;

class Especialista : public Funcionario {
    public:
        string especialidade;
        double comissao(double valor_venda) {
        double c = valor_venda*perc;
        return c;
    }
    void print() {

        cout << "[Especialista]" << endl;
        Funcionario::print();
        cout << "  Nome: " << nome << endl;
        cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base << endl;

    }
};

#endif
