#include "FormaGeometrica.h"


#ifndef Triangulo_h
#define Triangulo_h

class Triangulo : public FormaGeometrica
{
		private:
			float l1;
			float l2;
			float l3;
		public:
			void setLadoUm(float l);
			void setLadoDois(float l);
			void setLadoTres(float l);
			void calculaArea();
};

#endif