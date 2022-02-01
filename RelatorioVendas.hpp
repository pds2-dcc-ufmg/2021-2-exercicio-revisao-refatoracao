#ifndef RELATORIOVENDAS_HPP
#define RELATORIOVENDAS_HPP

#include "Venda.hpp"
#include <vector>

class RelatorioVendas{
 public:
    void addVenda (Venda v);
    void imprimeVenda();

 private:
    std::vector <Venda> historicoVendas;
};



#endif