#include<stdio.h>
int main()
{
    int inputHour,inputMinute,allMinute,outputHour,outMinute;
    scanf("%d:%d",&inputHour,&inputMinute);
    allMinute=inputHour*60+inputMinute;
    if(inputHour>=0&&inputHour<=24&&inputMinute>=0&&inputMinute<=60)
     {
        if(allMinute<720&&allMinute>=60)
        {
            outputHour=allMinute/60;outMinute=allMinute-outputHour*60;
            printf("%d:%02d AM",outputHour,outMinute);
        }
        if(allMinute<60)
        {
            outputHour=12;outMinute=allMinute;
            printf("%d:%02d AM",outputHour,outMinute);
        }
        if(allMinute>=780)
        {
            outputHour=(allMinute-720)/60;
            outMinute=(allMinute-720)-outputHour*60;
            printf("%d:%02d PM",outputHour,outMinute);
        }
        if(allMinute<780&&allMinute>=720)
        {
            outputHour=allMinute/60;outMinute=allMinute-outputHour*60;
            printf("%d:%02d PM",outputHour,outMinute);
        }
     }
    
    return 0;
}
