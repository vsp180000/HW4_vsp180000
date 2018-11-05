#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int FD1,FD2,FD3,L;

	mkdir ("dir1", 0777);
	chdir ("dir1");
	if ((FD1 = open("file10", O_RDWR | O_CREAT, 0644))<0)
		{
		perror ("ERROR while creating file");
		exit(1);
		}
	close(FD1);

	chdir ("..");
	mkdir ("dir2", 0777);
	chdir ("dir2");
	if ((FD2 = open("file20", O_RDWR | O_CREAT, 0644))<0)
		{
		perror ("ERROR while creating file");
		exit(1);
		}
	close(FD2);

	chdir ("..");
	if ((FD3 = open("file1", O_RDWR | O_CREAT, 0644))<0)
		{
		perror ("ERROR while creating file:");
		exit(1);
		}
	close(FD3);
	
	L = symlink("dir2/file20", "link1");
}

