#include <unistd.h>
void ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int    main() {
    char test_pos1[] = "5 = ";
    int n = 0;
    while (n < 5) {
        ft_putchar(test_pos1[n]);
        n++;
    }
    ft_is_negative(5);
    ft_putchar('\n');

    char test_pos2[] = "-2 = ";
    n = 0;
    while (n < 5) {
        ft_putchar(test_pos2[n]);
        n++;
    }
    ft_is_negative(-2);
    ft_putchar('\n');

    char test_pos3[] = "0 = ";
    n = 0;
    while (n < 5) {
        ft_putchar(test_pos3[n]);
        n++;
    }
    ft_is_negative(0);
    ft_putchar('\n');

    return 0;
}
