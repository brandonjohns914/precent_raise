//
//  main.cpp
//  homework_1
//
//  Created by Brandon Johns on 9/20/17.
// class comp30
// class tues thurs 4:30-5:20 section: 07

//  Copyright © 2017 Brandon Johns. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdint.h>


void enableFlushAfterprintf()
{
    setvbuf(stdout,0, _IONBF, 0);
    setvbuf(stdin, 0, _IONBF, 0);
}

int main(void)
{
    enableFlushAfterprintf();
    
    int currenthr =0;
    int userpercentraise=0;
    
    printf("enter your current hourly rate:   \n");
    scanf("%i", &currenthr);
    
    printf("enter a percent raise from 1-10:  \n");
    scanf("%i", &userpercentraise);
    
    
    if(userpercentraise>=10)
    {
        printf("between 1-10 percent");
    }
    
    
    float percentraise=0;
    percentraise= ((float)userpercentraise/100)*currenthr;
    
    
    float newrate=0;
    newrate= percentraise+currenthr;
    
    
    
    
    
    
    //hourly
    float hourly=0;
    hourly=(newrate*8);
    
    
    //weekly
    float weekly=0;
    weekly= (40*currenthr);
    //monthly
    float monthly=0;
    monthly=(4.3*weekly);
    //yearly
    float yearly=0;
    yearly=(52*weekly);
    
    //increase
    
    //weekly
    float weeklyN=0;
    weeklyN= (40*newrate);
    //monthly
    float monthlyN=0;
    monthlyN=(4.3*weeklyN);
    //yearly
    float yearlyN=0;
    yearlyN=(52*weeklyN);
    
    float Wadjusted=0;
    Wadjusted= weeklyN-weekly;
    
    float Madjusted=0;
    Madjusted= monthlyN -monthly;
    
    float Yadjusted=0;
    Yadjusted= yearlyN -yearly;
    
    
    
    
  
    //part 1

    
    printf("based on your increase %.2f \n", percentraise);

    printf("hourly $ %i.00 ",currenthr);
    printf("--> %.2f", newrate);
    printf("  delta ($)    %.2f \n",percentraise);
    
    
    
    printf("weekly $  %.2f --> " , weekly);
    printf(" $  %.2f " , weeklyN);
    printf("  delta ($)    %.2f \n", Wadjusted );
    
    
    
    printf("monthly $  %.2f  --> " , monthly);
    printf(" $  %f  " , monthlyN);
     printf("  delta ($)    %.2f\n", Madjusted );
    
    
    
    
    printf("yearly $  %.2f -->  " , yearly);
    printf(" $  %.2f  " , yearlyN);
     printf("  delta ($)    %.2f \n", Yadjusted );

    
    
    
    //// part 2
    
    printf("\n \n \n ");
    
    printf("based on your increase %f \n", percentraise);
    
    printf("hourly $ %d ",currenthr);
    printf("--> %f", newrate);
    printf("  delta ($)    %f \n ",percentraise);
    
    
    
    printf("weekly $  %f--> " , weekly);
    printf(" $  %f " , weeklyN);
    printf("  delta ($)    %f\n ", Wadjusted );
    
    
    
    printf("monthly $  %f --> " , monthly);
    printf(" $  %f  " , monthlyN);
    printf("  delta ($)    %f \n ", Madjusted );
    
    
    
    
    printf("yearly $  %f -->  " , yearly);
    printf(" $  %f  " , yearlyN);
    printf("  delta ($)    %f \n \n", Yadjusted );
    
  
    
    
    return -1;
}
