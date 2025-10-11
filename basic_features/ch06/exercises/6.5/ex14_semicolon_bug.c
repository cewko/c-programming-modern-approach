/*
    there was a semicolon after the if statement
    which created an empty statement since the body 
    did not belond to the if, so it'd always execute
*/

if (n % 2 == 0)
    printf("n is even\n");