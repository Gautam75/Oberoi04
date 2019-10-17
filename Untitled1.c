#include<stdio.h>
#include<time.h>
#include <unistd.h>
#include <stdlib.h>
 
int main()
{
  time_t now;
  struct tm *tm_now;
  int hours,min,sec;
  now=time(NULL);   //initialize time with zero
  tm_now=localtime(&now);
  hours=tm_now->tm_hour;
  min=tm_now->tm_min;
  sec=tm_now->tm_sec;
  printf("time is:- %d:%d:%d",hours,min,sec);
  printf("time is:- %d%d%d",sec ,min,hour);

while(1)
    {
        //clear output screen
        system("clear");
         
        //print time in HH : MM : SS format
        printf("%02d : %02d : %02d ",hour,min,sec);
         
         //clear output buffer in gcc
        fflush(stdout);
         
         //increase second
        sec++;
 
        //update hours, min and sec
        if(sec==60){
            min+=1;
            sec=0;
        }
        if(min==60){
            hours+=1;
            min=0;
        }
        if(hours==24){
            hour=0;
            min=0;
            sec=0;
        }
         
        sleep(1);   //wait till 1 second
    }
 
    return 0;
  }

