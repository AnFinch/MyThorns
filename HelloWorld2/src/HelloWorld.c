#include <stdio.h>
#include "cctk.h"
#include "cctk_Arguments.h"

void HelloWorld(CCTK_ARGUMENTS)
{
  DECLARE_CCTK_ARGUMENTS;
  char var[200]="cruel";
  CCTK_INFO("Hello %s World!");
}
