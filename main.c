#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int fd = 0;

    printf("layout / interface tester\n");
    fd = open("/home/dclane/demofile", O_RDONLY);
    if (!(fd > 0)) {
        printf("problem opening /home/dclane/demofile\n");
        return 0;
    } else {
        printf("opened /home/dclane/demofile ok :)\n");
    }
    close(fd);
    fd = 0;

    fd = open("/etc/passwd", O_RDONLY);
    if (!(fd > 0)) {
        printf("problem opening /etc/passwd\n");
        return 0;
    } else {
        printf("opened /etc/passwd ok :)\n");
    }
    close(fd);
    fd = 0;

    fd = open("/etc/ssl/certs/java/cacerts", O_RDONLY);
    if (!(fd > 0)) {
        printf("problem opening /etc/ssl/certs/java/cacerts\n");
        return 0;
    } else {
        printf("opened /etc/ssl/certs/java/cacerts ok :)\n");
    }
    close(fd);
    fd = 0;

    const char* snap_user_data = getenv("SNAP_USER_DATA");
    const char* snap_user_common = getenv("SNAP_USER_DATA");

    printf("%s", snap_user_data);
    printf("%s", snap_user_common);
    
    return 0;

}
