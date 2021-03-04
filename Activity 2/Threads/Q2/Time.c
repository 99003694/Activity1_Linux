#include<pthread.h>
#include<stdio.h>

void* task_body1(void* pv)
{
	printf("Current Time is : \n");
    signal(SIGALRM,handler_for_alarm);
    alarm(5);
    while(1)
        pause();
}

void handler_for_alarm(int signo)
{
    time_t now;
    time(&now);
    printf("current time is %s\n",ctime(&now));
    alarm(1);
}
int main()
{
	pthread_t pt1;	//thread handle
	pthread_create(&pt1,NULL,task_body1,NULL);
	
	pthread_join(pt1,NULL);
	
	printf("main--thank you\n");
	return 0;	//exit(0);
}