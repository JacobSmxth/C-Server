// **Stuff I learn**
//
//
//Chapter 2:
// Everything in UNIX is a file
//
// Everything goes through a file descriptor
// For network communication you would use the socket system routine
// Since this is a file descriptor, technically you can use read() and write(), but send() and recv() give better control over data transmission.
//
// Three Kinds of sockets:
// DARPA Internet addresses (Internet Sockets)
// Path names on a local node (UNIX Sockets)
// CCITT X.25 addresses (X.25 Sockets (can safely ignore))
//
// I WILL FOCUS ON INTERNET SOCKETS
//
// (I will continue later as its currently 12;13 am and I need sleep after long day)
//
// I'm Back!
//
// Data Encapsulation!:
//
// When a packet is born it is wrapped ("encapsulated") in a header (rarely a footer) by the first protocol, then the whole thing is encapsulated again by the next protocol,
// then again, and again by the final protocol that is on the hardware.
//
// When another computer recieves this, the the data will be stripped by the hardware, the kernel, a program, and so on.
//
// Layered Network Model:
// Application
// Presentation
// Session
// Transport
// Network
// Data Link
// Physical - The hardware (serial,ethernet, etc.)
//
//
// A layered model with Unix might be
// Application Layer (telnet, ftp, etc.)
// Host-to-host Transport Layer (TCP, UDP)
// Internet Layer (IP and routing)
// Network Access Layer (Ethernet, wifi, or whatever)
//
//
//Chapter 3:
//
// IPv4 ran out cuz only billions
// IPv6 save the day with trillions on trillions on trillions
//
//
// Port numbers!
// IP address is the street address of the hotel and the port number is the room number.
//
// Ports under 1024 usually require special OS priviledges to use.
//
// Byte Order!
//
// Big-Endian (b34f stored as b3 first and 4f second)
// Little-Endian (b34f stored as 4f first and b3 second)
//
// Big-Endian is refered to as Network Byte Order
// Little-Endian is refered to as Host Byte Order
//
//
// Two kind of numbers you can convert
// short (two bytes)
// long (four bytes)
//
// htons(), ntohs(), htonl(), ntohl()
//
// Structs! (I know these!)
//
// A socket descriptor is an int type
// struct addrinfo
// this struct is used in host name lookups and service name lookups.
// load this struct up then call getaddrinfo()
//
// Some structs are IPv4 and some are v6
// struct sockaddr holds socket information for many types of sockets
//
// To deal with sockaddr, programmers created a parallel strcuture:
// struct sockaddr_in
// in = internet
//
// this structure makes it easy to reference elements of the socket address.
//
//
//


#include <stdio.h>
#include <sys/socket.h> // Man page told me about this. Reading up on beej's guide!
#include <sys/types.h> // Say in beej's guide
#include <netdb.h> // THis was beej's guide too




int main() {
  printf("Server project begins...\n");

  return 0;
}


