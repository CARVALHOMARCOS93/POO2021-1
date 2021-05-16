//
//  Cama.hpp
//  HotelTabajara
//
//  Created by Marcos Carvalho on 15/05/21.
//

#ifndef Cama_hpp
#define Cama_hpp
#include <iostream>
using namespace std;
class Cama
{
private:
    string tipo;
public:
    Cama(string t);
    string getTipo();
};
#endif /* Cama_hpp */
