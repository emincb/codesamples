#include <stdio.h>

int main(){


int sayac,sayac1;
double sayi;
printf("Sayiyi gir.\n ");
scanf("%lf",&sayi);

while(sayi >= 1){
    sayi = sayi/10;    
    sayac++;
    sayac1++;        
}     
for(sayac1=sayac1;sayac1-1 > 0 ;sayac1--){
    sayi *= 10;
}
int mod;
for(sayac1=sayac1;sayac>0;sayac--){
    mod=(int)sayi%10;
    sayi/=10;
    
    switch(mod){
        
        case 0: printf("0");continue;
        case 1: printf("1");continue;
        case 2: printf("2");continue;
        case 3: printf("3");continue;
        case 4: printf("4");continue;
        case 5: printf("5");continue;
        case 6: printf("6");continue;
        case 7: printf("7");continue;
        case 8: printf("8");continue;
        case 9: printf("9");continue;
    }
    

}printf("\n");
system( "PAUSE" );

}
	

