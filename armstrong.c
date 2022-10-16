/*
Kullanıcıdan aldığınız bir sayının "Armstrong" sayısı olup olmadığını bulmaya çalışın.

Örnek olarak, Bir sayı eğer 4 basamaklı ise ve oluşturan rakamlardan herbirinin 4. kuvvetinin toplamı( 3 basamaklı sayılar için 3.kuvveti ) o sayıya eşitse bu sayıya "Armstrong" sayısı denir.

Örnek olarak : 1634 = 1^4 + 6^4 + 3^4 + 4^4

sayiyi al
dongu ile basamak sayisini bul(for da girilecek sayi kadar döneriz)

*/
#include <stdio.h>

int main(){ 
    int sayi;
    int basamak=0;
    int kalan=0;
    printf("sayi gir->");
    scanf("%d", &sayi);
    int sayi2 = sayi;
    int kalanListesi[100]={};
    int i=0;
    while(sayi>0){ 
        kalan=sayi%10;
        kalanListesi[i]=kalan;
        i+=1;
        sayi=sayi-kalan;
        sayi=sayi/10;
        basamak+=1;
    }
    printf("\nbasamak: %d\n",basamak);
    for(int j=0; j<basamak; j++){
        printf("\n%d. dizi elemani=%d\n",j+1,kalanListesi[j]);
    }
    int sonuc=1;
    int toplam=0;
     for(int j=0; j<basamak;j++){
        for(int k=0; k<basamak;k++){ 
            sonuc = sonuc* kalanListesi[j];
        }
        printf("sonuc:%d\n", sonuc);
        toplam=toplam+sonuc;
        sonuc=1;
     }
     printf("toplam:%d\n",toplam);
     if(toplam==sayi2){
        printf("%d sayisi armstrong sayidir.\n", sayi2);
     }
     else{
        
        printf("%d sayisi armstrong sayi degildir.\n", sayi2);
     }
    return 0;
}