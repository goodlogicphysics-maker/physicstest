#include <iostream>

const double g = 9.8;

class PhysicalObject
{
private:
public:
  double calcGravity(double* height,double time);
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
  double time;
  std::cout << "Write object downing time -> ";
  std::cin >> time;
  PhysicalObject objGravity;
  objGravity.isGravObj = true;
  while(i <= time)
  {
    objGravity.calcGravity(ptrHeight,i);
    std::cout << "Height -> " << height << std::endl;
    std::cout << "Time -> " << i << std::endl;
    i = i + 1.0;
  }
  return 0;
}

double PhysicalObject::calcGravity(double* const ptrHeight,double time)
{
  if(isGravObj)
  {
    *ptrHeight = *ptrHeight - (0.5*g*time*time);
    return *ptrHeight;
  }
  else
  {
    return 1;
  }
  return 0;
}