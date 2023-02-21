#include <stdio.h>

int main()
{
    int mincharge,entrydate,exitdate,entryhour,exithour,totalhour,totalcharge,entryminute,exitminute,date,entry,exit,totaltime;
    mincharge = 3000;

    printf("Enter your entry date!");
    scanf("%d",&entrydate);
    printf("Enter your exit date!");
    scanf("%d",&exitdate);
    printf("Enter your entrytime to the parking lot!\n");
    scanf("%02d:%02d",&entryhour,&entryminute);
    printf("Enter your exittime from the parking lot!\n");
    scanf("%02d:%02d",&exithour,&exitminute);
    entry = entryhour + entryminute;
    exit = exithour + exitminute;
    date = exitdate - entrydate;
    totaltime = exit - entry;

    if(totaltime>=1 && entrydate==exitdate) {
        totalcharge = mincharge+(totaltime/60)*1000;
    }else if(totaltime>=1 && entrydate<=exitdate){
        totalcharge=(mincharge+(totaltime/60)*1000)-(date*1000);
    }else if(entrydate>=exitdate){
        printf("Error");
    }
    else{
            totalcharge = 3000; 
    }

        printf("Your parking fee is Rp. %d !", totalcharge);

    return 0;
}