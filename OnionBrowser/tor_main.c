/* Pull a copy of this here (but disable main()) so that we pull in
 * `tor_git_revision` properly and compile correctly. (libor.a and libtor.a
 * don't include this since this source is just for the final tor executable
 * binary.)
 */

/* Copyright 2001-2004 Roger Dingledine.
 * Copyright (c) 2004-2006, Roger Dingledine, Nick Mathewson.
 * Copyright (c) 2007-2011, The Tor Project, Inc. */
/* See LICENSE for licensing information */

/** String describing which Tor subversion repository version the source was
 * built from.  This string is generated by a bit of shell kludging int
 * src/or/Makefile.am, and is usually right.
 */
const char tor_git_revision[] =
//#ifndef _MSC_VER
//#include "micro-revision.i"
//#endif
  "";

/**
 * \file tor_main.c
 * \brief Stub module containing a main() function. Allows unit
 * test binary to link against main.c.
 **/

int tor_main(int argc, char *argv[]);

/** We keep main() in a separate file so that our unit tests can use
 * functions from main.c)
 */
/*
 int
main(int argc, char *argv[])
{
  return tor_main(argc, argv);
}
*/
