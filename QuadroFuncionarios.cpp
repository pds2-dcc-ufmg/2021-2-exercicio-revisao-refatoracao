
#include "QuadroFuncionarios.hpp"

#include <iostream>
#include <cassert>


QuadroFuncionarios::QuadroFuncionarios(Gerente gerente) :
    gerente(std::move(gerente)) {}

void QuadroFuncionarios::adicionar_funcionario(std::unique_ptr<Funcionario> funcionario) {
    this->funcionarios.push_back(std::move(funcionario));
}

void QuadroFuncionarios::print_relatorio() const {
    std::cout << " \n \n           Relatorio dos Funcionarios \n\n";
    for(const auto &funcionario : this->funcionarios)
        funcionario->print();
    
    this->gerente.print();
}

Venda QuadroFuncionarios::novo_atendimento(
    const Cliente &cliente,
    const std::string &nome_funcionario,
    const std::string &descricao,
    const double valor)
{
    
    Funcionario *funcionario_ptr = nullptr;
    for(auto &funcionario : this->funcionarios)
        if(funcionario->get_nome() == nome_funcionario)
            funcionario_ptr = funcionario.get();
    
    assert(funcionario_ptr != nullptr);
    

    funcionario_ptr->adicionar_bonus(valor);
    this->gerente.adicionar_bonus(valor);

    return Venda(cliente, *funcionario_ptr, descricao, valor);
}
