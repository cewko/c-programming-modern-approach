/*
    (a) 010E2 -> illegal, because octal (0...) but uses exponential (e2)
    (b) 31.1e+5 -> legal, float with exponential notation
    (c) 0790 -> illegal, because octal (0...) but uses 9 (0-7 is correct)
    (d) 100_000 -> illegal, underscore isn't allowed in c89 & c99
    (e) 3.978e-2 -> legal, float with exponential notation
*/