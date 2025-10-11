for (i = 9384; i > 0; i /= 10)
    printf("%d ", i);

for (i = 9384; ; i /= 10) {
    printf("%d ", i);
    if (i <= 0)
        break;
}