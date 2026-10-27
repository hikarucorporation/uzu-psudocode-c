// Function : createFilenameComponentBrowseButton
// Namespace: juce:LookAndFeel_V2
// Entry    : 00206940
// Prototype: Button * createFilenameComponentBrowseButton(undefined8 param_1_00, undefined8 param_2)
// Body     : 00206940 - 00206944


/* non-virtual thunk to juce::LookAndFeel_V2::createFilenameComponentBrowseButton(juce::String
   const&) */

Button * __thiscall
juce::LookAndFeel_V2::createFilenameComponentBrowseButton(undefined8 param_1_00,long *param_2)

{
  int iVar1;
  long lVar2;
  Button *this;
  long in_RAX;
  int *piVar3;
  long lStack_18;
  
  lStack_18 = in_RAX;
  this = operator_new(0x1f8);
  translate((juce *)&lStack_18,(byte *)"click to browse for a different file");
  Button::Button(this,param_2);
  *(undefined ***)this = &PTR__Button_00707668;
  *(undefined ***)(this + 0xf0) = &PTR__TextButton_00707848;
  piVar3 = (int *)(lStack_18 + -0x10);
  if (piVar3 != &emptyString) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  LOCK();
  lVar2 = *(long *)(this + 0xf8);
  *(long *)(this + 0xf8) = lStack_18;
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
  piVar3 = (int *)(lStack_18 + -0x10);
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


