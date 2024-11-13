#include "ft_printf.h"

static int my_helper(va_list ap, char c)
{

}

int	ft_printf(const char *s, ...)
{
	va_list ap;
	int i;
	int len;

	i = 0;
	len = 0;
	va_start(ap, s);
	while (s[i])
	{
		if (s[i] != '%')
			len += ft_putchar(s[i]);
		else
		{
			len += my_helper
		}
	}
	va_end(ap);
}