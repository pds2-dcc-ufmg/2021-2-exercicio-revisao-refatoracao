#include "Venda.hpp"

Venda::Venda(Cliente* _cliente,
            Especialista* _especialista,
            std::string _descricao,
            double _valor) {
    cliente = _cliente;
    especialista = _especialista;
    descricao = _descricao;
    valor = _valor;

    _especialista->adicionaComissao(valor);
    _especialista->numDeAtendimentos++;
}

void Venda::print() {
    std::cout   << "Especialista: "   << especialista->nome
                << " Cliente: "       << cliente->nome
                << " Descricao: " << descricao << std::endl;
}
