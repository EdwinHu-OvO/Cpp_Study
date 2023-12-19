long long Fun(int n)
{
	if (n == 1)
	{
		return 2;
	}
	return Fun(n - 1) * 2 * n;
}