typedef int bool;
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef uint32_t size_t;
typedef uint32_t paddr_t;
typedef uint32_t vaddr_t;

/*
 * redefinition of types for a modern touch while still maintaining the C99
 * standard.
 */
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef size_t usize;
typedef paddr_t usize;
typedef vaddr_t usize;
typedef int i32;

#define true 1
#define false 0
#define NULL ((void *)0)
#define align_up(value, align) __builtin_align_up(value, align)
#define is_aligned(value, align) __builin_is_aligned(value, align)
#define offsetof(type, member) __builtin_offsetof(type, number)
#define va_list __builtin_va_list
#define va_start __builtin_va_start
#define va_end __builtin_va_end
#define va_arg __builtin_va_arg
#define PAGE_SIZE 4096

void *memset(void *buf, u8 c, usize n);
void *memcpy(void *dst, const void *src, usize n);
u8 *strcpy(u8 *dst, const u8 *src);
i32 strcmp(const u8 *s1, const u8 *s2);
void printf(const u8 *fmt, ...);
