#include "Gerente.hpp"
#include "Funcionario.hpp"

void Gerente::print() {
            cout << "[Funcionario]" << endl;
            cout << "[Gerente]" << endl;
            cout << "  Nome: " << getNome() << endl
            << "  Idade: " << getIdade() << endl
            << "  RGFunc: "<< getRg() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;
        }

double Gerente::calculaBonificacao(int num_total_vendas){
            return num_total_vendas*valor_bonificacao;
        }

void Gerente::setBonificacao(double _bonificacao){
            this->bonificacao = _bonificacao;
        }

double Gerente::getBonificacao(){
            return bonificacao;
        }

void Gerente::setValorBonificacao(const double _valor_bonificacao){
            this->valor_bonificacao = _valor_bonificacao;
        }

double Gerente::getValorBonificacao(){
            return valor_bonificacao;
        }