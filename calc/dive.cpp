#include "dive.h"

int dive(int x, int y)
{
		int cnt = 0;
		while (x>y)
		{
				cnt++;
				x = sub(x,y);
		}
	return cnt;
}
