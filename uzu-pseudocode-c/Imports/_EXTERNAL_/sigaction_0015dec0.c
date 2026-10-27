// Function : sigaction
// Namespace: _EXTERNAL_
// Entry    : 0015dec0
// Prototype: int sigaction(int __sig, sigaction * __act, sigaction * __oact)
// Body     : 0015dec0 - 0015dec5


/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int sigaction(int __sig,sigaction *__act,sigaction *__oact)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_sigaction_00717760)();
  return iVar1;
}


