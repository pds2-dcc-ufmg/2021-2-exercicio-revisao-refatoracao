#include <iostream>

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

Funcionario::Funcionario(std::string nome, std::string idade, double SalarioBase, int RegistroFuncional, int NumeroDeAtendimentos, double Comissao)
{
    this->_nome = nome;
    this->_idade = idade;
    this->_SalarioBase = SalarioBase;
    this->_RegistroFuncional = RegistroFuncional;
    this->_NumeroDeAtendimentos = NumeroDeAtendimentos;
    this->_Comissao = Comissao;
}

int Funcionario::getRegistroFuncional() { return _RegistroFuncional; }

double Funcionario::getSalarioBase() { return _SalarioBase; }

std::string Funcionario::getNome() { return _nome; }

std::string Funcionario::getIdade() { return _idade; }

int Funcionario::getNumeroDeAtendimentos() { return _NumeroDeAtendimentos; }

double Funcionario::getComissao() { return _Comissao; }

void Funcionario::setRegistroFuncional(int RegistroFuncional) { this->_RegistroFuncional = RegistroFuncional; }

void Funcionario::setSalarioBase(double SalarioBase) { this->_SalarioBase = SalarioBase; }

void Funcionario::setNome(std::string Nome) { this->_nome = Nome; }

void Funcionario::setIdade(std::string Idade) { this->_idade = Idade; }

void Funcionario::setNumeroDeAtendimentos(int NumeroDeAtendimentos) { this->_NumeroDeAtendimentos = NumeroDeAtendimentos; }

void Funcionario::setComissao(double Comissao) { this->_Comissao = Comissao; }

// Soma numero de atendimentos de um funcionario.
void Funcionario::SomaNumeroDeAtendimentos(int NumeroDeAtendimentos) { this->_NumeroDeAtendimentos += NumeroDeAtendimentos; }

// Soma comissao de um funcionario.
void Funcionario::SomaComissao(double Comissao) { this->_Comissao += Comissao; }

void Funcionario::print()
{
    std::cout << "[Funcionario]" << std::endl
              << "  Idade: " << getIdade() << std::endl
              << "  RGFunc: " << getRegistroFuncional() << std::endl;
}