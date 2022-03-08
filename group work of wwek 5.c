#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void *mythread(void *vargp)
{

int Matric_No;
char name[30];

int *myid = (int *)vargp;
char *myid2 = (char *)vargp;
scanf("%s", name);
scanf("%d", &Matric_No);
printf("Thread ID: %d\n",*myid);
printf("Thread ID: %d\n",*myid2);
printf("Matriculation number: %d\n",Matric_No);
printf("Student Name: %s\n",name);


return NULL;
}
int main()
{
	pthread_t tid;
	pthread_create(&tid, NULL, mythread, (void *)&tid);
	pthread_join(tid,NULL);
	pthread_exit(NULL);
	return 0;
}

