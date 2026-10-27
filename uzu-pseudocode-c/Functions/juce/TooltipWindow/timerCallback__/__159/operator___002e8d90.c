// Function : operator()
// Namespace: juce:TooltipWindow:timerCallback__:__159
// Entry    : 002e8d90
// Prototype: undefined operator()($_159 * this)
// Body     : 002e8d90 - 002e8ed0


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::TooltipWindow::timerCallback()::$_159::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall juce::TooltipWindow::timerCallback()::$_159::operator()(__159 *this)

{
  undefined8 uVar1;
  Component *pCVar2;
  Desktop *this_00;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  undefined1 local_28 [16];
  
  pCVar2 = *(Component **)this;
  local_28._0_8_ = *(ulong *)(**(long **)(this + 8) + 0x70);
  local_28._8_8_ = 0;
  if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 002e8dbb to 002e8dc4 has its CatchHandler @ 002e8ee4 */
    this_00 = operator_new(0x1d0);
                    /* try { // try from 002e8dc8 to 002e8dcf has its CatchHandler @ 002e8ed1 */
    Desktop::Desktop(this_00);
    Desktop::instance = this_00;
  }
  fVar3 = *(float *)(Desktop::instance + 0x130);
  fVar4 = (float)(_DAT_005d91c0 & (uint)fVar3);
  if (fVar4 == DAT_005d94c8) {
    if ((fVar3 == DAT_005d9038) && (!NAN(fVar3) && !NAN(DAT_005d9038))) goto LAB_002e8e3e;
  }
  else {
    fVar6 = (float)((uint)(DAT_005d9054 + fVar3) & _DAT_005d91c0);
    if (fVar6 <= DAT_005d94cc) goto LAB_002e8e3e;
    fVar7 = DAT_005d9038;
    if (DAT_005d9038 <= fVar4) {
      fVar7 = fVar4;
    }
    if (fVar6 <= fVar7 * DAT_005d94d0) goto LAB_002e8e3e;
  }
  auVar5._4_4_ = fVar3;
  auVar5._0_4_ = fVar3;
  auVar5._8_4_ = fVar3;
  auVar5._12_4_ = fVar3;
  auVar5 = divps(local_28,auVar5);
  local_28._0_8_ = auVar5._0_8_;
LAB_002e8e3e:
  uVar1 = *(undefined8 *)(pCVar2 + 0x118);
  fVar3 = (float)uVar1;
  if ((((float)local_28._0_4_ == fVar3) && (!NAN((float)local_28._0_4_) && !NAN(fVar3))) &&
     ((float)local_28._4_4_ == (float)((ulong)uVar1 >> 0x20))) {
    return;
  }
  displayTipInternal(pCVar2,(ulong)((double)**(float **)(this + 0x10) + DAT_005d9098) & 0xffffffff |
                            (long)((double)(*(float **)(this + 0x10))[1] + DAT_005d9098) << 0x20,
                     *(long **)(this + 0x18));
  return;
}


