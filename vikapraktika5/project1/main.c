#include <8051.h>

void main()
{	
	unsigned int i;
	unsigned char *str="*7410852#963DCBA";

	P0 = 0x38;
	P0 = 0x80;
	P2 = 0x1;
	P2 = 0x0;

	do
	{
		i = -1;
		
P1 = 0xEF; //1
		if(P1 == 0xEE) i = 15;
		if(P1 == 0xED) i = 14;
		if(P1 == 0xEB) i = 13;
		if(P1 == 0xE7) i = 12;
		
P1 = 0xDF; //2
		if(P1 == 0xDE) i = 11;
		if(P1 == 0xDD) i = 10;
		if(P1 == 0xDB) i = 9;
		if(P1 == 0xD7) i = 8;
		


P1 = 0xBF;//3
		if(P1 == 0xBE) i = 7;
		if(P1 == 0xBD) i = 6;
		if(P1 == 0xBB) i = 5;
		if(P1 == 0xB7) i = 4;

P1 = 0x7F;//4
		if(P1 == 0x7E) i = 3;
		if(P1 == 0x7D) i = 2;
		if(P1 == 0x7B) i = 1;
		if(P1 == 0x77) i = 0;
		if(i != -1)
		{
			P0 = str[i];
			P2 = 0x3;
			P2 = 0x2;
		}
	}
  while(1);
}
