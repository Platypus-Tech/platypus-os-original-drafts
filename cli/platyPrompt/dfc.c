#include "../../include/cli/dfc.h"
#include "../../include/cli/prompt.h"

int main() {
	if(input == "dfc" || "Dfc" || "DFC") {
		printf("Damien is %s, warning, CHAR was there \n", DFC);
		printf("%s", prompt);
	}
	else if(input == "dcf" || "Dcf" || "DCF"){
		printf("I believe you meant either \"dfc\", \"Dfc\", or \"DFC\" \n");
		printf("%s", prompt);
	}
	else{
		printf("Wut? You said: %s. What does that mean\?\?\?\? \n");
		printf("%s", prompt);
	}
}
