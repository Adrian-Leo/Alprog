// SCORING PROGRAM
// ADRIAN LEO PRADANA 
// MAHIRA AISHA LARASATI
// 16 FEBRUARI 2023
// ASSIGNMENT 1A
// VERSION 1.0
#include<stdio.h>

int main(){
    int score,n,counter,result =0;
    float average =0;
    
    for(counter = 0 ; counter < 7; counter++){
        printf("input your score -");
        printf("%d",counter+1);
        printf("\n");
        scanf("%d",&score);
        result += score;
        
    }
    average = result / 7;
    printf("Average score is ");
    printf("%0.2f",average);

    if(average >= 85){
        printf("\n your score is A \n");
    }
    else if(average >= 80 && average < 85){
        printf("\n your score is B \n");
    }
    else  if(average >= 75 && average < 80){
        printf("\n your score is C \n");
    }
    else if(average >= 70 && average < 75 ){
        printf("\n your score is D \n");
    }
     else{
        printf("\n your score is E \n");
    }
    return 0;
}