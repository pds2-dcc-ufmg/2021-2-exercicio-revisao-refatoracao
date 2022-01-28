#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    private:
        string _especialidade;
    //     int _numAtendimento;
    //     int _comissao
    
    public:
        Especialista(double salarioBase,string Idade, string nome, int rgFunc,string especialidade){
            _IDADE = Idade;
            _SalarioBase = salarioBase;
            _nome = nome;
            _rgFunc = rgFunc;
            _especialidade = especialidade;          
        }
        Especialista() = default;
        double comissao(double ValorVenda) {
            double c = ValorVenda*perc;
                    return c;
        }
        double getSalarioBase(){
            return _SalarioBase;
        }
        string getNome(){
            return _nome;
        }
        void print() {

            std::cout << "[Especialista]" << endl;
            Funcionario::print();

            std::cout << "  Nome: " << _nome << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase <<endl;

        }
};

#endif
