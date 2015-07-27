#include <8051.h>
//sbit MB = TR0;
//sbit MC = TF0;

int main() {
//P1^7 = 1;
//P1.7 = 1;
P1_7 = 1;
TMOD = 0x02;
TH0 = 0xFA;
TL0 = 0x88;
TR0 = 1;
while (TF0 != 1) {
	P1_7 = ~P1_7;
	}
return 0;
}