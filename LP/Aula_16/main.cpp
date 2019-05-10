#include <iostream>
#include <string>

#include "Produto.h"
#include "Item.h"

int main()
{
    Produto agua("Água", 2);

    Item item(agua,3);

    std:: cout << item.getTotal() << '\n';
    return 0;
}
