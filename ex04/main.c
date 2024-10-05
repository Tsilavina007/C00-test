void ft_is_negative(int n);
void ft_putchar(void);

int    main() {
    char test_pos1[] = "5 = ";
    int n = 0;
    while (n < 5) {
        ft_putchar(test_pos1[n]);
        n++;
    }
    ft_is_negative(5);
    ft_is_negative('\n');

    char test_pos2[] = "-2 = ";
    n = 0;
    while (n < 5) {
        ft_putchar(test_pos2[n]);
        n++;
    }
    ft_is_negative(-2);
    ft_is_negative('\n');

    char test_pos3[] = "0 = ";
    n = 0;
    while (n < 5) {
        ft_putchar(test_pos3[n]);
        n++;
    }
    ft_is_negative(0);
    ft_is_negative('\n');

    return 0;
}