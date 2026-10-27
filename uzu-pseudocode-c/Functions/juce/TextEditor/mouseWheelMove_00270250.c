// Function : mouseWheelMove
// Namespace: juce:TextEditor
// Entry    : 00270250
// Prototype: undefined mouseWheelMove(TextEditor * this, ulong * param_1, float * param_2)
// Body     : 00270250 - 002702da


/* non-virtual thunk to juce::TextEditor::mouseWheelMove(juce::MouseEvent const&,
   juce::MouseWheelDetails const&) */

void __thiscall juce::TextEditor::mouseWheelMove(TextEditor *this,ulong *param_1,float *param_2)

{
  undefined8 uVar1;
  TextEditor *pTVar2;
  float local_80 [24];
  
  uVar1 = Viewport::useMouseWheelMoveIfNeeded
                    (*param_2,param_2[1],*(Viewport **)(this + 0x180),(ulong)(uint)param_1[2]);
  if ((char)uVar1 == '\0') {
    while (this = *(TextEditor **)(this + 0x30), this != (TextEditor *)0x0) {
      pTVar2 = this;
      while ((*(ushort *)(pTVar2 + 0xe8) & 0x8000) == 0) {
        pTVar2 = *(TextEditor **)(pTVar2 + 0x30);
        if (pTVar2 == (TextEditor *)0x0) {
          if (this == (TextEditor *)0x0) {
            return;
          }
          MouseEvent::getEventRelativeTo(local_80,param_1,(long *)this);
          (**(code **)(*(long *)this + 0x48))(this,local_80,param_2);
          return;
        }
      }
    }
  }
  return;
}


