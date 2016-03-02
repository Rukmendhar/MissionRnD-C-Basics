/*
OVERVIEW: 	Given date of births of two persons as inputs, return 1 if person one is elder,
2 if person two is elder, 0 if both are of same age.
Example: isOlder("24-07-2000", "25-07-2000") should return 1 as person one
is elder than person two.

INPUTS: 	DOBs of two persons as parameters in the format "DD-MM-YYYY".

OUTPUT: 	1 if person one is elder, 2 if person two is elder, 0 if both are of same age.

ERROR CASES: Return -1 if any DOB is invalid.

NOTES: 		Don't use any built-in C functions for comparisions. You are free to write any helper functions.
*/

int isOlder(char *dob1, char *dob2) {
	int i = 0,length1,length2;

	for (i = 0; dob1[i]!='\0'; ++i);
	length1 = i;
	for (i = 0; dob2[i]!='\0'; ++i);
	length2 = i;

	if (dob1[0] < 4 || dob2[0] < 4 || dob1[3] < 2 || dob2[3] < 2)
	{
		return -1;
	}
	else if ((dob1[3] == 1 && dob1[4] < 3) || (dob2[3] == 1 && dob2[4] < 3))
	{
		return -1;
	}
	else if ((dob1[0] <= 3 && dob1[1] < 2) || (dob2[0] <= 3 && dob2[1] < 2))
	{
		return -1;
	}
	else if ((dob1[3] == 0 && dob1[4] == 2 && dob1[0] == 2 && dob1[0] == 9) || (dob2[3] == 0 && dob2[4] && dob2[0] == 2 && dob2[0] == 9))
	{
		return -1;
	}
	else if (length1 == 10 && length2 == 10 )
	{

		for (i = 0; i < 9; i++)
		{
			if (dob1[i] >= 'a' && dob1[i] <= 'z' || dob1[i] >= 'A' && dob1[i] <= 'Z' || dob2[i] >= 'a' && dob2[i] <= 'z' || dob2[i] >= 'A' && dob2[i] <= 'Z')
				return -1;
		}


		if (dob1[6]<dob2[6])
		{
			return 1;
		}
		else if (dob1[6]>dob2[6])
		{
			return 2;
		}

		else
		{
			if (dob1[7]<dob2[7])
			{
				return 1;
			}
			else if (dob1[7]>dob2[7])
			{
				return 2;
			}
			else
			{
				if (dob1[8]<dob2[8])
				{
					return 1;
				}
				else if (dob1[8]>dob2[8])
				{
					return 2;
				}
				else
				{
					if (dob1[9]<dob2[9])
					{
						return 1;
					}
					else if (dob1[9]>dob2[9])
					{
						return 2;
					}
					else
					{
						if (dob1[3]<dob2[3])
						{
							return 1;
						}
						else if (dob1[3]>dob2[3])
						{
							return 2;
						}
						else
						{
							if (dob1[4]<dob2[4])
							{
								return 1;
							}
							else if (dob1[4]>dob2[4])
							{
								return 2;
							}
							else
							{
								if (dob1[0]<dob2[0])
								{
									return 1;
								}
								else if (dob1[0]>dob2[0])
								{
									return 2;
								}
								else
								{
									if (dob1[1]<dob2[1])
									{
										return 1;
									}
									else if (dob1[1]>dob2[1])
									{
										return 2;
									}
									else
									{
										return 0;
									}
								}
							}
						}
					}
				}
			}
		}

	}
	else
		return -1;
}
