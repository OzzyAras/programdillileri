#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int zarAt(void)
{
int zar1,zar2,totalZar;
zar1=1+(rand()%6);
zar2=1+(rand()%6);
totalZar=zar1+zar2;
printf("Oyuncu %d + %d = %d atti\n",zar1,zar2,totalZar);
return totalZar;
}
int main()
{
 int sonuc,skor,total;
 srand(time(NULL));
 total=zarAt(); 
 
 switch (total)
{
case 2:
case 3:
case 12:
   sonuc=2;
break;
case 7:
case 11:
   sonuc=1;
break;
default:
   sonuc=0;

skor=total;
printf("Oyuncunun kazanacagi zar:%d\n",skor);
 break;   }      
    
  while(sonuc==0)  {
  	total=zarAt();
  	 
  if(total==skor)
  sonuc=1;
 
  else if(total==7)
  sonuc=2;
 } 
  if(sonuc==1)
 printf("Kazandiniz!\n");
  else
 printf("Kaybettiniz!\n");
 
 return 0; 
  }




