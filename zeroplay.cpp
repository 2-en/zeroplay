#include <unistd.h> // for fork(), execv(), chdir()
#include <sys/wait.h> // for wait()
#include <cstdio> // for perror()

int main() {
  pid_t pid = fork(); // Create a new process

  if (pid == -1) {
    // Fork failed
    perror("fork");
    return 1;
  } else if (pid > 0) {
    // Parent process
    int status;
    waitpid(pid, &status, 0); // Wait for the child process to complete
    return status;
  } else {
    // Child process
    // Change the working directory
    chdir("./ares/desktop-ui/out/ares.app/Contents/MacOS");

    // Prepare the path to the executable
    const char *args[] = {"./ares", NULL};

    // Replace the current process with the ares program
    execvp(args[0], const_cast<char* const*>(args));

    // exec onl returns on error
    perror("execvp");
    return 1;
  }
}
