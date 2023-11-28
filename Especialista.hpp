#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    private:
        string _especialidade;
        int _numAtendimentos;
        double _comissao;
    public:
        Especialista(string nome, string IDADE, int rgFunc, double SalarioBase, string especialidade):
        Funcionario(nome, IDADE, rgFunc, SalarioBase), _especialidade(especialidade), _numAtendimentos(0), _comissao(0) 
        {}

    void comissao(double ValorVenda) {
        _numAtendimentos++;
        double c = ValorVenda*0.1;
        _comissao+=c;
    }
    int numAtendimentos(){
        return _numAtendimentos;
    }
    void print_nome() {
        cout << _nome << endl;
    }

    void print() {
        cout << "[Especialista]" << endl;
        Funcionario::print();
        cout << "  Nome: " << _nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase << endl
        << "Num Atendimentos: " << _numAtendimentos << endl
        << "Salario Total: " << _SalarioBase+_comissao << endl;
    }
};

class Gerente: public Funcionario {
    private:
        double _bonificacao;
        double ValorBONIFICACAO = 15.0;
    public:
        Gerente(string nome, string IDADE, int rgFunc, double SalarioBase):
        Funcionario(nome, IDADE, rgFunc, SalarioBase), _bonificacao(0) {}
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << _nome << endl
            << "  Idade: " << _IDADE << endl
            << "  RGFunc: " << _rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase << endl
            << "Salario Total: " << _SalarioBase + _bonificacao << endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double _bonificacao=numTOTALVendas*ValorBONIFICACAO;
            return _bonificacao;
        }

};
#endif
