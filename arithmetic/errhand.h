/********************** Start of ERRHAND.H **********************/

#ifndef _ERRHAND_H
#define _ERRHAND_H

#ifdef __STDC__
void fatal_error( char *fmt, ... );

#else /* __STDC__ */
void fatal_error();

#endif /* __STDC__ */
#endif /* _ERRHAND_H */

/********************** End of ERRHAND.H *************************/

