#include <iostream>

bool isStringEqual(const char *firstArray, const char *secondArray);
void modifyValue(float *floaty, float *mc, float *floatface);
bool isArrayEmpty(const float *testArray);



int main(int argc, char const *argv[])
{
	//char beep[10] = "beep";
	//char boop[10] = "beep";
	
	float shoop[6] = {1.0F,2.0F,3.0F,4.0F,5.0F,6.0F};
	float noop[5] = {1.0F,1.0F,1.0F,1.0F,1.0F};
	float boop[5] = {0.0F,0.0F,0.0F,0.0F,0.0F};
	
	float *ptrToShoop = shoop;
	/*float *ptrToNoop = noop;
	float *ptrToBoop = boop;

	modifyValue(ptrToNoop, ptrToShoop, ptrToBoop);


	if (1 == isStringEqual(beep, boop))
	{
		std::cout << "string is equal" << std::endl;
	}
	else if (0 == isStringEqual(beep, boop))
	{
		std::cout << "String not equal" << std::endl;
	}



	for (unsigned int i = 0; i < sizeof(shoop); ++i)
	{
		std::cout << noop[i] << std::endl;
	}
*/	

	std::cout << isArrayEmpty(shoop) << std::endl;
	std::cout << isArrayEmpty(noop) << std::endl;
	std::cout << isArrayEmpty(boop) << std::endl;
	int len_a = (sizeof(ptrToShoop/)sizeof(*ptrToShoop));

	std::cout << len_a << std::endl;
	std::cout << (sizeof(ptrToShoop)/sizeof(*ptrToShoop)) << std::endl;
	std::cout << sizeof(*ptrToShoop) << std::endl;

	return 0;
}

void modifyValue(float *floaty, float *mc, float *floatface)
{
	for (unsigned int i = 0; i < 5; ++i)
	{
		floaty[i] = mc[i] - floatface[i];
	}
}

bool isStringEqual(const char *firstArray, const char *secondArray)
{
	bool isEqual = true;
	
		for (unsigned int i = 0; firstArray[i] != 0; ++i)
		{
			if (firstArray[i] != secondArray[i])
			{
				isEqual = false;
				std::cout << "Returns false at " << i << std::endl;
				return isEqual;
			}
		}
	std::cout << "Returns true" << std::endl;
	return isEqual;
}


bool isArrayEmpty(const float *testArray)
{
	bool isEmpty = true;

	for (unsigned int i = 0; i < 5; ++i)
	{
		if (testArray[i] != 0.0F)
		{
			isEmpty = false;
			break;
		}
	}
	return isEmpty;
}

