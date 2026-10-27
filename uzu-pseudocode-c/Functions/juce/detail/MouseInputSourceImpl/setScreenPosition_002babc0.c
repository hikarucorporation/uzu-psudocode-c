// Function : setScreenPosition
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 002babc0
// Prototype: undefined setScreenPosition(undefined8 param_1)
// Body     : 002babc0 - 002bacbc


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention: __cdecl */
/* juce::detail::MouseInputSourceImpl::setScreenPosition(juce::Point<float>) */

void __cdecl juce::detail::MouseInputSourceImpl::setScreenPosition(undefined8 param_1)

{
  Desktop *pDVar1;
  XWindowSystem *this;
  float fVar2;
  undefined4 extraout_XMM0_Db;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002babd7 to 002babe0 has its CatchHandler @ 002bace3 */
    pDVar1 = operator_new(0x1d0);
                    /* try { // try from 002babe4 to 002babeb has its CatchHandler @ 002bacd0 */
    Desktop::Desktop(pDVar1);
    Desktop::instance = pDVar1;
  }
  fVar2 = *(float *)(Desktop::instance + 0x130);
  fVar3 = (float)(_DAT_005d91c0 & (uint)fVar2);
  if (fVar3 == DAT_005d94c8) {
    if ((fVar2 == DAT_005d9038) && (!NAN(fVar2) && !NAN(DAT_005d9038))) goto LAB_002bac5a;
  }
  else {
    fVar4 = (float)((uint)(DAT_005d9054 + fVar2) & _DAT_005d91c0);
    if (fVar4 <= DAT_005d94cc) goto LAB_002bac5a;
    fVar5 = DAT_005d9038;
    if (DAT_005d9038 <= fVar3) {
      fVar5 = fVar3;
    }
    if (fVar4 <= fVar5 * DAT_005d94d0) goto LAB_002bac5a;
  }
  param_1 = CONCAT44((float)((ulong)param_1 >> 0x20) * fVar2,(float)param_1 * fVar2);
LAB_002bac5a:
  this = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                   ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                    XWindowSystem::singletonHolder);
  if (Desktop::instance == (Desktop *)0x0) {
    pDVar1 = operator_new(0x1d0);
                    /* try { // try from 002bac82 to 002bac89 has its CatchHandler @ 002bacbd */
    Desktop::Desktop(pDVar1);
    Desktop::instance = pDVar1;
  }
  fVar2 = Displays::logicalToPhysical<float>(param_1,*(long **)(Desktop::instance + 0xe0));
  XWindowSystem::setMousePosition(CONCAT44(extraout_XMM0_Db,fVar2),this);
  return;
}


