#include<stdio.h>

int sort(int n);

int main(){
     printf("Введите число\n");
     int n;
      if(scanf("%d", &n)!=1 || n<0 || (long int)n!=n){
       printf("Мы так не умеем, пока");
       return -1;
      }
     printf("%d\n",sort (n));
     return 0;
}

int sort(int n){
    int itog=0;
    int j;
    int d=n;
    for (int i=1;i<=9;i++){
      j=n;
      while(j!=0){
       if(j%10==i){
	itog*=10;
        itog+=j%10;
       }
       if(itog>0 && itog<10){
        while(d!=0){
          if(d%10==0){
           itog*=10;
          }
	  d/=10;
        }
      }
    j/=10;
      }
    }
return itog;
}
