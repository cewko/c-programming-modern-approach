/* 4. C89
    (depends on the compiler)
    (b) -8 / 5 = -1 or -2
    (c) 8 / -5 = -1 or -2

    common implementations:
        truncate towards zero: 1.6 -> 1, -1.6 -> -1
        truncate towards negative infinity (floor func): 1.6 -> 1, -1.6 -> -2
*/

/* 5. C99 (always truncates towards zero)
    (b) -8 / 5 = -1
    (c) 8 / -5 = -1 
*/
