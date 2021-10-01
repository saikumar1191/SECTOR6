#include <stdio.h> // standar input and output

#include <stdlib.h> //include library like system pause

int main (void) // we must write this when we create c application
{
float rupiah, dolar = 11400, euro = 15489 , real = 2966,ringgit = 3603 ,duit; //variabel so i see the value currency value from internet
int b; //variable integer
printf (“Currency Converter from Rupiah \n “); //show output
printf (“chose currency \n”);//show output
printf (” 1 = dolar , 2 = euro , 3 = real , 4 = ringgit \n”);//show output
scanf_s(“%d”,&b);// input, chose from 1,2,3 or 4
printf (“Masukan Nilai Rupiah = “); // show output
scanf_s (“%f”,&rupiah); //input rupiah value
switch (b) //control flow by variable b
{
case 1 : // chose 1
duit = rupiah/dolar; //the opeartor for calculate the currency
printf(“Hasil Konversi : %.2f \n”,duit);//show output dolar value
break;

case 2 : // chose 2
duit = rupiah/euro; //calculate the currency
printf(“Hasil Konversi : %.2f \n”,duit); //show output euro currency value
break;

case 3 : //chose 3
duit = rupiah/real; //calculate the currency
printf(“Hasil Konversi : %.2f \n”,duit); //show output real currency value
break;

case 4 : //chose 4
duit = rupiah/ringgit; //calculate the currency
printf(“Hasil Konversi : %.2f \n”,duit); //show output rupiah currency value
break;

default : printf(“salah”); //default
break;
}
system (“pause”);
return (0);
}