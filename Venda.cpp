#include "Venda.hpp"

void Venda::print() {

    cout << "Especialista: " << _especialista->_nome;

    cout << " Cliente: " << _cliente._nome;

    cout << " Descricao: " << _descricao << endl;
}