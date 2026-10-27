// Function : mouseWheelMove
// Namespace: juce:TextEditor
// Entry    : 0026e550
// Prototype: undefined mouseWheelMove(TextEditor * this, ulong * param_1, float * param_2)
// Body     : 0026e550 - 0026e5ed


/* juce::TextEditor::mouseWheelMove(juce::MouseEvent const&, juce::MouseWheelDetails const&) */

void __thiscall juce::TextEditor::mouseWheelMove(TextEditor *this,ulong *param_1,float *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  float local_80 [24];
  
  uVar2 = Viewport::useMouseWheelMoveIfNeeded
                    (*param_2,param_2[1],*(Viewport **)(this + 0x188),(ulong)(uint)param_1[2]);
  if ((char)uVar2 == '\0') {
    for (plVar1 = *(long **)(this + 0x38); plVar1 != (long *)0x0; plVar1 = (long *)plVar1[6]) {
      plVar3 = plVar1;
      while ((*(ushort *)(plVar3 + 0x1d) & 0x8000) == 0) {
        plVar3 = (long *)plVar3[6];
        if (plVar3 == (long *)0x0) {
          if (plVar1 == (long *)0x0) {
            return;
          }
          MouseEvent::getEventRelativeTo(local_80,param_1,plVar1);
          (**(code **)(*plVar1 + 0x48))(plVar1,local_80,param_2);
          return;
        }
      }
    }
  }
  return;
}


