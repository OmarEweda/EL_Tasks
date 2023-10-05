/*handle interrupt signal like (ctrl+c)*/
#include <csignal>
#include <iostream>

void signal_handler(int signal) {
    std::cout << "Interrupt signal" << signal << std::endl;
    exit(0);
}

int main() {
  // Register the signal handler
  signal(SIGINT, signal_handler);

  while (true) {

  }

  return 0;
}
