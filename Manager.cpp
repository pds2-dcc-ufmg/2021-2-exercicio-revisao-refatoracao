#include <string>
#include <iostream>
#include <iomanip>

#include "Manager.hpp"

void Manager::add_cliente(std::string nome, std::string endereco, std::string cep){ //add informacoes dos clientes

    this->clientes.push_back(Cliente(nome,endereco,cep));
}

void Manager::add_especialista(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase, std::string especialidade){ //add informacoes dos especialistas

    this->especialistas.push_back(Especialista(nome, idade, rgFunc, salarioBase, especialidade));
}

void Manager::add_gerente(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase){ //add informacoes dos gerentes

    this->gerentes.push_back( Gerente(nome, idade, rgFunc, salarioBase) );
}

void Manager::add_venda(Cliente& cliente,Especialista& esp, std::string descricao, double valor){ //add informacoes das vendas realizadas

    this->vendas.push_back( Venda (cliente, esp, descricao, valor));

    esp.comissao(valor);

}

void Manager::relatorioClientes(){ //Imprime as informacoes de todos os clientes
    for(auto it = this->clientes.begin(); it != this->clientes.end(); it++){

        it->print();
    }
}

void Manager::relatorioVendas(){ //Imprime as informacoes de todos os clientes

    std::cout << " \n \n           Relatorio das Vendas \n" << std::endl;
    for(auto it = this->vendas.begin(); it != this->vendas.end(); it++){

        it->print();
    }
}

void Manager::relatorioFuncionarios(){ //Imprime as informacoes de todos os funcionarios (Especialistas e clientes)
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    for(auto it = this->especialistas.begin(); it != this->especialistas.end(); it++){

        it->print();
    }

    for(auto it = this->gerentes.begin(); it != this->gerentes.end(); it++){

        it->bonificacao(this->vendas.size()); //Realiza a bonificacao dos gerentes antes de imprimir seus dados na tela
        it->print();
    }

}
