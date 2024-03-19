#include <iostream>
using namespace std;

class Figura{
private:
    int b, h;
    float a;

public:
    Figura();
    Figura(int b, int h);
    void setArea(float a);
    float getArea();
};

/*
    Implementa los constructores y funciones de la clase Figura.
    El área NO se debe de asignar en el constructor de Figura, ÚNICAMENTE en el constructor individual de cada figura.
*/

/*
    Implementa la clase Cuadrado que hereda de Figura.
    Crear constructor de Cuadrado que herede del constructor de Figura.
    Asignar el área del cuadrado.
*/
  class Cuadrado :public Figura
  {
    public:
    Cuadrado(): Figura(){};
    Cuadrado (int b): Figura(b,b){
    setArea(b*b);
    };
    
  };
/*
    Implementa la clase Rectángulo que hereda de Figura.
    Crear constructor de Rectángulo que herede del constructor de Figura.
    Asignar el área del Rectángulo.
*/
class Rectangulo :public Figura
  {
    public:
    Rectangulo(): Figura(){};
    Rectangulo (int b, int h): Figura(b,h){
    setArea(b*h);
    };
  };
/*
    Implementa la clase Triángulo que hereda de Figura.
    Crear constructor de Triángulo que herede del constructor de Figura.
    Asignar el área del Triángulo.
*/

class Triangulo :public Figura
  {
    public:
    Triangulo(): Figura(){};
    Triangulo (int b, int h): Figura(b,h){
    setArea((b*h)/2);
    };
  };

int main () {

    Cuadrado s(5);
    cout << s.getArea() << endl; // 25
    Rectangulo r(5,5);
    cout << r.getArea() << endl; // 25
    Triangulo t(5, 10);
    cout << t.getArea() << endl; // 25
    return 0;
}
Figura:: Figura()
{ 
}
Figura :: Figura(int b, int h)
{

}
void Figura::setArea(float a)
{
  this->a= a;
}
float Figura :: getArea()
{
    return this->a;
}