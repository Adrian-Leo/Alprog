#include<stdio.h>

int main(){
    int hours_parked;
    int fee, int days;

    printf("Enter Numbers of hours parked : ");
    scanf("%d",&hours_parked);

    //1. ketika kurang dari 1 jam , fee = 3000 
    //2. per jam = 1000/jam .
    //3. ketika lebih 24 jam, total fee = total fee - 10000
    //fee = 3000 + (hours_parked * 1000) + (days * 24000) - (days * 10000)
    
    if(hours_parked<=1){
        fee=3000;
    }else if(hours_parked>1 && hours_parked<=24){
        fee=3000 + (hours_parked * 1000);
    }else if(hours_parked>24){
        days = 1;
        fee=3000 + (hours_parked * 1000) + (days * 24000) - (days * 10000);
    }

}
