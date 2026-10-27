// Function : setText
// Namespace: juce:Label
// Entry    : 00248bd0
// Prototype: undefined setText(Label * this, long * param_1, int param_2)
// Body     : 00248bd0 - 00248cee


/* juce::Label::setText(juce::String const&, juce::NotificationType) */

void __thiscall juce::Label::setText(Label *this,long *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  long local_30;
  
  hideEditor(this,'\x01');
  pbVar5 = (byte *)*param_1;
  if (*(byte **)(this + 0x1a8) != pbVar5) {
    uVar4 = CharacterFunctions::compare<juce::CharPointer_UTF8,juce::CharPointer_UTF8>
                      (*(byte **)(this + 0x1a8),pbVar5);
    if (uVar4 != 0) {
      pbVar1 = pbVar5 + -0x10;
      if (pbVar1 != (byte *)&emptyString) {
        LOCK();
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        UNLOCK();
        pbVar5 = (byte *)*param_1;
      }
      LOCK();
      lVar3 = *(long *)(this + 0x1a8);
      *(byte **)(this + 0x1a8) = pbVar5;
      UNLOCK();
      piVar6 = (int *)(lVar3 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        iVar2 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          operator_delete__(piVar6);
        }
      }
      local_30 = *param_1;
      piVar6 = (int *)(local_30 + -0x10);
      if (piVar6 != &emptyString) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
                    /* try { // try from 00248c79 to 00248c7e has its CatchHandler @ 00248cf7 */
      (**(code **)(**(long **)(this + 0x178) + 0x18))();
                    /* try { // try from 00248c88 to 00248c8a has its CatchHandler @ 00248cef */
      (*(code *)PTR_stringCleanUp_00713858)(&local_30);
      Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      (**(code **)(*(long *)this + 0x1a8))(this);
      if ((*(long *)(this + 0x1f0) != 0) &&
         (lVar3 = *(long *)(*(long *)(this + 0x1f0) + 0x10), lVar3 != 0)) {
        (**(code **)(*(long *)this + 0x1c0))(this,lVar3,1,1);
      }
      if (param_2 != 0) {
        callChangeListeners(this);
      }
    }
  }
  return;
}


