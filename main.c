

#include "Port.h"

extern const Port_ConfigType Port_Configuration[];
int main()
{
   *((unsigned int*)0x400FE608U)=0x3FU;
   
  Port_Init(Port_Configuration);
  
  *((unsigned int*)0x400253FCU)=0x03U;

  
  
  
  return 0;
}
