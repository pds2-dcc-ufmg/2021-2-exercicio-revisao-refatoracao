#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:
    double VALOR;
    std::string descricao, cliente;
    Funcionario esp;
    Venda(){};
    Venda(double valor,std::string descricao,std::string cliente, Funcionario esp);

    void print();

};

#endif
