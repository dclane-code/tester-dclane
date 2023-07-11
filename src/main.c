#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int fd = 0;

    printf("layout / interface tester\n");
    fd = open("/home/dclane/demofile", O_RDONLY);
    if (!(fd > 0)) {
        printf("problem opening /home/dclane/demofile\n");
    } else {
        printf("opened /home/dclane/demofile ok :)\n");
        close(fd);
    }
    fd = 0;

    fd = open("/etc/passwd", O_RDONLY);
    if (!(fd > 0)) {
        printf("problem opening /etc/passwd\n");
    } else {
        printf("opened /etc/passwd ok :)\n");
        close(fd);
    }
    fd = 0;

    fd = open("/etc/ssl/certs/java/cacerts", O_RDONLY);
    if (!(fd > 0)) {
        printf("problem opening /etc/ssl/certs/java/cacerts\n");
    } else {
        printf("opened /etc/ssl/certs/java/cacerts ok :)\n");
        close(fd);
    }
    fd = 0;

    printf("working\n");

    const char* snap_user_data = getenv("SNAP_USER_DATA");
    const char* snap_user_common = getenv("SNAP_USER_COMMON");

    printf("SNAP_USER_DATA: %s\n", snap_user_data);
    printf("SNAP_USER_COMMON: %s\n", snap_user_common);
    
    return 0;

}
