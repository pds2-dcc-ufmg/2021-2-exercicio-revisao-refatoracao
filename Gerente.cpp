#include "Gerente.hpp"

Gerente::Gerente (double Salario, std::string Idade,
         std::string Nome, int RgFuncionario, double Bonificacao) : 
         Funcionario(Salario, Idade, Nome, RgFuncionario), Bonificacao(Bonificacao){}

double Gerente::calculaBonificacaoGerente(int NumTotalVendas){
            return NumTotalVendas*VALOR_BONIFICACAO;
        }

        void Print() {
        //     cout << "[Funcionario]" << endl
        //     << "[Gerente]" << endl
        //     << "  Nome: " << nome << endl
        //     << "  Idade: " << IDADE << endl
        //     << "  RGFunc: " << rgFunc << endl
        //     << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }

