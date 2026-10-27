// Function : prepareToWrite
// Namespace: juce:AbstractFifo
// Entry    : 00486d60
// Prototype: undefined prepareToWrite(AbstractFifo * this, int param_1, uint * param_2, int * param_3, undefined4 * param_4, int * param_5)
// Body     : 00486d60 - 00486dc4


/* juce::AbstractFifo::prepareToWrite(int, int&, int&, int&, int&) const */

void __thiscall
juce::AbstractFifo::prepareToWrite
          (AbstractFifo *this,int param_1,uint *param_2,int *param_3,undefined4 *param_4,
          int *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *(int *)(this + 4);
  uVar2 = *(uint *)(this + 8);
  iVar3 = 0;
  if (iVar1 <= (int)uVar2) {
    iVar3 = *(int *)this;
  }
  iVar3 = ~uVar2 + iVar1 + iVar3;
  if (param_1 <= iVar3) {
    iVar3 = param_1;
  }
  if (iVar3 < 1) {
    *param_2 = 0;
    *param_4 = 0;
    *param_3 = 0;
  }
  else {
    *param_2 = uVar2;
    *param_4 = 0;
    iVar5 = *(int *)this - uVar2;
    if (iVar3 < (int)(*(int *)this - uVar2)) {
      iVar5 = iVar3;
    }
    *param_3 = iVar5;
    iVar4 = iVar3 - iVar5;
    if (iVar4 != 0 && iVar5 <= iVar3) {
      if (iVar1 < iVar4) {
        iVar4 = iVar1;
      }
      *param_5 = iVar4;
      return;
    }
  }
  *param_5 = 0;
  return;
}


