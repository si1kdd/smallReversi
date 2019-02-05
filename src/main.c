#include "logic.h"


static int server = 0;
static int client = 0;


void
print_help()
{

}


int main (int argc, char **argv)
{
        if (argc < 3) {
                print_help();
                exit(-1);
        }


        return 0;
}

