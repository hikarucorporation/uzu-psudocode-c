// Function : setoverlap
// Namespace: Helmholtz
// Entry    : 00572dc0
// Prototype: undefined setoverlap(Helmholtz * this, int param_1)
// Body     : 00572dc0 - 00572ddd


/* Helmholtz::setoverlap(int) */

void __thiscall Helmholtz::setoverlap(Helmholtz *this,int param_1)

{
  int iVar1;
  
  iVar1 = 1;
  if (param_1 - 1U < 2) {
    iVar1 = param_1;
  }
  if ((param_1 - 4U & 0xfffffffb) == 0) {
    iVar1 = param_1;
  }
  *(int *)(this + 0x20) = iVar1;
  return;
}


