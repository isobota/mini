#ifndef MMAP_H
#define MMAP_H

#include <stddef.h>

#ifdef BROKEN_MMAP

#define PROT_READ  0x1 /* Page can be read.  */
#define PROT_WRITE 0x2 /* Page can be written.  */
#define PROT_EXEC  0x4 /* Page can be executed.  */

#define MAP_SHARED  0x01
#define MAP_PRIVATE 0x02

#define MAP_FAILED ((void *)-1)

void *mmap64(void *start, size_t len, int prot, int flags, int fd, off_t off);
int munmap(void *__addr, size_t __len);

#else

#include <sys/mman.h>
#define mmap64 mmap

#endif

#endif /* MMAP_H */
