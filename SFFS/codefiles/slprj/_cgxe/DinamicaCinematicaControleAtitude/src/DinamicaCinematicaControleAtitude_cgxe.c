/* Include files */

#include "DinamicaCinematicaControleAtitude_cgxe.h"
#include "m_fth5jBLVfE0pWr3ET4cZQC.h"

unsigned int cgxe_DinamicaCinematicaControleAtitude_method_dispatcher(SimStruct*
  S, int_T method, void* data)
{
  if (ssGetChecksum0(S) == 99170659 &&
      ssGetChecksum1(S) == 2841897057 &&
      ssGetChecksum2(S) == 2341616921 &&
      ssGetChecksum3(S) == 3984475949) {
    method_dispatcher_fth5jBLVfE0pWr3ET4cZQC(S, method, data);
    return 1;
  }

  return 0;
}
