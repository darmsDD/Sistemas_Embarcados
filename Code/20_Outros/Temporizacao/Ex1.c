#include <stdio.h>
#include <time.h>

int main(void)
{
	unsigned int i;
	time_t time_1, time_2;
	time_1 = time(NULL);
	for(i = 0; i < 1e9; i++);
	time_2 = time(NULL);
	printf("Tempo de execução do laço for: %4.1f s\n",
		difftime(time_2, time_1));
}