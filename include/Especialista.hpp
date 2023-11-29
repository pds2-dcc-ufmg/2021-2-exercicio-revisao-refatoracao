#ifndef Especialista_HPP
#define Especialista_HPP

#include <istream>

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {
    private:
        string _especialidade;

        int _numAtendimentos = 0;
        double _comissao = 0;

    public:
        // Colocar no .cpp
        Especialista() {}

        Especialista(string nome, string idade, int rgFunc, double salarioBase, string especialidade):
            Funcionario(nome, idade, rgFunc, salarioBase),
            _especialidade(especialidade) {}

        Especialista(Especialista& especialista):
            Especialista(especialista._nome,
                         especialista._idade,
                         especialista._rgFunc,
                         especialista._salarioBase,
                         especialista._especialidade){}

        // Adiciona uma nova comissa
        void comissao(double valorVenda);

        void novoAtendimento();

        int getNumAtendimentos() const;

        double salarioTotal() const override;

        void print() const;

        friend istream& operator>>(istream& in, Especialista& especialista);
};

#endif
