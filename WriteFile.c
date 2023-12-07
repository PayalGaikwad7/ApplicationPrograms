#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd = 0;
    char Arr[] = "Marvellous Infosystems";
    int Ret = 0;

    fd = open("Marvellous.txt", O_RDWR);

    Ret = write(fd, Arr, strlen(Arr));  //(Kashat lihaych, Kay lihaych, Kiti lihaych)

    printf("%d bytes get written in the file\n", Ret);

    close(fd);
    return 0;
}

// O_RDONLY  : Read
// O_WRONLY  : Write
// O_RDWR    : Read+Write