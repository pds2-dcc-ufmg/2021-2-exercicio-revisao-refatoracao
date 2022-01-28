#ifndef Especialista_HPP
#define Especialista_HPP

#include <string>
#include <iostream>

#include "Funcionario.hpp"

//As porcentagens ficam melhor como atributo

class Especialista : public Funcionario {
//Repetindo public. Atributos publicos, e falta um atributo para comisao.
    public:
	//As funções não devem ser definidas no contrato.
	std::string GetEspecialidade();
	double GetPerc();
	double GetComissao();
	double GetSalarioTotal();
	int GetNumAtendimentos();

	void SetEspecialidade(const std::string& especialidade);
	void SetPerc(double perc);
	void SetComissao(double valorVenda);
	void Inicializacao();
	void NovoAtendimento();
	void AcrescentaSalario();

	void print();

    private:
	std::string _especialidade;
	double _comissao;
	double _perc;
	int _numAtendimentos;
	double _salarioTotal;
};

#endif
