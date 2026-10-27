// Function : resizeHostWindow
// Namespace: juce:JuceVST3EditController:JuceVST3Editor:ContentWrapperComponent
// Entry    : 001b7610
// Prototype: undefined resizeHostWindow(ContentWrapperComponent * this)
// Body     : 001b7610 - 001b77df


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::resizeHostWindow() */

void __thiscall
juce::JuceVST3EditController::JuceVST3Editor::ContentWrapperComponent::resizeHostWindow
          (ContentWrapperComponent *this)

{
  float fVar1;
  ContentWrapperComponent CVar2;
  Component *this_00;
  long lVar3;
  int iVar4;
  Desktop *pDVar5;
  undefined8 uVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar7;
  undefined1 *puVar8;
  uint *in_R8;
  undefined8 in_R9;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  ulong local_28;
  ulong uStack_20;
  
  this_00 = *(Component **)(this + 0xf0);
  if (this_00 == (Component *)0x0) {
    return;
  }
  if (*(long *)(*(long *)(this + 0xf8) + 0x30) == 0) {
    return;
  }
  auVar14 = Component::getLocalBounds(this_00);
  uVar6 = auVar14._8_8_;
  Component::getLocalArea((ComponentHelpers *)this,(ComponentHelpers *)this_00,auVar14._0_8_,uVar6);
  fVar9 = (float)(int)extraout_RDX;
  fVar10 = (float)(int)((ulong)extraout_RDX >> 0x20);
  pDVar5 = Desktop::getInstance();
  fVar1 = *(float *)(pDVar5 + 0x130);
  fVar11 = (float)(_DAT_005d91c0 & (uint)fVar1);
  if (fVar11 == DAT_005d94c8) {
    if ((fVar1 != DAT_005d9038) || (NAN(fVar1) || NAN(DAT_005d9038))) {
LAB_001b76c2:
      fVar11 = fVar1 * 0.0;
      fVar9 = fVar9 * fVar1;
      fVar10 = fVar10 * fVar1;
      goto LAB_001b76ec;
    }
  }
  else {
    fVar12 = (float)((uint)(DAT_005d9054 + fVar1) & _DAT_005d91c0);
    if (DAT_005d94cc < fVar12) {
      fVar13 = DAT_005d9038;
      if (DAT_005d9038 <= fVar11) {
        fVar13 = fVar11;
      }
      if (fVar13 * DAT_005d94d0 < fVar12) goto LAB_001b76c2;
    }
  }
  fVar11 = 0.0;
LAB_001b76ec:
  local_28 = (ulong)((double)fVar11 + _DAT_005d9a90) & _DAT_005d9aa0 |
             (long)((double)fVar11 + _DAT_005d9a90) << 0x20;
  uStack_20 = (ulong)((double)(fVar9 + fVar11) + _UNK_005d9a98) & _UNK_005d9aa8 |
              (long)((double)(fVar10 + fVar11) + _UNK_005d9a98) << 0x20;
  CVar2 = this[0x119];
  this[0x119] = (ContentWrapperComponent)0x1;
  lVar3 = *(long *)(this + 0xf8);
  lVar7 = lVar3 + 0x10;
  if (lVar3 == 0) {
    lVar7 = 0;
  }
                    /* try { // try from 001b7752 to 001b7759 has its CatchHandler @ 001b77f7 */
  (**(code **)(**(long **)(lVar3 + 0x30) + 0x18))(*(long **)(lVar3 + 0x30),lVar7,&local_28);
  this[0x119] = CVar2;
  if (detail::PluginUtilities::getHostType()::hostType == '\0') {
    puVar8 = &detail::PluginUtilities::getHostType()::hostType;
    iVar4 = __cxa_guard_acquire();
    if (iVar4 != 0) {
                    /* try { // try from 001b77c7 to 001b77cb has its CatchHandler @ 001b77e0 */
      detail::PluginUtilities::getHostType()::hostType =
           PluginHostType::getHostType(puVar8,lVar7,extraout_RDX_00,uVar6,in_R8,in_R9);
      __cxa_guard_release(&detail::PluginUtilities::getHostType()::hostType);
    }
  }
  if ((((ulong)detail::PluginUtilities::getHostType()::hostType < 0x3a) &&
      ((0x3e00000000400feU >> ((ulong)detail::PluginUtilities::getHostType()::hostType & 0x3f) & 1)
       != 0)) || (*(char *)(*(long *)(*(long *)(this + 0xf8) + 200) + 0x62b8) != '\0')) {
    Component::setBounds((Component *)this,0,extraout_RDX);
  }
  return;
}


