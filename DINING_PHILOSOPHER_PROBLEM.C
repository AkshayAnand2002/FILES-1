/*
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<pthread.h>
#include<semaphore.h>
sem_t chopstick[5];//semaphore for chopsticks
void *philos(void *);
void eat(int);
int main(){
	int i,n[5];
	pthread_t T[5];//every philosopher rep by 1 thread.
	for(i=0;i<5;i++){
		sem_init(&chopstick[i],0,1);
		//&chopstick[i] is semaphore variable, 0 means can be shared
		//within the process/not across processes, 1 is the initial value of semaphore 
		//.i.e initially each chopstick is free.
	}
	for(i=0;i<5;i++){
		n[i]=i;
		pthread_create(&T[i],NULL,philos,(void *)&n[i]);
		//for T[0],... philosophers,NULL is the default attribute for priority,philos is the function name
		//4th arguement is explicit arguement n[i]=i for 1st philosopher 1 passed for 2nd 2 passed ,... 
	}
	for(i=0;i<5;i++){
		pthread_join(T[i],NULL);
		//deletion of threads corresponding to philosophers.
	}
}
void *philos(void *n){
	int ph=*(int *)n;//for 1st philospher ph=1 and so on.
	printf("PHILOSOPHER %d WANTS TO EAT.\n",ph);
	printf("PHILOSOPHER %d TRIES TO PICK THE LEFT CHOPSTICK.\n",ph);
	sem_wait(&chopstick[ph]);
	//left chopstick
	printf("PHILOSOPHER %d PICKS THE LEFT CHOPSTICK.\n",ph);
	printf("PHILOSOPHER %d TRIES TO PICK THE RIGHT CHOPSTICK.\n",ph);
	sem_wait(&chopstick[(ph+1)%5]);
	//right chopstick
	printf("PHILOSOPHER %d PICKS THE RIGHT CHOPSTICK.\n",ph);
	eat(ph);//both chopsticks present hence eating is done.
	sleep(2);//eating state for 2 seconds.
	printf("PHILOSOPHER %d HAS FINISHED EATING.\n",ph);
	sem_post(&chopstick[(ph+1)%5]);
	//leaves right chopstick
	printf("PHILOSOPHER %d LEAVES THE RIGHT CHOPSTICK.\n",ph);
	sem_post(&chopstick[ph]);
	printf("PHILOSOPHER %d LEAVES THE LEFT CHOPSTICK.\n",ph);
}
void eat(int ph){
	printf("PHILOSOPHER %d BEGINS TO EAT.\n",ph);
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>

sem_t room;
sem_t chopstick[5];

void * philosopher(void *);
void eat(int);
int main()
{
	int i,a[5];
	pthread_t tid[5];
	
	sem_init(&room,0,4);
	
	for(i=0;i<5;i++)
		sem_init(&chopstick[i],0,1);
		
	for(i=0;i<5;i++){
		a[i]=i;
		pthread_create(&tid[i],NULL,philosopher,(void *)&a[i]);
	}
	for(i=0;i<5;i++)
		pthread_join(tid[i],NULL);
}

void * philosopher(void * num)
{
	int phil=*(int *)num;

	sem_wait(&room);
	printf("\nPhilosopher %d has entered room",phil);
	sem_wait(&chopstick[phil]);
	sem_wait(&chopstick[(phil+1)%5]);

	eat(phil);
	sleep(2);
	printf("\nPhilosopher %d has finished eating",phil);

	sem_post(&chopstick[(phil+1)%5]);
	sem_post(&chopstick[phil]);
	sem_post(&room);
}

void eat(int phil)
{
	printf("\nPhilosopher %d is eating",phil);
}
//https://medium.com/swlh/the-dining-philosophers-problem-solution-in-c-90e2593f64e8
