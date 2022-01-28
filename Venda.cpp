#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"

int Venda::NumTotalServicos = 0;

Venda::Venda(string _cliente, Especialista *_esp, string _descricao, double _valor) {
    this->cliente = _cliente;
    this->esp = _esp;
    this->descricao = _descricao;
    this->valor = _valor;

   esp->computaAtendimento();
   esp->comissaoTotal += esp->comissao(valor);

   Venda::NumTotalServicos ++;
}

void Venda::print() {

    cout << "Especialista: " << esp->nome
    << " Cliente: " << cliente
    << " Descricao: " << descricao << endl;

}
