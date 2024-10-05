void ft_putchar(char c);

int    main() {
    char hello[] = "Hello 42 World";
    int n = 0;

    while (n < 15) {
        ft_putchar(hello[n]);
        n++;
    }
    return 0;
}