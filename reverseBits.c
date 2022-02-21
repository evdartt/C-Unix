// Evan Dartt
// 12/2/2019
// Assignment 5 part 3 (bonus)

#include <stdio.h>

void displayBits(unsigned int value);
unsigned int reverseBits(unsigned int value);

int main(void)
{
  unsigned int x;

  printf("%s", "Enter a non-negative int: ");
  scanf("%u", &x);

  printf("\nThe Bits of %u = ", x);

  displayBits(x);

  x = reverseBits(x);

  printf("\nThe non-negative int in reverse = %u", x);
  printf("\nThe Bits of %u = ", x);

  displayBits(x);

  printf("\n");

} 



//display bits of unsigned int value
void displayBits(unsigned int value)
{
  //define displayMask and left shift 15 bits
  unsigned int displayMask = 1 << 15; 
  unsigned int i;
  //loop through bits
  for (i = 1; i <= 16; ++i) 
  {
    putchar(value & displayMask ? '1' : '0');
    value <<= 1; //shift value left by 1
  } 
} 


//bits of unsigned int value in reverse order
unsigned int reverseBits(unsigned int value)
{
  unsigned mask = 1;
  unsigned temp = 0;
  int i;
  for(i = 0; i <= 15; i++)
  {
    temp <<= 1; //shift temp left by 1
    temp |= (value & mask);
    value >>= 1; //shift value right by 1
  }
  return temp;
  print("\n");
} 
