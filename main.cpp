#include <iostream>

double fps = 60.0;
const double dt = 1.0/fps;
const double g = 9.8;

class PhysicalObject
{
private:
public:
  double calcGravity(double* const ptrHeight);
  bool isGravObj;
};

int main()
{
  double i = 0.0;
  double height;
  double* ptrHeight = 0;
  std::cout << "Write object that downing from height -> ";
  std::cin >> height;
  ptrHeight = &height;
  PhysicalObject objGravity;
  objGravity.isGravObj = true;
  
  while(0 <= height)
  {
    objGravity.calcGravity(ptrHeight);
    std::cout << "Height -> " << height << std::endl;
    std::cout << "Time -> " << i << std::endl;
    i += dt;
  }
  return 0;
}

double PhysicalObject::calcGravity(double* const ptrHeight)
{
  if(isGravObj)
  {
    
    *ptrHeight = *ptrHeight - (0.5*g*dt*dt);
    return *ptrHeight;
  }
  else
  {
    return 1;
  }
  return 0;
}