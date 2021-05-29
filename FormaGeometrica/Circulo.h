#include "FormaGeometrica.h"


#ifndef Circulo_h
#define Circulo_h

class Circulo : public FormaGeometrica
{
		private: 
			float raio;
		public:
			void setRaio(float r);
			void calculaArea();
				
};

#endif