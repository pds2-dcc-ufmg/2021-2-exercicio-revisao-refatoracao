#include "Gerente.hpp"

    void Gerente::print() {
        cout << "[Gerente]" << endl;
        Funcionario::print();

        cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
    }

    void Gerente::set_bonificacao(double nova_bonificacao){
        bonificacao = nova_bonificacao;
    }
    double Gerente::get_bonificacao(){
        return bonificacao;
    }  

    double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
        double x;
        return numTOTALVendas*ValorBONIFICACAO;
    }