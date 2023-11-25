#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	string _nome;
	string _endereco;
	string _cep;
	
	public:
		string get_nome(){
            return _nome;            
        }

        string get_endereco(){
            return _endereco;            
        }

        string get_cep(){
            return _cep;            
        }


		void set_nome(string s){
            _nome = s;        
        }

        void set_endereco(string s){
            _endereco = s;          
        }

        void set_cep(string s){
            _cep = s;   
        }
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
