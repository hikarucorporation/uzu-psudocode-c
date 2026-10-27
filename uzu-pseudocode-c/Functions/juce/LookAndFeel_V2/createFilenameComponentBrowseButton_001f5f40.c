// Function : createFilenameComponentBrowseButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 001f5f40
// Prototype: Button * createFilenameComponentBrowseButton(undefined8 param_1_00, long * param_2)
// Body     : 001f5f40 - 001f5ff4


/* juce::LookAndFeel_V2::createFilenameComponentBrowseButton(juce::String const&) */

Button * __thiscall
juce::LookAndFeel_V2::createFilenameComponentBrowseButton(undefined8 param_1_00,long *param_2)

{
  int iVar1;
  long lVar2;
  long in_RAX;
  Button *this;
  int *piVar3;
  long local_18;
  
  local_18 = in_RAX;
  this = operator_new(0x1f8);
                    /* try { // try from 001f5f54 to 001f5f62 has its CatchHandler @ 001f6020 */
  translate((juce *)&local_18,(byte *)"click to browse for a different file");
                    /* try { // try from 001f5f63 to 001f5f6d has its CatchHandler @ 001f5ff5 */
  Button::Button(this,param_2);
  *(undefined ***)this = &PTR__Button_00707668;
  *(undefined ***)(this + 0xf0) = &PTR__TextButton_00707848;
  piVar3 = (int *)(local_18 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  lVar2 = *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = local_18;
  UNLOCK();
  piVar3 = (int *)(lVar2 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  this[0x1f7] = (Button)0x0;
  piVar3 = (int *)(local_18 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      operator_delete__(piVar3);
    }
  }
  return this;
}


