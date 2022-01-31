#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

const double percPorVenda = 0.1;

class Especialista : public Funcionario {

    public:
        Especialista(){}
        Especialista(string nome, string idade, int rg, double salarioBase, string especialidade) :
                especialidade(especialidade)
        {
            this->nome = nome;
            this->idade = idade;
            this->rg = rg;
            this->salario = salarioBase;
            this->salarioTotal = salarioBase;
        }

        double getComissao(double ValorVenda) {
            return ValorVenda*percPorVenda;
        }

        void print() override{
            cout << "[Especialista]" << endl
                 << "[Funcionario]"  << endl
                 << "  Idade: "  << idade << endl
                 << "  RGFunc: " << rg    << endl
                 << "  Nome: "   << nome  << endl
                 << "  SalarioBase: R$ "  << fixed << setprecision(2) << salario << endl;
                 cout << "Num Atendimentos: " << qtdAtendimentos << endl;
                 cout << "Salario Total: " << salarioTotal <<endl;
        }

        string getEspecialidade(){
            return especialidade;
        }

        void setEspecialidade(string especialidade){
            this->especialidade = especialidade;
        }

        void addAtendimento(){
            this->qtdAtendimentos++;
        }

        int getNumAtendimentos(){
            return this->qtdAtendimentos;
        }

    private:
        string especialidade;
        int qtdAtendimentos = 0;

};

#endif
