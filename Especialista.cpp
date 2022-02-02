#include "Especialista.hpp"

double Especialista::calculaComissao(double ValorVenda) {
        double comissao = ValorVenda*perc;
        return comissao;
}

void Especialista::print(){
        std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "Num Atendimentos: " << _numAtendimentos << endl;
        std::cout << "Salario Total: " << _salarioBase+calculaComissao(_valorEmVendas)<<endl;
}

void Especialista::efetuaVenda(double valor){
        _valorEmVendas+=valor;
        _numAtendimentos++;
}