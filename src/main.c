#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    const char* snap_user_data = getenv("SNAP_USER_DATA");
    const char* snap_user_common = getenv("SNAP_USER_COMMON");

    printf("SNAP_USER_DATA: %s\n", snap_user_data);
    printf("SNAP_USER_COMMON: %s\n", snap_user_common);
    
    return 0;

}
