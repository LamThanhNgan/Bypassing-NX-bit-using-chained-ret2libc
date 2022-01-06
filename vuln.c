#include <stdio.h>
int main(int argc, char *argv[])
{
char buf[256];
printf("buff is at:%p\r\n",buf);
memcpy(buf, argv[1],strlen(argv[1]));
printf(buf);
}
