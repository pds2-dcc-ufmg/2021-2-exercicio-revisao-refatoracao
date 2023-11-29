#include "Venda.hpp"

Venda::Venda(string nomeCliente, Especialista* especialista, string descricao, double valor):
    _nomeCliente(nomeCliente), _especialista(especialista), _descricao(descricao), _valor(valor) {
    _especialista->comissao(_valor);
    _especialista->novoAtendimento();
}

Venda::Venda(Venda& venda):
    Venda(venda._nomeCliente,
          venda._especialista,
          venda._descricao,
          venda._valor) {}

void Venda::print() const {
    std::cout <<
    "Especialista: " << _especialista->getNome() <<
    " Cliente: "     << _nomeCliente              <<
    " Descricao: "   << _descricao                << endl;
}
