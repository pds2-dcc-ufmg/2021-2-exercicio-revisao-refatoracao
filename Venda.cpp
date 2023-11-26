#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

void Venda::print(){
        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
}

Venda::Venda(_VALOR,_descricao,_esp, _cliente):VALOR(_VALOR), descricao(_descricao), esp(_esp), cliente(_cliente);