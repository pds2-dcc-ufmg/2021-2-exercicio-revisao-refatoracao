#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

const double perc_por_venda = 0.1;

class Especialista : public Funcionario {

    private:

        string especialidade;
        int quantidade_de_atendimentos = 0;

    public:

        Especialista(){}

        Especialista(string nome, string idade, int rg, double pagamento_base, string especialidade) :
                especialidade(especialidade)
        {
            this->nome = nome;
            this->idade = idade;
            this->rg = rg;
            this->salario = pagamento_base;
            this->salario_total = pagamento_base;
        }

        double getComissao(double valor_venda) {
            return valor_venda * perc_por_venda;
        }

        void print() override{
            cout << "[Especialista]" << endl
                 << "[Funcionario]"  << endl
                 << "  Idade: "  << idade << endl
                 << "  RGFunc: " << rg    << endl
                 << "  Nome: "   << nome  << endl
                 << "  SalarioBase: R$ "  << fixed << setprecision(2) << salario << endl;
                 cout << "Num Atendimentos: " << quantidade_de_atendimentos << endl;
                 cout << "Salario Total: " << salario_total <<endl;
        }

        string getEspecialidade(){
            return especialidade;
        }

        void setEspecialidade(string especialidade){
            this->especialidade = especialidade;
        }

        void addAtendimento(){
            this->quantidade_de_atendimentos++;
        }

        int getNumAtendimentos(){
            return this->quantidade_de_atendimentos;
        }
};

#endif
