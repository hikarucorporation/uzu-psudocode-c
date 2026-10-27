// Function : prepareToRead
// Namespace: juce:AbstractFifo
// Entry    : 00486df0
// Prototype: undefined prepareToRead(AbstractFifo * this, int param_1, int * param_2, int * param_3, undefined4 * param_4, int * param_5)
// Body     : 00486df0 - 00486e4f


/* juce::AbstractFifo::prepareToRead(int, int&, int&, int&, int&) const */

void __thiscall
juce::AbstractFifo::prepareToRead
          (AbstractFifo *this,int param_1,int *param_2,int *param_3,undefined4 *param_4,int *param_5
          )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(this + 4);
  iVar1 = *(int *)(this + 8);
  iVar2 = 0;
  if (iVar1 < iVar3) {
    iVar2 = *(int *)this;
  }
  iVar2 = iVar2 + (iVar1 - iVar3);
  if (param_1 <= iVar2) {
    iVar2 = param_1;
  }
  if (iVar2 < 1) {
    *param_2 = 0;
    *param_4 = 0;
    *param_3 = 0;
  }
  else {
    *param_2 = iVar3;
    *param_4 = 0;
    iVar4 = *(int *)this - iVar3;
    if (iVar2 < *(int *)this - iVar3) {
      iVar4 = iVar2;
    }
    *param_3 = iVar4;
    iVar3 = iVar2 - iVar4;
    if (iVar3 != 0 && iVar4 <= iVar2) {
      if (iVar1 < iVar3) {
        iVar3 = iVar1;
      }
      *param_5 = iVar3;
      return;
    }
  }
  *param_5 = 0;
  return;
}


