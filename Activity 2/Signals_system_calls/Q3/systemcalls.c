#include <signal.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <sys/types.h> 
#include <unistd.h> 
  
// function declaration 
void sigint(); 
void sigquit(); 
void sighup(); 

  
//main code
void main() 
{ 
    int pid; 
  
    // Child process
    if ((pid = fork()) < 0) { 
        perror("fork"); 
        exit(1); 
    } 
  
    if (pid == 0) 
    {
        signal(SIGHUP, sighup); 
        signal(SIGINT, sigint); 
        signal(SIGQUIT, sigquit); 
        for (;;) 
            ; /* Infinite loop */
    } 
  
    else //parent 
    { // pid here is  id of  the child 
        printf("\nPARENT: sending SIGHUP\n\n"); 
        kill(pid, SIGHUP); 
  
        sleep(3);  // pause for 3 secs 
        printf("\nPARENT: sending SIGINT\n\n"); 
        kill(pid, SIGINT); 
  
        sleep(3); // pause for 3 secs 
        printf("\nPARENT: sending SIGQUIT\n\n"); 
        kill(pid, SIGQUIT); 
        sleep(3); 
    } 
} 
  
// Defining signup
void sighup() 
  
{ 
    signal(SIGHUP, sighup); 
    printf("CHILD:  received a SIGHUP\n"); 
} 
  
// Defining sigint 
void sigint() 
  
{ 
    signal(SIGINT, sigint); 
    printf("CHILD:  received a SIGINT\n"); 
} 
  
// sigquit() function definition 
void sigquit() 
{ 
    printf("Child process is killed!!!\n"); 
    exit(0); 
} 
