#include <fcntl.h>  // For open()
#include <unistd.h> // For read(), write(), close()
#include <stdio.h>  // For perror()
#include <stdlib.h> // For NULL

ssize_t read_textfile(const char *filename, size_t letters) {
    int fd;
    ssize_t bytesRead, bytesWritten;
    char *buffer;

    // Check if the filename is NULL
    if (filename == NULL) {
        return 0;
    }

    // Allocate memory for the buffer
    buffer = malloc(letters);
    if (buffer == NULL) {
        perror("Memory allocation failed");
        return 0;
    }

    // Open the file
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("Failed to open file");
        free(buffer);
        return 0;
    }

    // Read from the file
    bytesRead = read(fd, buffer, letters);
    if (bytesRead == -1) {
        perror("Failed to read file");
        close(fd);
        free(buffer);
        return 0;
    }

    // Write to standard output
    bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
    if (bytesWritten == -1 || bytesWritten != bytesRead) {
        perror("Failed to write to stdout");
        close(fd);
        free(buffer);
        return 0;
    }

    // Clean up
    close(fd);
    free(buffer);

    return bytesWritten;
}

