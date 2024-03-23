#include<stdio.h>
int main(){
    int num1 , num2 , sum;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    
    int a,b,c,d,e,f;
    a = num1/100;
    b = (num1%100)/10;
    c = num1%10;
    
    d = num2/100;
    e = (num2%100)/10;
    f = num2%10;
    
   int resultHundred;
    if(a  + d >= 10 ){
        int more_ten = a + d;
        int ten = more_ten /10 ;
        int bir = more_ten %10;
        resultHundred = ten + bir;
    }
    else {
        resultHundred = a + d ;
    }
    
    int resultOnlar;
    if(b + e >= 10 ){
        int more_ten = b + e;
        int ten = more_ten /10 ;
        int bir = more_ten %10;
        resultOnlar= ten + bir;
    }
    else {
        resultOnlar = b + e ;
    }
    int resultBirler;
    if(c + f >= 10 ){
        int more_ten = c + f;
        int ten = more_ten /10 ;
        int bir = more_ten %10;
        resultBirler = ten + bir;
    }
    else {
        resultBirler = c + f;
    }
    
    sum = resultHundred*100 + resultOnlar*10 + resultBirler;
    printf("Special Sum: %d",sum);
   
       
       return 0;
    
}
