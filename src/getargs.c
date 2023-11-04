#include <stdlib.h>
#include <getopt.h>

#include "getargs.h"
#include "help-version.h"

int getargs(int argc, char *argv[]) {
  static struct option long_options [] = {
    { "help"                , no_argument      , NULL , 'h' },
    { "version"             , no_argument      , NULL , 'v' },
    //{ "debug"               , no_argument      , NULL , 'D' },
    { NULL                  , 0                , NULL , 0   }
  };
  /* And check for arguments */
  while(1) {
    int c = getopt_long(argc, argv, "ht:vDf:d:c:S:", long_options, NULL);
    /* Detect the end of the options. */
    if (c == -1)
      break;

    switch(c) {
      /* help */
      case 'h':
        help();
        exit(0);
        break;

      /* version */
      case 'v':
        version();
        exit(0);
        break;

      /* debug */
      //case 'D':
      //  if(!_DEBUG)
      //    _DEBUG = true;
      //  if(_DEBUG)
      //    fprintf(stdout, DEBUG_TEXT_PUTS": Enabled debug\n");
      //  break;

      case '?':
        /* No need to print and error message because
           getopt_long did that already. */
        exit(EXIT_FAILURE);
        break;

      default:
        abort();
    }
  }

  return 0;
}
