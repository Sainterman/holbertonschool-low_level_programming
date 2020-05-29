/**
 * hash_djb2 - Hash function using djb2 algorithm
 * @str: String to assign a key
 * Return: Hash, unsinged long int number
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
