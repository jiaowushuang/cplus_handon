/* rdict_sif.c - init_1, insert_1, delete_1, lookup_1 */

#include <rpc/rpc.h>

#include "rdict.h"

/* Server-side stub inteface routines written by programmer */

static	int retcode;

/*------------------------------------------------------------------------
 * insertw_1 -  server side interface to remote procedure insertw
 *------------------------------------------------------------------------
 */
int	*
insertw_1(char **w)
{
	retcode = insertw(*w);
	return &retcode;
}

/*------------------------------------------------------------------------
 * initw_1 -  server side interface to remote procedure initw
 *------------------------------------------------------------------------
 */
int	*
initw_1()
{
	retcode = initw();
	return &retcode;
}

/*------------------------------------------------------------------------
 * deletew_1 -  server side interface to remote procedure deletew
 *------------------------------------------------------------------------
 */
int	*
deletew_1(char **w)
{
	retcode = deletew(*w);
	return &retcode;
}

/*------------------------------------------------------------------------
 * lookupw_1 -  server side interface to remote procedure lookupw
 *------------------------------------------------------------------------
 */
int	*
lookupw_1(char **w)
{
	retcode = lookupw(*w);
	return &retcode;
}
