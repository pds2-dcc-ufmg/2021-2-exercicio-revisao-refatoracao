#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
        Venda(Especialista esp, Cliente c, const std::string& Descricao, double Valor);
        double Valor;
        std::string Descricao;
        Especialista especialista = Especialista("nome", 0, 0, 0, 0, "nada", 0);
        Cliente cliente = Cliente("nome", "endereco", "cep");
        void ImprimeVenda();
};

#endif
