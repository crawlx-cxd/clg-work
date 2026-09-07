#include<stdio.h>
struct time{
    int hours;
    int minutes;
    int seconds;
};
int main(){
    struct time t1,t2,result;
printf("enter First time:\n");
scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
printf("enter second time:\n");
scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
result.hours=t1.hours+t2.hours;
result.minutes=t1.minutes+t2.minutes;
result.seconds=t1.seconds+t2.seconds;
if(result.seconds>=60){
    result.seconds %=60;
    result.minutes++;
}
if(result.minutes>=60){
    result.minutes %=60;
    result.hours++;
}
printf("%02d:%02d:%02d",result.hours,result.minutes,result.seconds);
return 0;
}

