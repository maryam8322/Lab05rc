#include <stdlib.h>
#include <pthread.h>

void* helloThred(void* thread_value) {
	printf("Hello Thread! value = %d\n", (int)thread_value);
	return NULL;
}

int main() {
	pthread_t ID; /*pthread_t is the data type used to uniquely identify a thread*/
	int value = 42;
	pthread_create(&ID, NULL, helloThred, (void*)value);
	pthread_exit(NULL); /*this function is called after a thread has completed and no longer required.*/
	return 0;
}