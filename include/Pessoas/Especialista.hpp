#ifndef Especialista_HPP
#define Especialista_HPP

#include "./Funcionario.hpp"
#include "./Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {

    private:
        string _especialidade;
        int _numAtendimento = 0;
        double _comissao = 0;
    
    public:
        Especialista(double salarioBase,string Idade, string nome, int rgFunc,string especialidade);
        Especialista() = default;

        double comissao(double ValorVenda);
        double getSalarioBase();
        string getNome();
        void adicionarComissao(double comissao);
        void adicionarAtendimento(int numAtendimento);
        double calcularTotal();
        int getNumAtendimento();
        void print();
};

#endif
