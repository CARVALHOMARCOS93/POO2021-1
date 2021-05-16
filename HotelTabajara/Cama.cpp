//
//  Cama.cpp
//  HotelTabajara
//
//  Created by Marcos Carvalho on 15/05/21.
//

#include "Cama.hpp"
Cama::Cama(string t)
{
    tipo = t;
}

string Cama::getTipo()
{
    return tipo;
}
