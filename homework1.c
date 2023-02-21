// PARKING FEES PROGRAM
// ADRIAN LEO PRADANA 2106718344
// 18 FEBRUARI 2023
// ASSIGNMENT 1B
// VERSION 1.0

#include <stdio.h>

void menu();

void receipt(int enter_hours,int enter_minutes, int exit_hours, int exit_minutes, int total1, int total2, int charge,int days);

int fees_system(int enter_hours_parked,int enter_minutes_parked,int exit_hours_parked,int exit_minutes_parked,int enter_days_parked,int exit_days_parked);

int main() {

    int choose;
    int enter1,enter2,enter3,exit1,exit2,exit3;

    while(choose != 2){
        printf("====================================================\n");
        printf("1. ENTER FTUI PARKING SYSTEM \n");
        printf("2. EXIT \n");
        printf("INPUT : ");
        scanf("%d",&choose);
        printf("====================================================\n");
        switch (choose)
        {
        case 1:
            menu();

            printf("Enter dates of entering parked (1-31): ");
            scanf("%d", &enter3);

            printf("Enter the number of Enter hours parked : ");
            scanf("%02d:%02d", &enter1,&enter2);

            // printf("Enter the number of Enter minutes parked (0-60): ");
            // scanf("%d", &enter2);

            printf("Enter dates of exiting parked (1-31): ");
            scanf("%d", &exit3);

            printf("Enter the number of Exit hours parked : ");
            scanf("%02d:%02d", &exit1,&exit2);

            // printf("Enter the number of Exit minutes parked (0-60): ");
            // scanf("%d", &exit2);

           

            fees_system(enter1,enter2,enter3,exit1,exit2,exit3);

            break;
       
        default:
            printf("====================================================\n");
            printf("\n\tTHANK YOU FOR USING OUR SYSTEM \n");
            printf("\n====================================================\n");

            return 0;

            break;
        }
    }

}

void menu(){
    printf("====================================================\n");
    printf("\t\tFTUI SMART PARKING\t\n");
    printf("====================================================\n");
}


void receipt(int enter_hours,int enter_minutes, int exit_hours, int exit_minutes, int total1, int total2, int charge,int days){
    printf("\n====================================================\n");
    printf("\t\tFTUI PARKING FEES\t\n");
    printf("====================================================\n");
    printf("\tEntering Parking Times : %02d:%02d WIB \n",enter_hours,enter_minutes);
    printf("\tExiting Parking Times : %02d:%02d WIB \n",exit_hours,exit_minutes);
    printf("====================================================\n");
    printf("\t%d Days %d Hours %d Minutes\n\n",days,total1,total2);
    printf("\tThe parking fee is: Rp. %d\n", charge);
    printf("======================================================\n");
}

int fees_system(int enter_hours_parked,int enter_minutes_parked,int enter_days_parked,int exit_hours_parked,int exit_minutes_parked,int exit_days_parked){
   
    int total_hours_parked, total_minutes_parked,total_days_parked;
    int fee;

    total_hours_parked = exit_hours_parked - enter_hours_parked;
    total_minutes_parked = exit_minutes_parked - enter_minutes_parked ;
    total_days_parked = exit_days_parked - enter_days_parked;


    if(total_minutes_parked < 0){
        total_minutes_parked *= -1;
    }else if(total_minutes_parked == 0){
        fee = 0;
    }else if(total_minutes_parked > 60) {
        printf("!!!!!!!! INVALID MINUTES INPUT !!!!!!!!");
        main();
    }


    if (total_hours_parked >=0 && total_hours_parked <= 1 ) {
        fee = 3000;
    }
    if(total_hours_parked > 1 && total_hours_parked <= 24) {
        fee = 3000 + (total_hours_parked  * 1000);
    }
    // else {
    //     printf("\nINVALID HOURS INPUT\n");
    //     main(); 
    // }

    if(total_days_parked >= 1){
           fee = 3000 + (total_hours_parked * 1000) + (total_days_parked * 24000) - (total_days_parked * 10000);
            if(total_hours_parked < 0){
                total_hours_parked = 24 + total_hours_parked;
                total_days_parked -= 1;
                fee = 3000 + (total_hours_parked  * 1000);
                }

    } else if(total_days_parked < 0){
        printf("\nINVALID DAYS INPUT\n");
        main();
    }
    
    receipt(enter_hours_parked,enter_minutes_parked,exit_hours_parked,exit_minutes_parked,total_hours_parked,total_minutes_parked,fee,total_days_parked);

    
}



