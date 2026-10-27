// Function : getTargetForCommand
// Namespace: juce:ApplicationCommandTarget
// Entry    : 0022f120
// Prototype: ApplicationCommandTarget * getTargetForCommand(ApplicationCommandTarget * this, int param_1)
// Body     : 0022f120 - 0022f1e5


/* juce::ApplicationCommandTarget::getTargetForCommand(int) */

ApplicationCommandTarget * __thiscall
juce::ApplicationCommandTarget::getTargetForCommand(ApplicationCommandTarget *this,int param_1)

{
  ApplicationCommandTarget *pAVar1;
  long lVar2;
  uint uVar3;
  void *local_38;
  undefined8 uStack_30;
  
  uVar3 = 0;
  pAVar1 = this;
  while( true ) {
    local_38 = (void *)0x0;
    uStack_30 = 0;
                    /* try { // try from 0022f144 to 0022f186 has its CatchHandler @ 0022f1e6 */
    (**(code **)(*(long *)pAVar1 + 0x18))(pAVar1,&local_38);
    if ((long)uStack_30._4_4_ != 0) {
      lVar2 = 0;
      do {
        if (*(int *)((long)local_38 + lVar2) == param_1) {
          uStack_30 = uStack_30 & 0xffffffff;
          free(local_38);
          return pAVar1;
        }
        lVar2 = lVar2 + 4;
      } while ((long)uStack_30._4_4_ * 4 != lVar2);
    }
    pAVar1 = (ApplicationCommandTarget *)(**(code **)(*(long *)pAVar1 + 0x10))(pAVar1);
    if ((99 < uVar3) || (pAVar1 == this)) break;
    uVar3 = uVar3 + 1;
    uStack_30 = uStack_30 & 0xffffffff;
    free(local_38);
    if (pAVar1 == (ApplicationCommandTarget *)0x0) {
      return (ApplicationCommandTarget *)0x0;
    }
  }
  uStack_30 = uStack_30 & 0xffffffff;
  free(local_38);
  return (ApplicationCommandTarget *)0x0;
}


