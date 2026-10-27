// Function : atomicAdd
// Namespace: Steinberg:FUnknownPrivate
// Entry    : 001782f0
// Prototype: int atomicAdd(int * param_1, int param_2)
// Body     : 001782f0 - 001782f5


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* Steinberg::FUnknownPrivate::atomicAdd(int&, int) */

int __cdecl Steinberg::FUnknownPrivate::atomicAdd(int *param_1,int param_2)

{
  LOCK();
  *param_1 = *param_1 + param_2;
  UNLOCK();
  return *param_1;
}


