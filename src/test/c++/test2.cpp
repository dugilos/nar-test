#include "utils.h"
#include <clib.h>
#include <cpplib.h>
#include <cstdlib>

int main(int argc, char **argv) {

	int value;
	int result;

	if(argc > 1) {
		value = atoi(argv[1]);
	} else {
		value = 10;
	}

	result = cLibFunction(value);
	if(!equals(result, 10)) {
		return 1;
	}

	CppLibClasse cl(value);
	result = cl.getValeur();
	if(!equals(result, 10)) {
		return 2;
	}

	return 0;
}
