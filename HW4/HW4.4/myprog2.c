#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

main()
{
	FILE *fd1;
	mkdir ("dir1", 0777);
	chdir ("dir1");
	if ((fd1 = fopen("file10", "w+"))==NULL) //open to read and write
		{
			printf ("ERROR while creating file");
			exit(1);
		}
	fclose(fd1);
	
	FILE *fd2;
	chdir ("..");
	mkdir ("dir2", 0777);
	chdir ("dir2");
	if ((fd2 = fopen("file20", "w+"))==NULL)
		{
			printf ("ERROR while creating file");
			exit(1);
		}
	fclose(fd2);

	FILE *fd3;
	chdir ("..");
	if ((fd3 = fopen("file1", "w+"))==NULL)
		{
			printf ("ERROR while creating file:");
			exit(1);
		}
	fclose(fd3);

	int link = symlink("dir2/file20", "link1");
}
