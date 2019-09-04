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

int main(){
    Pedido *cli;
    cli = new Pedido();
    cli->setValorTotal(1.5);
    cout << cli->getValorTotal() << " " << Pedido::qtdPedidos << endl;
    delete cli;
    return 0;
}
