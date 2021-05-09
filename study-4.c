char tchar(char c)
{
	{
		switch (c) {

		case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55:
		case 56:
			return c + 1;
		case 57:
			return 48;
		case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73:
		case 74: case 75: case 76: case 78: case 79: case 80: case 81: case 82:
		case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90:
			return c - 1;
		case 65:
			return 90;
		case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104:
		case 105: case 106: case 107: case 108: case 109: case 110: case 111:
		case 112: case 113: case 114: case 115: case 116: case 117: case 118:
		case 119: case 120: case 121: case 122:
			return c - 32;
		default: return c;
		}
	}
	int main(void);
	{
		char c;

		// digits
		for (c = '0'; c <= '9'; c++)
			printf("%c->%c,", c, tchar(c));

		// upper lettters
		for (c = 'A'; c <= 'Z'; c++)
			printf("%c->%c,", c, tchar(c));

		// lower lettters
		for (c = 'a'; c <= 'z'; c++)
			printf("%c->%c,", c, tchar(c));

		// others
		for (c = '!'; c <= '/'; c++)
			printf("%c->%c,", c, tchar(c));
		for (c = ':'; c <= '@'; c++)
			printf("%c->%c,", c, tchar(c));
		for (c = '['; c <= '`'; c++)
			printf("%c->%c,", c, tchar(c));
		for (c = '{'; c <= '~'; c++)
			printf("%c->%c,", c, tchar(c));
		printf("\n");
	}
	return EXIT_SUCCESS;
}
