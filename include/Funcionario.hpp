#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP



class Funcionario{

    protected:

        double _SalarioBase;
        std::string _idade;
        std::string _nome;
        int _RegistroFuncional;
        int _NumeroDeAtendimentos;
        double _Comissao;

    public:

        /**
		 * @brief Construtor padrao que inicializa todas as variaveis privadas da classe.
		 */
        Funcionario(std::string nome = "",
                    std::string idade = "",
                    double SalarioBase = 0,
                    int RegistroFuncional = 0,
                    int NumeroDeAtendimentos = 0,
                    double Comissao = 0);



        //Métodos Getters e Setters dos atributos privados da classe.
        int getRegistroFuncional();
        double getSalarioBase();
        std::string getNome();
        std::string getIdade();
        int getNumeroDeAtendimentos();
        double getComissao();

        void setRegistroFuncional(int RegistroFuncional);
        void setSalarioBase(double SalarioBase);
        void setNome(std::string Nome);
        void setIdade(std::string Idade);
        void setNumeroDeAtendimentos(int NumeroDeAtendimentos);
        void setComissao(double Comissao);
        

        //Métodos para calculo de comissao.
        void SomaNumeroDeAtendimentos(int NumeroDeAtendimentos);
        void SomaComissao(double Comissao);

        /**
		 * @brief Imprime na tela os dados de um Funcionario cadastrado 
		 */
        void print();

};

#endif