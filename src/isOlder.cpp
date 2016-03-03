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
	int i = 0,length1,length2,y1,y2,m1,m2,d1,d2;

	for (i = 0; dob1[i]!='\0'; ++i);
	length1 = i;
	for (i = 0; dob2[i]!='\0'; ++i);
	length2 = i;

	for (i = 0; i < 9; i++)
	{
		if (dob1[i] >= 'a' && dob1[i] <= 'z' || dob1[i] >= 'A' && dob1[i] <= 'Z' || dob2[i] >= 'a' && dob2[i] <= 'z' || dob2[i] >= 'A' && dob2[i] <= 'Z')
			return -1;
	}
	

	d1 =(((dob1[0] - '0') * 10) + (dob1[1] - '0'));
	d2 = (((dob2[0] - '0') * 10) + (dob2[1] - '0'));
	m1 = (((dob1[3] - '0') * 10) + (dob1[4] - '0'));
	m2 = (((dob2[3] - '0') * 10) + (dob2[4] - '0'));
	y1 = ((dob1[6] - '0') * 1000) + ((dob1[7] - '0') * 100) + ((dob1[8] - '0') * 10) + (dob1[9] - '0');
	y2 = ((dob2[6] - '0') * 1000) + ((dob2[7] - '0') * 100) + ((dob2[8] - '0') * 10) + (dob2[9] - '0');
	if (length1 == 10 && length2 == 10 )
	{

		if (m1 >= 13 || m2 >= 13)
			return -1;
		else if ((m1 == (1 || 3 || 5 || 7 || 8 || 10 || 12)) && (d1 >= 32))
			return -1;
		else if ((m2 == (1 || 3 || 5 || 7 || 8 || 10 || 12)) && (d2 >= 32))
			return -1;
		else if ((m1 == (4 || 6 || 9 || 11)) && (d1 >= 31))
			return -1;
		else if ((m2 == (4 || 6 || 9 || 11)) && (d2 >= 31))
			return -1;
		else if (((m1 == 2) && (y1 % 4 == 0) && (d1 >= 30)) || ((m1 == 2) && (y1 % 4 != 0) && (d1 >= 29)))
			return -1;
		else if (((m2 == 2) && (y2 % 4 == 0) && (d2 >= 30)) || ((m2 == 2) && (y2 % 4 != 0) && (d2 >= 29)))
			return -1;
		else
		{
			if (y1 > y2)
				return 2;
			else if (y1 < y2)
				return 1;
			else
			{
				if (m1>m2)
					return 2;
				else if (m1 < m2)
					return 1;
				else
				{
					if (d1>d2)
						return 2;
					else if (d1 < d2)
						return 1;
					else
						return 0;
				}

			}
		}
		


	}
	else
		return -1;
}
