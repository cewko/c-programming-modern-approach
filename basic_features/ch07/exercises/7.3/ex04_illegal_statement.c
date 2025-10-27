/*
    (a) i += c; legal, char promoted to int, then int converted back to char
    (b) c = 2 * c - 1; legal, char promoted to int
    (c) putchar(c); legal, char will be converted to int
    (d) printf(c); illegal, printf requires a format string
*/