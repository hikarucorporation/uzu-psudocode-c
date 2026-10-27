// Function : signal
// Namespace: _EXTERNAL_
// Entry    : 0015c440
// Prototype: __sighandler_t signal(int __sig, __sighandler_t __handler)
// Body     : 0015c440 - 0015c445


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

__sighandler_t signal(int __sig,__sighandler_t __handler)

{
  __sighandler_t p_Var1;
  
  p_Var1 = (__sighandler_t)(*(code *)PTR_signal_00716a20)();
  return p_Var1;
}


