// TIME CONVERTING WIB TO GMT PROGRAM
// ADRIAN LEO PRADANA 2106718344
// MAHIRA AISHA LARASATI
// 16 FEBRUARI 2023
// ASSIGNMENT 1B
// VERSION 1.0

#include <stdio.h>
#include <time.h>
 

int main()
{
    time_t s, val = 1;
    struct tm* current_time;
 
    // time in seconds
    s = time(NULL);
 
    // to get current time
    current_time = localtime(&s);
 
    // print time in minutes,
    // hours and seconds
    printf("WIB TIMES : ");
    printf("\n %02d:%02d:%02d \n",
           current_time->tm_hour,
           current_time->tm_min,
           current_time->tm_sec);
 
    int GMT_hour1 = current_time->tm_hour - 6;
    int GMT_hour2 = current_time->tm_hour - 5;
    int GMT_hour3 = current_time->tm_hour - 4;
    int GMT_hour4 = current_time->tm_hour - 3 ;
    int GMT_hour5 = current_time->tm_hour - 2;
    int GMT_hour6 = current_time->tm_hour - 1;
    int GMT_hour8 = current_time->tm_hour + 1;

    int pilih;


    while( pilih != 8 ){
        
        printf("\n\n1. GMT 1  \n");
        printf("2. GMT 2  \n");
        printf("3. GMT 3  \n");
        printf("4. GMT 4  \n");
        printf("5. GMT 5  \n");
        printf("6. GMT 6  \n");
        printf("7. GMT 8  \n");
        printf("\n CHOOSE TIME CONVERTER : ");

        scanf("%d",&pilih);
    
        switch (pilih)
        {
            case 1 :
            printf("GMT TIMES 1 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour1,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        case 2 :
            printf("GMT TIMES 2 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour2,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        case 3 :
            printf("GMT TIMES 3 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour3,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        case 4 :
            printf("GMT TIMES 4 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour4,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        case 5 :
            printf("GMT TIMES 5 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour5,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        case 6 :
            printf("GMT TIMES 6 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour6,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        case 7 :
            printf("GMT TIMES 8 : ");
            printf("\n %02d:%02d:%02d \n",
            GMT_hour8,
            current_time->tm_min,
            current_time->tm_sec);
        break;
        default :
            printf("\n INVALID INPUT ");
            break;
        } 
    }
        return 0;
}