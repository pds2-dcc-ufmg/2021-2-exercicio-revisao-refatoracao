#include "RelatorioVendas.hpp"

void RelatorioVendas :: addVenda (Venda v){
    historicoVendas.push_back(v);
}

void RelatorioVendas :: imprimeVenda (){
    for (Venda it : historicoVendas){
        std::cout << "Especialista: " << it.esp.nome 
        << " Cliente: " << it.cliente.nome 
        << " Descrição: " << it.descricao << std::endl;
    }
}