#include <stdint.h>

extern void enable_paging(void *paging_directory);
void init_pmm(multiboot_memory_map_t *mmap, uint32_t len);