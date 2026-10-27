// Function : deleteBackwards
// Namespace: juce:TextEditor
// Entry    : 00274470
// Prototype: undefined deleteBackwards(undefined8 param_1, float param_2, TextEditor * this, int param_4, undefined8 param_5, undefined8 param_6, uint * param_7, ulong param_8)
// Body     : 00274470 - 0027455c


/* juce::TextEditor::deleteBackwards(bool) */

void __thiscall
juce::TextEditor::deleteBackwards
          (undefined8 param_1,float param_2,TextEditor *this,int param_4,undefined8 param_5,
          undefined8 param_6,uint *param_7,ulong param_8)

{
  int iVar1;
  uint uVar2;
  TextEditor *pTVar3;
  long lVar4;
  int *piVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 *local_10;
  
  if (param_4 == 0) {
    iVar1 = *(int *)(this + 0x270);
    if (((0 < iVar1) && (iVar1 == *(int *)(this + 0x274))) &&
       (lVar4 = CONCAT44(iVar1,iVar1 + -1), *(long *)(this + 0x270) != lVar4)) {
      *(long *)(this + 0x270) = lVar4;
                    /* try { // try from 002744d0 to 002744d4 has its CatchHandler @ 0027455d */
      Component::getAccessibilityHandler((Component *)(this + 8));
    }
  }
  else {
    uVar2 = (**(code **)(*(long *)this + 0x40))(this);
    uVar2 = findWordBreakBefore(this,uVar2);
    moveCaretTo(extraout_XMM0_Qa,param_2,this,uVar2,1,param_6,param_7,param_8);
  }
  if (this[0x1c8] == (TextEditor)0x0) {
    pTVar3 = this + 8;
    do {
      if ((*(ushort *)(pTVar3 + 0xe8) & 0x8000) != 0) {
        return;
      }
      pTVar3 = *(TextEditor **)(pTVar3 + 0x30);
    } while (pTVar3 != (TextEditor *)0x0);
    moveCaret(this,*(uint *)(this + 0x274));
    local_10 = &DAT_0061ac58;
                    /* try { // try from 00274525 to 0027452f has its CatchHandler @ 00274565 */
    (**(code **)(*(long *)this + 0x38))(this,&local_10);
    piVar5 = (int *)(local_10 + -0x10);
    if (piVar5 != &emptyString) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        operator_delete__(piVar5);
        return;
      }
    }
  }
  return;
}


