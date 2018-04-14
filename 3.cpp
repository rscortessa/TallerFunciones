#include<iostream>
#include<cmath>
int an(int n,int x1, int x2);
int main ()
{
  int n;
  int x1=1;
  int x2=1;
  std::cout<<"Sucesion de Fibonacci, escribe el numero de terminos"<<std::endl;
  std::cin>>n;
  an(n,x1,x2);
  return 0;
}
int an(int n,int x1, int x2)
{
  if(n>=0)
    {
      int ai=x1;
      int aj=x2;
      std::cout<<ai<<","<<aj<<",";
    }

  return an(n-1,x1+x2,x1+2*x2);
}

  
