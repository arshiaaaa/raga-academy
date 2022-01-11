void middle(char *filename, int howMany, int fromWhere)
{
	FILE *fileptr = fopen(filename, "r");

	fseek(inFile, fromWhere, SEEK_SET);
	char c;

	for (int i = 0; i < howMany; i++)
	{
		fscanf(fileptr, "%c", &c);
		printf("%c ", c);
	}
	
	printf("\n");
}