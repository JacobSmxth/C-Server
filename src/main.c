#include <stdio.h>
#include <sys/socket.h> // Man page told me about this. Reading up on beej's guide!

// Stuff I learn
//
// Everything in UNIX is a file
//
// Everything gors through a file descriptor
// For network communication you would use the socket system routine
// Since this is a file descriptor, technically you can use read() and write() but send() and recv() give better control over data transmission.
//
// Three Kinds of sockets:
// DARPA Internet addresses (Internet Sockets)
// Path names on a local node (UNIX Sockets)
// CCITT X.25 addresses (X.25 Sockets (can safely ignore))
//
// I WILL FOCUS ON INTERNET SOCKETS
//
// (I will continue later as its currently 12;13 am and I need sleep after long day)



int main() {
  printf("Server project begins...\n");

  return 0;
}


