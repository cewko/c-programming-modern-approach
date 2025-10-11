// for with continue
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    printf("%d", i);
}

// for with goto
for (i = 0; i < 10; i++) {
    if (i % 2)
        goto loop_end;
    printf("%d", i);
    loop_end: ;
}

