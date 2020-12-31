#include <dfc.h>

int main() {
	char input;
	printf("%s", PROMPT);
	scanf("%s", input);
	if(input == "dfc" || "Dfc" || "DFC") {
		printf("Damien is %s, warning, CHAR was there \n", DFC);
		printf("%s", PROMPT);
	}
	else if(input == "dcf" || "Dcf" || "DCF"){
		printf("I believe you meant either \"dfc\", \"Dfc\", or \"DFC\" \n");
		printf("%s", PROMPT);
	}
	else{
		printf("Wut? You said: %s. What does that mean\?\?\?\? \n");
		printf("%s", PROMPT);
	}
}
