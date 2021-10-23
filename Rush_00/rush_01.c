#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rush(int horizantel, int vertical)
{
    int x;
    int y;

    y = 0;
    while (y++ < vertical)
    {
        x = 0;
        while(x++ < horizantel)
        {
            if (y == 1 && x == 1)
                ft_putchar('/');
            else if (y == 1 && x == horizantel)
                ft_putchar('\\');
            else if ( y == vertical && x == 1 )
                ft_putchar('\\');
            else if ( y == vertical && x == horizantel)
                ft_putchar('/');
            else if (( x == 1 || x == horizantel) || ( y == 1 || y == vertical))
                ft_putchar('*');
            else
                ft_putchar(' ');
        }
        ft_putchar('\n');
    }
}

int main(void)
{ 
    rush(5,3);
}
