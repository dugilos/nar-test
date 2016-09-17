#include "utils.h"
#include <clib.h>
#include <cpplib.h>

int main(int argc, char **argv) {

	int result;

	result = cLibFunction(10);
	if(!equals(result, 10)) {
		return 1;
	}

	CppLibClasse cl(10);
	result = cl.getValeur();
	if(!equals(result, 10)) {
		return 2;
	}

	return 0;
}
