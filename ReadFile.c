#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

int main()
{
    int fd = 0;
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt", O_RDWR);

    Ret = write(fd, Arr, 10); //(Kashatun vachaych, kashat vachaych, Kiti vachaych)

    printf("%d bytes gets read from the file\n", Ret);
    printf("Data is : %d\n", Arr);

    close(fd);
    return 0;
}

// O_RDONLY  : Read
// O_WRONLY  : Write
// O_RDWR    : Read+Write