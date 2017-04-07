#include <pthread>

void *posixThreadRoutine()
{	
	
	//do something

}

int launchThread()
{
	
	pthread_attr_t attr;
	pthread_t posixThreadId;
	int returnVal;
	returnVal = pthread_attr_init(&attr);
	returnVal = pthread_attr_setdetachstate(&posixThreadID, &attr, &posixThreadRoutine, 		PTHREAD_CREATE_DETACHED);

}
	
