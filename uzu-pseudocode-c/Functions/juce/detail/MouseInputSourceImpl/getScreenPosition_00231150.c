// Function : getScreenPosition
// Namespace: juce:detail:MouseInputSourceImpl
// Entry    : 00231150
// Prototype: undefined8 getScreenPosition(MouseInputSourceImpl * this)
// Body     : 00231150 - 00231328


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::detail::MouseInputSourceImpl::getScreenPosition() const */

undefined8 __thiscall
juce::detail::MouseInputSourceImpl::getScreenPosition(MouseInputSourceImpl *this)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  XWindowSystem *this_00;
  Displays *pDVar6;
  Desktop *pDVar7;
  float fVar8;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  
  if (*(int *)(this + 0x14) == 1) {
    local_38._0_4_ = SUB84(*(undefined8 *)(this + 0x20),0);
    local_38._4_4_ = SUB84((ulong)*(undefined8 *)(this + 0x20) >> 0x20,0);
    fStack_30 = 0.0;
    fStack_2c = 0.0;
  }
  else {
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00231179 to 00231182 has its CatchHandler @ 0023135b */
      pDVar7 = operator_new(0x1d0);
                    /* try { // try from 00231186 to 0023118d has its CatchHandler @ 00231344 */
      Desktop::Desktop(pDVar7);
      Desktop::instance = pDVar7;
    }
    puVar1 = *(undefined8 **)(Desktop::instance + 0xe0);
                    /* try { // try from 0023119c to 002311af has its CatchHandler @ 0023135b */
    this_00 = SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false>::get
                        ((SingletonHolder<juce::XWindowSystem,juce::CriticalSection,false> *)
                         XWindowSystem::singletonHolder);
    uVar3 = XWindowSystem::getCurrentMousePosition(this_00);
    fVar8 = (float)((ulong)uVar3 >> 0x20);
    fStack_30 = (float)extraout_XMM0_Dc;
    local_38 = (undefined1  [8])uVar3;
    fStack_2c = (float)extraout_XMM0_Dd;
    pDVar6 = Displays::getDisplayForPoint
                       ((Displays *)*puVar1,*(int *)((long)puVar1 + 0xc),
                        (ulong)((double)(float)uVar3 + DAT_005d9098) & 0xffffffff |
                        (long)((double)fVar8 + DAT_005d9098) << 0x20);
    if (pDVar6 == (Displays *)0x0) goto LAB_00231268;
    if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 00231202 to 0023120b has its CatchHandler @ 0023133c */
      pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0023120f to 00231216 has its CatchHandler @ 00231329 */
      Desktop::Desktop(pDVar7);
      Desktop::instance = pDVar7;
    }
    fVar9 = *(float *)(Desktop::instance + 0x130);
    dVar4 = *(double *)(pDVar6 + 0x50) / (double)fVar9;
    auVar12._0_8_ = (double)((float)uVar3 - (float)(int)*(undefined8 *)(pDVar6 + 0x44));
    auVar12._8_8_ = (double)(fVar8 - (float)(int)((ulong)*(undefined8 *)(pDVar6 + 0x44) >> 0x20));
    auVar10._8_4_ = SUB84(dVar4,0);
    auVar10._0_8_ = dVar4;
    auVar10._12_4_ = (int)((ulong)dVar4 >> 0x20);
    auVar10 = divpd(auVar12,auVar10);
    local_38._0_4_ = fVar9 * (float)(int)*(undefined8 *)(pDVar6 + 4) + (float)auVar10._0_8_;
    local_38._4_4_ =
         fVar9 * (float)(int)((ulong)*(undefined8 *)(pDVar6 + 4) >> 0x20) + (float)auVar10._8_8_;
    fStack_30 = fVar9 * 0.0 + 0.0;
    fStack_2c = fVar9 * 0.0 + 0.0;
  }
LAB_00231268:
  fVar8 = *(float *)(this + 0x18);
  fVar9 = *(float *)(this + 0x1c);
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 0023127a to 00231288 has its CatchHandler @ 00231359 */
    pDVar7 = operator_new(0x1d0);
                    /* try { // try from 0023128c to 00231293 has its CatchHandler @ 00231346 */
    Desktop::Desktop(pDVar7);
    Desktop::instance = pDVar7;
  }
  local_38._4_4_ = (float)local_38._4_4_ + fVar9;
  local_38._0_4_ = (float)local_38._0_4_ + fVar8;
  fStack_30 = fStack_30 + 0.0;
  fStack_2c = fStack_2c + 0.0;
  fVar8 = *(float *)(Desktop::instance + 0x130);
  fVar9 = (float)(_DAT_005d91c0 & (uint)fVar8);
  if (fVar9 == DAT_005d94c8) {
    if ((fVar8 == DAT_005d9038) && (!NAN(fVar8) && !NAN(DAT_005d9038))) {
      return local_38;
    }
  }
  else {
    fVar11 = (float)((uint)(DAT_005d9054 + fVar8) & _DAT_005d91c0);
    if (fVar11 <= DAT_005d94cc) {
      return local_38;
    }
    fVar5 = DAT_005d9038;
    if (DAT_005d9038 <= fVar9) {
      fVar5 = fVar9;
    }
    if (fVar11 <= fVar5 * DAT_005d94d0) {
      return local_38;
    }
  }
  auVar2._4_4_ = fVar8;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar8;
  auVar2._12_4_ = fVar8;
  auVar10 = divps(_local_38,auVar2);
  return auVar10._0_8_;
}


