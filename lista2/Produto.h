#ifndef _PRODUTO_
#define _PRODUTO_
#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using namespace std;

class Produto{
    private:
        int codigo;
        string nome;
        string descricao;
        int quantidadeEstoque;
        float precoBase;
    public:
        static int qtdProdutos;

        Produto();
        ~Produto();

        int getCodigo();
        string getNome();
        string getDescricao();
        int getQuantidadeEstoque();
        float getPrecoBase();

        void setCodigo(int cod);
        void setNome(string nome);
        void setDescricao(string descricao);
        void setQuantidadeEstoque(int qtdEs);
        void setPrecoBase(float preco);


};

#endif
