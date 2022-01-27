#ifndef _MANAGER_H
#define _MANAGER_H

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"

#include <vector>

class Manager{ //Classe que organiza os dados dos clientes, especialistas e dos gerentes, alem de executar as vendas
    public:
        Manager(){};

        void add_cliente(std::string nome, std::string endereco, std::string cep);
        void add_especialista(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase, std::string especialidade);
        void add_venda(Cliente& cliente,Especialista& esp, std::string descricao, double valor);
        void add_gerente(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase);

        void relatorioClientes();
        void relatorioVendas();
        void relatorioFuncionarios();

        std::vector <Cliente> clientes; //Nao ha problema dos atributos serem publicos sendo que todos os seus elementos sao privados
        std::vector <Especialista> especialistas;
        std::vector <Venda> vendas;
        std::vector <Gerente> gerentes;

};


#endif