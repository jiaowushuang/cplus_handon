/* tnabort.c - tnabort */

#include <stdio.h>

int	errexit(const char *format, ...);

/*------------------------------------------------------------------------
 * tnabort - abort telnet due to invalid state
 *------------------------------------------------------------------------
 */
/*ARGSUSED*/
int
tnabort(FILE *sfp, FILE *tfp, int c)
{
	errexit("invalid state reached (aborting)\n");
}
