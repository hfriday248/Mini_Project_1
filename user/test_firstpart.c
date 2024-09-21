#include "types.h"
#include "user.h"

int main(int argc, char *argv[]) {
    // Call getpid multiple times
    for (int i = 0; i < 10; i++) {
        printf(1, "Process ID: %d\n", getpid());
    }

    // Retrieve the count of getpid calls
    int count = FirstPart();
    printf(1, "The getpid() system call was called %d times.\n", count);

    exit();
}



