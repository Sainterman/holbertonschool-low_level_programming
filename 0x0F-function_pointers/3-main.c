int main(int argc, char *argv[])
{
	int num1, num2, answer;
	char *operator;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	answer = (*get_op_func(operator))(num1,num2);

	return (answer);
}
