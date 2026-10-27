// Function : processFloatOptimized
// Namespace: LibPdManager
// Entry    : 00167230
// Prototype: undefined processFloatOptimized(int param_1, undefined4 * param_2, undefined4 * param_3)
// Body     : 00167230 - 0016723b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* LibPdManager::processFloatOptimized(int, float const*, float*) */

void __cdecl
LibPdManager::processFloatOptimized(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  processFloatOptimized(int,float_const*,float*)::callCount =
       processFloatOptimized(int,float_const*,float*)::callCount + 1;
  libpd_process_float(param_1,param_2,param_3);
  return;
}


