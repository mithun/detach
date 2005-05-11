#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv) {
	int j;

	j = 1;
	if(fork()) return 0;
	close(0);
	close(1);
	close(2);
	setsid();
	execvp(argv[j], &argv[j]);

	return -1;
}
