#include "Venda.hpp"

Venda::Venda(std::string cliente, 
          Especialista especialista, 
          std::string descricao, 
          double valor) {
  this->_cliente = cliente;
  this->_especialista.setNome(especialista.getNome());
  this->_especialista.setIdade(especialista.getIdade());
  this->_especialista.setRgFunc(especialista.getRgFunc()),
  this->_especialista.setSalarioBase(especialista.getSalarioBase()),
  this->_especialista.setEspecialidade(especialista.getEspecialidade());
  this->_descricao = descricao;
  this->_valor = valor;
  especialista.novo_atendimento();
  }

void Venda::imprime_venda() {
  std::cout << "Especialista: "
    << _especialista.getNome() << std::endl
    << " Cliente: " << _cliente << std::endl;
}
