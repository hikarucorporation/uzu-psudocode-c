// Function : componentMovedOrResized
// Namespace: juce:AudioProcessorEditor:AudioProcessorEditorListener
// Entry    : 001bddd0
// Prototype: undefined componentMovedOrResized(AudioProcessorEditorListener * this, undefined8 param_1, undefined8 param_2, int param_3)
// Body     : 001bddd0 - 001bdee5


/* juce::AudioProcessorEditor::AudioProcessorEditorListener::componentMovedOrResized(juce::Component&,
   bool, bool) */

void __thiscall
juce::AudioProcessorEditor::AudioProcessorEditorListener::componentMovedOrResized
          (AudioProcessorEditorListener *this,undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  Desktop *this_00;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  if (param_3 == 0) {
    return;
  }
  lVar1 = *(long *)(this + 8);
  lVar4 = lVar1;
  do {
    if ((*(ushort *)(lVar4 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001bde27 to 001bde30 has its CatchHandler @ 001bdef9 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 001bde34 to 001bde3b has its CatchHandler @ 001bdee6 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      bVar3 = 1;
      if ((long)*(int *)(Desktop::instance + 0xdc) == 0) goto LAB_001bde87;
      lVar5 = 0;
      goto LAB_001bde60;
    }
    lVar4 = *(long *)(lVar4 + 0x30);
  } while (lVar4 != 0);
  bVar3 = 1;
  plVar6 = *(long **)(lVar1 + 0xf8);
  goto joined_r0x001bde91;
  while (lVar5 = lVar5 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar5) {
LAB_001bde60:
    plVar6 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5);
    if (plVar6[1] == lVar4) {
      cVar2 = (**(code **)(*plVar6 + 0x90))(plVar6);
      if (cVar2 == '\0') {
        bVar3 = (**(code **)(*plVar6 + 0x98))(plVar6);
        bVar3 = bVar3 ^ 1;
        plVar6 = *(long **)(lVar1 + 0xf8);
        if (plVar6 == (long *)0x0) {
          return;
        }
        goto LAB_001bde93;
      }
      bVar3 = 0;
      break;
    }
  }
LAB_001bde87:
  plVar6 = *(long **)(lVar1 + 0xf8);
joined_r0x001bde91:
  if (plVar6 == (long *)0x0) {
    return;
  }
LAB_001bde93:
  (**(code **)(*plVar6 + 0x60))(plVar6,bVar3);
  Component::setBounds
            (*(Component **)(lVar1 + 0xf8),*(int *)(lVar1 + 0x40) + -0x12,
             *(int *)(lVar1 + 0x44) + -0x12,0x12,0x12);
  return;
}


