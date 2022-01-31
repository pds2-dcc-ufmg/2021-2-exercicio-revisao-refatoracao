
#ifndef QUADRO_FUNCIONARIOS_HPP
#define QUADRO_FUNCIONARIOS_HPP

#include <vector>
#include <memory>

#include "Funcionario.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"


class QuadroFuncionarios {
public:
    QuadroFuncionarios(Gerente gerente);

    void adicionar_funcionario(std::unique_ptr<Funcionario> funcionario);

    void print_relatorio() const;

    Venda novo_atendimento(
        const Cliente &cliente,
        const std::string &nome_funcionario,
        const std::string &descricao,
        const double valor);

private:
    Gerente gerente;
    std::vector<std::unique_ptr<Funcionario>> funcionarios;
};

#endif
