#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdio.h>


int main()
{
	int fd1,fd2, nbytes_r, nbytes_w;
	
    //Open first file and create the second file
    fd1 = open("file1.txt",O_RDONLY);
    fd2 = open("file2.txt", O_WRONLY | O_CREAT , 0644);  // u-6 g-4 o-4

    //Error checking and graceful exit
	if(fd1<0)
	{
		perror("open");
		exit(1);
	}
    if(fd2<0)
    {
		perror("open");
		exit(2);
	}

	//Initiating the buffer to store the value of the text in it.
	int maxlen=128;
	char buff[maxlen];

    //Write from fd1 to fd2
	nbytes_r = read(fd1,buff,maxlen);
    nbytes_w = write(fd2, buff, nbytes_r);

    //Error checking and graceful exit
	if(nbytes_r<0)
	{
		perror("read");
		exit(3);
	}
    if(nbytes_w<0)
	{
		perror("write");
		exit(4);
	}
  
	write(1,buff,nbytes_r); // To show what has been written
    printf("written successfully, nbytes_w = %d\n",nbytes_w); // Prints written successfully upon successful completion
	close(fd1);
    close(fd2);
	return 0;
}
