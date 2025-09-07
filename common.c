#include "common.h"

void *memcpy(void *dst, const void *src, usize n) {
    u8 *d = (u8 *)dst;
    const u8 *s = (const u8 *)src;
    while (n--)
        *d++ = *s++;
    return dst;
}

void *memset(void *buf, u8 c, usize n) {
    u8 *p = (u8 *)buf;
    while (n--)
        *p++ = c;
    return buf;
}

u8 *strcpy(u8 *dst, const u8 *src) {
    u8 *d = dst;
    while (*src)
        *d++ = *src++;
    *d = '\0';
    return dst;
}

i32 strcmp(const u8 *s1, const u8 *s2) {
    while (*s1 && *s2) {
        if (*s1 != *s2)
            break;
        s1++;
        s2++;
    }
    return *(u8 *)s1 - *(u8 *)s2;
}

void putchar(u8 ch);

void printf(const u8 *fmt, ...) {
    va_list vargs;
    va_start(vargs, fmt);

    while (*fmt) {
        if (*fmt == '%') {
            fmt++;
            switch (*fmt) {
            case '\0': {
                putchar('%');
                goto end;
            }
            case '%': {
                putchar('%');
                break;
            }
            case 's': {
                const u8 *s = va_arg(vargs, const u8 *);
                while (*s) {
                    putchar(*s);
                    s++;
                }
                break;
            }
            case 'd': {
                i32 value = va_arg(vargs, i32);
                unsigned magnitude = value;
                if (value < 0) {
                    putchar('-');
                    magnitude = -magnitude;
                }

                unsigned divisor = 1;
                while (magnitude / divisor > 9)
                    divisor *= 10;

                while (divisor > 0) {
                    putchar('0' + magnitude / divisor);
                    magnitude %= divisor;
                    divisor /= 10;
                }
                break;
            }
            case 'x': {
                unsigned value = va_arg(vargs, unsigned);
                for (i32 i = 7; i >= 0; i--) {
                    unsigned nibble = (value >> (i * 4)) & 0xf;
                    putchar("0123456789abcdef"[nibble]);
                }
            }
            }
        } else {
            putchar(*fmt);
        }

        fmt++;
    }

end:
    va_end(vargs);
}
