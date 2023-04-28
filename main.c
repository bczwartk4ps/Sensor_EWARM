#include <stdint.h>

uint32_t conditional_add(uint32_t a, uint32_t b, uint32_t condition);

int main()
{
  int a = 1;
  int b = 2;
  int condition = 12;
  
  conditional_add(a, b, condition);
  
  processValue(a, b);
    
  return 0;
}
