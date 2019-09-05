#include <iostream>
#include <string>
#include <vector>

#include "Cliente.h"
#include "Funcionario.h"
#include "Pedido.h"
#include "ItemDePedido.h"
#include "Produto.h"

using namespace std;

int Pedido::qtdPedidos = 0;
int Produto::qtdProdutos = 0;

int main(){
    Cliente *cli;
    Funcionario *fun;
    Pedido *ped;
    ItemDePedido *item;
    Produto * prod;
    fun = new Funcionario();
    fun->setNome("Geraldo");
    prod = new Produto();
    prod->setCodigo(1233);
    item = new ItemDePedido(prod);
    ped = new Pedido(fun, item);
    cli = new Cliente();
    cli->adicionarPedido(ped);
    cout << cli->getPedidos()->at(0)->getFuncionario()->getNome() << endl;
    delete cli;
    return 0;
}
