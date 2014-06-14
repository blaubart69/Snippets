void uebung5()
{
	int time = 0;
	int addminus = -1;
	int i = 1;
	for (; time <= 4; i += addminus)
	{
		if (i == 1 || i == 10)
		{
			addminus = -addminus;
			++time;
		}

		printf("%d ", i);
	}
}
