// Function : findComponentAt
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 001e54d0
// Prototype: Component * findComponentAt(undefined4 param_1, long * param_2)
// Body     : 001e54d0 - 001e5615


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::MouseInputSourceImpl::findComponentAt(juce::Point<float>, juce::ComponentPeer*) */

Component * __cdecl
juce::detail::MouseInputSourceImpl::findComponentAt(undefined4 param_1,long *param_2)

{
  int iVar1;
  long *plVar2;
  Desktop *this;
  ulong uVar3;
  Component *pCVar4;
  long lVar5;
  float fVar6;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined1 local_28 [16];
  
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e54fb to 001e5504 has its CatchHandler @ 001e5631 */
    this = operator_new(0x1d0);
                    /* try { // try from 001e5508 to 001e550f has its CatchHandler @ 001e561e */
    Desktop::Desktop(this);
    iVar1 = *(int *)(this + 0xdc);
    Desktop::instance = this;
  }
  else {
    iVar1 = *(int *)(Desktop::instance + 0xdc);
  }
  if ((long)iVar1 != 0) {
    lVar5 = 0;
    do {
      if (*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5) == param_2) {
        plVar2 = (long *)param_2[1];
        local_28._0_8_ = (**(code **)(*param_2 + 0x58))(param_1,param_2);
        local_28._8_4_ = extraout_XMM0_Dc;
        local_28._12_4_ = extraout_XMM0_Dd;
                    /* try { // try from 001e556c to 001e5574 has its CatchHandler @ 001e5616 */
        fVar6 = (float)(**(code **)(*plVar2 + 0x88))(plVar2);
        fVar7 = (float)(_DAT_005d91c0 & (uint)fVar6);
        if (fVar7 == DAT_005d94c8) {
          if ((fVar6 == DAT_005d9038) && (!NAN(fVar6) && !NAN(DAT_005d9038))) goto LAB_001e55e2;
        }
        else {
          fVar9 = (float)((uint)(fVar6 + DAT_005d9054) & _DAT_005d91c0);
          if (fVar9 <= DAT_005d94cc) goto LAB_001e55e2;
          fVar10 = DAT_005d9038;
          if (DAT_005d9038 <= fVar7) {
            fVar10 = fVar7;
          }
          if (fVar9 <= fVar10 * DAT_005d94d0) goto LAB_001e55e2;
        }
        auVar8._4_4_ = fVar6;
        auVar8._0_4_ = fVar6;
        auVar8._8_4_ = fVar6;
        auVar8._12_4_ = fVar6;
        auVar8 = divps(local_28,auVar8);
        local_28._0_8_ = auVar8._0_8_;
LAB_001e55e2:
        pCVar4 = (Component *)param_2[1];
        uVar3 = Component::contains(local_28._0_8_,pCVar4);
        if ((char)uVar3 == '\0') {
          return (Component *)0x0;
        }
        pCVar4 = Component::getComponentAt(local_28._0_8_,pCVar4);
        return pCVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((long)iVar1 * 8 != lVar5);
  }
  return (Component *)0x0;
}


