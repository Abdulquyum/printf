else if (format[iterate + 1] == 'u')
{
	buffer[buff_ind] = handle_unsigned(va_arg(printable, int));
	if (buff_ind == BUFFSIZE)
		write(1, buffer, buff_ind);
	_return++;
}
else if (format[iterate + 1] == 'o')
{
	buffer[buff_ind] = handle_octal(va_arg(printable, int));
	if (buff_ind == BUFFSIZE)
		write(1, buffer, buff_ind);
	_return += 1;
}
else if (format[iterate + 1] == 'x')
{
	buffer[buff_ind] = to_hexadec_low(va_arg(printable, int));
	if (buff_ind == BUFFSIZE)
		write(1, buffer, buff_ind);
}
else if (format[iterate + 1] == 'X')
{
	buffer[buff_ind] = to_hexadec_high(va_arg(printable, int));
	if (buff_ind == BUFFSIZE)
		write(1, buffer, buff_ind);
}
