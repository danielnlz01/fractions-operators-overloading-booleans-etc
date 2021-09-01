#include <vector>
#include <iostream>

using namespace std;

class Fraccion
{
	private:
		int numerador;
		int denominador;

	public:
		Fraccion(int numerador = 0, int denominador = 1)
		{
			this->numerador = numerador;
			this->denominador = denominador;
		}

		Fraccion(const Fraccion &f)
		{
      numerador = f.numerador;
    	denominador = f.denominador;
		}

 	void mcd()
 	{
		int u = numerador;
    int v = denominador;
    int r;
    while(v!=0)
		{
      r = u % v;
      u = v;
      v = r;
  	}     
		numerador /= u;
    denominador /= u;
	}

  bool operator < (const Fraccion &fraccion)
  {
    double f1, f2; 
    f1 = (double)numerador / (double)denominador;
    f2 = (double)fraccion.numerador / (double)fraccion.denominador;
    return f1 < f2;
  }

  bool operator <= (const Fraccion &fraccion)
  {
		double f1, f2;
    f1 = (double)numerador / (double)denominador;
    f2 = (double)fraccion.numerador / (double)fraccion.denominador;
    return f1 <= f2;
  }

  bool operator > (const Fraccion &fraccion)
  {
    double f1, f2;
    f1 = (double)numerador / (double)denominador;
    f2 = (double)fraccion.numerador / (double)fraccion.denominador;
    return f1 > f2;
  }

  bool operator >= (const Fraccion &fraccion)
  {
    double f1, f2;
    f1 = (double)numerador / (double)denominador;
    f2 = (double)fraccion.numerador  /(double)fraccion.denominador;
    return f1 >= f2;
  }
  bool operator == (const Fraccion &fraccion)
  {
    double f1, f2;
    f1 = (double)numerador / (double)denominador;
    f2 = (double)fraccion.numerador / (double)fraccion.denominador;
    return f1 == f2;
  }

  bool operator != (const Fraccion &fraccion)
  {
    double f1, f2;
    f1 = (double)numerador / (double)denominador;
    f2 = (double)fraccion.numerador / (double)fraccion.denominador;
    return f1 != f2;
  }

  Fraccion operator + (const Fraccion &fraccion)
  {
    Fraccion fraccionfinal;
    fraccionfinal.denominador = denominador * fraccion.denominador;
    fraccionfinal.numerador = ((fraccionfinal.denominador / denominador) * numerador) + (fraccionfinal.denominador / fraccion.denominador) * fraccion.numerador;
    fraccionfinal.mcd();
    return fraccionfinal;
  }
  
  Fraccion operator - (const Fraccion &fraccion)
  {
    Fraccion fraccionfinal;
    fraccionfinal.denominador = denominador * fraccion.denominador;
    fraccionfinal.numerador = ((fraccionfinal.denominador / denominador) * numerador) - ((fraccionfinal.denominador/fraccion.denominador) * fraccion.numerador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }

  Fraccion operator * (const Fraccion &fraccion)
  {
    Fraccion fraccionfinal;
    fraccionfinal.numerador = numerador * fraccion.numerador;
    fraccionfinal.denominador = denominador * fraccion.denominador;
    fraccionfinal.mcd();
    return fraccionfinal;
  }

  Fraccion operator / (const Fraccion &fraccion)
  {
    Fraccion fraccionfinal;
    fraccionfinal.numerador = numerador * fraccion.denominador;
    fraccionfinal.denominador = denominador * fraccion.numerador;
    fraccionfinal.mcd();
    return fraccionfinal;
  }

  Fraccion operator += (const Fraccion &fraccion)
  {
		int denominador1, denominador2;
    denominador1 = this-> denominador;
    denominador2= fraccion.denominador;
    denominador = denominador1 * denominador2;
    numerador = ((denominador / denominador1) * this->numerador) + ((denominador / denominador2) * fraccion.numerador);
    Fraccion fraccionfinal(numerador, denominador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }

  Fraccion operator -= (const Fraccion &fraccion)
  {
		int denominador1, denominador2;
    denominador1 = this-> denominador;
    denominador2 = fraccion.denominador;
    denominador = denominador1 * denominador2;
    numerador = ((denominador / denominador1) * this->numerador) - ((denominador / denominador2) * fraccion.numerador);
    Fraccion fraccionfinal(numerador, denominador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }
  
  Fraccion operator *= (const Fraccion &fraccion)
  {
    numerador = this->numerador * fraccion.numerador;
    denominador = this->denominador * fraccion.denominador;
    Fraccion fraccionfinal(numerador, denominador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }
  
  Fraccion operator /= (const Fraccion &fraccion)
  {
    numerador = this-> numerador * fraccion.denominador;
    denominador = this-> denominador * fraccion.numerador;
    Fraccion fraccionfinal(numerador, denominador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }
  
  Fraccion operator ++()
  {
    Fraccion inicial(1,1);
    numerador = this-> numerador + inicial.numerador * this-> denominador;
    Fraccion fraccionfinal(numerador, denominador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }

  Fraccion operator --()
  {
    Fraccion inicial(1,1);
    numerador = this-> numerador - inicial.numerador * this-> denominador;
    Fraccion fraccionfinal(numerador, denominador);
    fraccionfinal.mcd();
    return fraccionfinal;
  }

  friend ostream& operator<<(ostream& salida, const Fraccion & fraccion);
};

ostream& operator<<(ostream& salida, const Fraccion & fraccion)
{
	salida << fraccion.numerador << "/" << fraccion.denominador;
	return salida;
}