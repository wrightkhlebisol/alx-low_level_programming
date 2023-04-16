void segf(void)
{
	char *str;

	str = "Holberton";
	*(str) = 's';
}

int main(void)
{
	segf();
	return (0);
}
