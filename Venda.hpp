
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda
{
private:
    double valor;
    string descricao;
    Especialista esp;
    string cliente;

public:
    void print()
    {
        std::cout << "Especialista: ";
        cout << esp.getNome();

        std::cout << " Cliente: ";
        cout << cliente;
    }
    double getValor()
    {
        return valor;
    }
    void setValor(double valor)
    {
        this->valor = valor;
    }
    Especialista getEsp()
    {
        return esp;
    }
    void setEsp(Especialista esp)
    {
        this->esp = esp;
    }

    string getDescricao()
    {
        return descricao;
    };
    void setDescricao(string descricao)
    {
        this->descricao = descricao;
    };
    string getCliente()
    {
        return cliente;
    };
    void setCliente(string cliente)
    {
        this->cliente = cliente;
    };
};

#endif
