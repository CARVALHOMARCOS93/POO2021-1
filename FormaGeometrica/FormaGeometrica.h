#include <iostream>
using namespace std;


#ifndef FormaGeometrica_h
#define FormaGeometrica_h

class FormaGeometrica
{
	public:
		virtual void calculaArea()=0;
	protected:
		float area;	

		
};

#endif