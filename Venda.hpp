
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda
{

public:
    double valor;
    string descricao;
    Especialista especialista;
    Cliente cliente;

    Venda(Cliente cli, Especialista esp, string descricao, double valor) : cliente(cli), especialista(esp)
    {
        this->descricao = descricao;
        this->valor = valor;

        esp.calculaComissao(valor);
        esp.numAtendimentos++;
    }

    void imprimeInformacoes()
    {

        std::cout << "Especialista: " << especialista.nome
                  << " Cliente: " << cliente.getNome()
                  << " Descricao: " << descricao << endl;
    }
};

#endif
