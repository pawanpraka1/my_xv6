#include "types.h"
#include "user.h"
#include "fcntl.h"

int main()
{
	int fd = open("a.txt", O_RDONLY);
	printf(1, "1. fd = %d\n", fd);
	fd = open("a.txt", O_RDONLY);
	printf(1, "2. fd = %d\n", fd);
	ofile();
	close(0);
	ofile();
	close(1);
	ofile();
	close(2);
	ofile();
	exit();
}
