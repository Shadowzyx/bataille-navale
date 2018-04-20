#include "server.h"

int main(int argc, char const *argv[])
{
	if (argc < 3) {
		client_error(1);
	}

	int connect = connexion(argv[1], atoi(argv[2]));
}
