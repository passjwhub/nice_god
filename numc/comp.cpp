//test.cpp
#define DLLEXPORT extern "C" __declspec(dllexport)
DLLEXPORT char comp(char a, char b) {
	char c;
	if (a > b)
	{
		c = a;
	}
	    
	else
	{
		 c = b;
	}
	return c; 
	   
}
