//test.cpp
#define DLLEXPORT extern "C" __declspec(dllexport)

DLLEXPORT int comp(int a, int b) {
	int c;
	if (a > b){
		
	    c = a;
	} 
	else{
		c = b;
	}
	
    return c;
}
