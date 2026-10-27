// Function : finishedWrite
// Namespace: juce:AbstractFifo
// Entry    : 00486dd0
// Prototype: int finishedWrite(AbstractFifo * this, int param_1)
// Body     : 00486dd0 - 00486de3


/* juce::AbstractFifo::finishedWrite(int) */

int __thiscall juce::AbstractFifo::finishedWrite(AbstractFifo *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)this <= *(int *)(this + 8) + param_1) {
    iVar2 = *(int *)this;
  }
  LOCK();
  iVar1 = *(int *)(this + 8);
  *(int *)(this + 8) = (*(int *)(this + 8) + param_1) - iVar2;
  UNLOCK();
  return iVar1;
}


