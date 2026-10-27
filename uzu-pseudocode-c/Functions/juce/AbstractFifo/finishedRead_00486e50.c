// Function : finishedRead
// Namespace: juce:AbstractFifo
// Entry    : 00486e50
// Prototype: int finishedRead(AbstractFifo * this, int param_1)
// Body     : 00486e50 - 00486e63


/* juce::AbstractFifo::finishedRead(int) */

int __thiscall juce::AbstractFifo::finishedRead(AbstractFifo *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)this <= *(int *)(this + 4) + param_1) {
    iVar2 = *(int *)this;
  }
  LOCK();
  iVar1 = *(int *)(this + 4);
  *(int *)(this + 4) = (*(int *)(this + 4) + param_1) - iVar2;
  UNLOCK();
  return iVar1;
}


