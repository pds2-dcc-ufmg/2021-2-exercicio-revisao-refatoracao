# Exercício de Revisão e Refatoração

Alterações Feitas

No arquivo Cliente.cpp

• Removi os includes das bibliotecas iostream e string, visto que ambas estão contidas no arquivo .hpp.
• E fiz as adaptações provenientes das mudanças no .hpp.

No arquivo Cliente.hpp

• Adicionei a biblioteca iostream, já que seria feito um include dessa biblioteca no Cliente.cpp.
• Removi o using namespace std e adicionei o std::, nos locais necessários.
• Troquei o nome da função que faz a impressão de print para imprime_Cliente, a variável nome de NOME para nome_cliente, Cep para cep_cliente e endereco para endereco_cliente.

No arquivo Especialista.cpp

• Removi o using namespace std e adicionei o std::, nos locais necessários.
• Removi a variável percWanda que não tinha uso e possuía o mesmo valor da variável perc, esta última que seu nome foi alterado para PORCENTAGEM_COMISSAO.
• Removi o public: que estava duplicado.
• Troquei o nome da função comissão para valor_Comissao, e nela extingui a variável c que armazenava o valor da multiplicação de ValorVenda e PORCENTAGEM_COMISSAO, e no lugar de retorná-la retornei à multiplicação direto.
• Mudei o nome da função print para imprime_Especialista, e em seu funcionamento primeiramente imprimo [Especialista] e chamo a função Funcionario::imprime_Funcionario().

No arquivo Funcionario.hpp

• Removi o using namespace std e adicionei o std::, nos locais necessários.
• Alterei as o nome das variáveis SalarioBase = salariobase_funcionario, IDADE = idade_funcionario, nome = nome_funcionario e rgFunc = rg_funcionario.
• Mudei o nome da função print para imprime_Funcionario, e sua implementação foi alterada, ela imprime primeiramente [Funcionario] com uma quebra de linha e na linha seguinte imprime idade_funcionario, rg_funcionario, nome_funcionario e salariobase_funcionario, nesta ordem e todos separado por uma quebra de linha e com uma identação um pouco a direita. Ela também é utilizada para fazer as impressões dos dados do Especialista.
• Foi feita a remoção da função print_oi que não era necessária para o código.

No arquivo Gerente.hpp

• Removi o using namespace std e adicionei o std::, nos locais necessários.
• Alterei o nome da variável global BONIFICACAO para VALOR_BONIFICACAO.
• Transformei a classe Gerente numa subclasse de Funcionario, portanto as variáveis de Nome, Idade, Rgfunc e Salario base foram herdadas de Funcionarios tornando desnecessário a definição delas.
• Mudei o nome da função print para imprime_Gerente, e em seu funcionamento removi a chamada da função Funcionario::imprime_Funcionario() e fiz a impressão pela função imprime gerente mesmo.
• Removi a variável x que não possuía utilidade.

No arquivo Venda.hpp

• Removi o using namespace std e adicionei o std::, nos locais necessários.
• Troquei o nome da variável VALOR para valor_venda.
• Mudei o nome da função print para imprime_Venda, e concatenei a impressão do nome do especialista a do cliente separando por um "–".
• Removi o código comentado que não possui utilidade.

No arquivo main.cpp
• Removi a impressão da venda 06 que estava duplicada.
• Alterei o nomes das variáveis que foram alteradas nas funções.
