#include "FormaGeometrica.h"


#ifndef Retangulo_h
#define Retangulo_h

class Retangulo : public FormaGeometrica
{
		private:
			float base;
			float altura;
		public:
			void setBase(float b);
			void setAltura(float a);
			void calculaArea();
};

#endif