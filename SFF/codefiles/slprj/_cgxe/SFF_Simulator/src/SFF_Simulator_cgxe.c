/* Include files */

#include "SFF_Simulator_cgxe.h"
#include "m_Ly9meXpFPtWrgyuheFp0pD.h"

unsigned int cgxe_SFF_Simulator_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 93541053 &&
      ssGetChecksum1(S) == 2009031605 &&
      ssGetChecksum2(S) == 266523405 &&
      ssGetChecksum3(S) == 4201354126) {
    method_dispatcher_Ly9meXpFPtWrgyuheFp0pD(S, method, data);
    return 1;
  }

  return 0;
}
