#include "Venda.hpp"

void Venda::print () {
    std::cout << "Especialista: " << esp.getName();

    std::cout << " Cliente: " << this->cliente;
}

void Venda::setEspecialista (Especialista esp) {
    this->esp.setEspecialidade (esp.getEspecialidade ());
    this->esp.setName (esp.getName ());
    this->esp.setIdade (esp.getIdade ());
    this->esp.setSalarioBase (esp.getSalarioBase ());
    this->esp.setRgFunc (esp.getRgFunc ());
}

double Venda::getValor () {
    return this->valor;
}

std::string Venda::getDescricao () {
    return this->descricao;
}

Venda::Venda (std::string cliente, 
              Especialista esp, 
              std::string descricao, 
              int valor) {

    this->cliente = cliente;
    this->setEspecialista(esp);
    this->descricao = descricao;
    this->valor = valor;
}
