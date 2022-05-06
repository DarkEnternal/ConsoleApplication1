
int addition(int n1, int n2)
{
	return n1 + n2;

}
int substraction(int n1, int n2)
{
	return n1 - n2;

}
int multiplication(int n1, int n2)
{
	return n1 * n2;

}
int division(int n1, int n2)
{
	if (n2 == 0)
	{
		throw "Division by zero!!!";
	}
	return n1 / n2;

}