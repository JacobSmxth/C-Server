## Day 1 – July 15, 2025
**Goal:** Begin reading Beej’s Guide and prep project with basic includes

---

### 📚 Topics Covered

#### Beej’s Guide — Chapter 2 & 3

- Everything in UNIX is a file (including sockets)
- Sockets use file descriptors; `send()` and `recv()` offer more control than `read()`/`write()`
- 3 socket types:
  - Internet sockets (our focus)
  - UNIX domain sockets (local interprocess)
  - X.25 (ignored)
- Encapsulation: Data is wrapped at each network layer → then unwrapped by recipient

#### Network Layer Models
- OSI model (Application → Physical)
- UNIX model: Application → Transport (TCP) → Internet (IP) → Network Access

#### IPv4 vs IPv6
- IPv4 address space is nearly exhausted
- IPv6 allows an extremely large address pool

#### Ports
- IP = street address, Port = room number
- Ports <1024 require elevated permissions

#### Byte Order
- Network Byte Order = Big Endian
- Use conversion functions: `htons()`, `ntohs()`, `htonl()`, `ntohl()`

#### Key Structs
- `struct addrinfo` — hostname and service lookup
- `struct sockaddr` — generic socket address
- `struct sockaddr_in` — IPv4-specific structure

---

#### Reflections
- This stuff is actually clicking more than I expected.
- I get how everything is a file now — even sockets — and that’s kinda wild.
- Reading Beej's guide helped me understand how data gets wrapped and unwrapped as it moves through the network.
- I didn’t write much code yet, but I’m starting to see the big picture of how all the pieces connect.
- I'm learning before jumping into the hard parts, and that feels like the right move.
- Tomorrow I’ll start trying out socket(), bind(), and listen() — excited to actually get something working.
