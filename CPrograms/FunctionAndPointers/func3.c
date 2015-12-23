#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("\n I'm in main");
  italy();
  printf("\n I'm back in main\n");
  printf("\n");

}
italy()
{
  printf("\n I'm in italy");
  brazil();
  printf("\ni'm back in italy");
}
brazil()
{
  printf("\n I'm in brazil");
  Argentina();

}
Argentina()
{
  printf("\n I'm in Argentina");

}
