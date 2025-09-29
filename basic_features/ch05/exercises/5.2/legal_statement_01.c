/*
    it's legal, but it doesn't work the way it seems.
    first, n >= 1 is evaluated, the result is either 0 or 1.
    then, 0 or 1 is compared with <= 10.
    so the whole condition is always true no matter what n is.
*/