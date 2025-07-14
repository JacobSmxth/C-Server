## C SERVER

This will be my journey through learning C and systems programming from the ground up. I’m not chasing easy wins — I want to *make my brain work*. That’s why I’m building this C web server from scratch.

> This project will be ever-growing. I’ll start with a minimal working server, then copy it into weekly branches (e.g., `week01-bootstrap`, `week02-file-serving`) as I evolve it. The goal: 90 days of uninterrupted learning and development.

---

## 🗓️ Timeline & Milestones

| Week | Focus | Branch |
|------|-------|--------|
| 01   | Bootstrap server, listen on port, return 200 OK | `week01-bootstrap` |
| 02   | Serve real files via GET | `week02-file-serving` |
| 03   | Multi-client handling (threads or forks) | `week03-concurrency` |
| 04   | Logging, signal handling, architecture refactor | `week04-hardening` |
| 05   | Config file parser | `week05-config` |
| 06   | Custom memory allocator | `week06-allocator` |
| 07   | HTTP parser state machine | `week07-http-parser` |
| 08   | Handle POST and file uploads | `week08-upload` |
| 09   | Basic security hardening | `week09-security` |
| 10   | Routing + virtual hosts | `week10-routing` |
| 11   | I/O multiplexing with epoll/select | `week11-epoll` |
| 12   | Packaging, benchmarking, documentation | `week12-polish` |

---

## 📝 Logs

All notes, breakthroughs, bugs, dead ends, and architecture decisions are tracked in the log directory as following:

logs/weekXX.md

---

## 📖 License

MIT — but this is as much a study record as it is a server.

