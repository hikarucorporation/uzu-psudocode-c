// Function : updateText
// Namespace: juce:Slider:Pimpl
// Entry    : 002d9dc0
// Prototype: undefined updateText(Pimpl * this)
// Body     : 002d9dc0 - 002d9efa


/* juce::Slider::Pimpl::updateText() */

void __thiscall juce::Slider::Pimpl::updateText(Pimpl *this)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  byte *local_40;
  long local_38;
  undefined1 local_30 [8];
  byte *local_28;
  
  if (*(long *)(this + 600) == 0) goto LAB_002d9ed9;
  plVar2 = *(long **)(this + 0x18);
  (**(code **)(**(long **)(this + 0x50) + 0x10))(&local_38);
                    /* try { // try from 002d9df8 to 002d9dfd has its CatchHandler @ 002d9f6f */
  (**(code **)(local_38 + 0x20))(local_30);
                    /* try { // try from 002d9e01 to 002d9e0e has its CatchHandler @ 002d9f51 */
  (**(code **)(*plVar2 + 0x1b8))(&local_40,plVar2);
                    /* try { // try from 002d9e14 to 002d9e19 has its CatchHandler @ 002d9f49 */
  (**(code **)(local_38 + 0x58))(local_30);
                    /* try { // try from 002d9e2b to 002d9e32 has its CatchHandler @ 002d9f1d */
  (**(code **)(**(long **)(*(long *)(this + 600) + 0x178) + 0x10))(&local_38);
                    /* try { // try from 002d9e3d to 002d9e47 has its CatchHandler @ 002d9f05 */
  (**(code **)(local_38 + 0x28))(&local_28,local_30);
                    /* try { // try from 002d9e4d to 002d9e52 has its CatchHandler @ 002d9efd */
  (**(code **)(local_38 + 0x58))(local_30);
  if (local_40 == local_28) {
    bVar4 = false;
    if (local_28 != &DAT_0061ac58) goto LAB_002d9e94;
LAB_002d9ea1:
    if (bVar4) {
LAB_002d9ea6:
                    /* try { // try from 002d9ead to 002d9eb8 has its CatchHandler @ 002d9efb */
      Label::setText(*(Label **)(this + 600),(long *)&local_40,0);
    }
  }
  else {
    uVar3 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (local_40,local_28);
    bVar4 = uVar3 != 0;
    if (local_28 == &DAT_0061ac58) goto LAB_002d9ea1;
LAB_002d9e94:
    local_28 = local_28 + -0x10;
    LOCK();
    iVar1 = *(int *)local_28;
    *(int *)local_28 = *(int *)local_28 + -1;
    UNLOCK();
    if (iVar1 != 0) goto LAB_002d9ea1;
    operator_delete__(local_28);
    if (bVar4) goto LAB_002d9ea6;
  }
  local_40 = local_40 + -0x10;
  if (local_40 != (byte *)&emptyString) {
    LOCK();
    iVar1 = *(int *)local_40;
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(local_40);
    }
  }
LAB_002d9ed9:
  updatePopupDisplay(this);
  return;
}


