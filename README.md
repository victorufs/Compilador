Linguagens Formais e Compiladores
Alunos: Emannuel Victor, Juarez Soares

================================
Analisador Léxico:

O arquivo "new4.l" representa a primeira versão do analisador léxico para sua compilação é necessário digitar o seguinte comando no shell:

flex new4.l
gcc lex.yy.c

Para sua execução basta digitar o seguinte comando

./a.out < arquivo.txt

onde "arquivo.txt" é o arquivo com a linguagem que deverá ser reconhecida pelo analisador lèxico

================================
Analisador Sintático:

O analisador léxico para a segunda parte foi modificado afim de se adaptar à concepção do Analisador Sintático, esse arquivo se chama agora: "anlexico.l"

O arquivo contendo as estruturas das árvores sintáticas é o: "arvore.h", lá, além das definições de estruturas das árvores estão os cabeçalhos de chamada de funções do arquivo de funções

O arquivo de funções é o: "arvore.c" este contém as funções que chamam as estruturas no arquivo .h

O arquivo .y chamado "analsint.y" representa a GLC da linguagem C-, este faz a conexão dos arquivos .c e .h e deve ter tokens definidas igual como no "anlexico.l".

Para compilar todo o conjunto de arquivos é necessário digitar os seguintes comando no shell:

bison -v -d -o analsint.c analsint.y

Este faz com que o bison gere novos arquivos .c e .h, o qual o .h deverá ser incluído no "anlexico.l";

flex -v -t anlexico.l > anlexico.c

Gera o Analisador Léxico no arquivo anlexico.c

Por fim, compilando tudio junto é gerado o analisador Sintático:

gcc analsint.c anlexico.c -o compilador

para abrir o analisador sintático basta: ./compilador.out

================================
Analisador Semântico:

O Analisador Semântico não foi implementado, sendo assim, o projeto foi implementado até o Analisador Sintático.
