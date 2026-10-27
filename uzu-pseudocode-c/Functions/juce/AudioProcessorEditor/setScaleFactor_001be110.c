// Function : setScaleFactor
// Namespace: juce:AudioProcessorEditor
// Entry    : 001be110
// Prototype: undefined setScaleFactor(undefined4 param_1, AudioProcessorEditor * this)
// Body     : 001be110 - 001be255


/* juce::AudioProcessorEditor::setScaleFactor(float) */

void __thiscall
juce::AudioProcessorEditor::setScaleFactor(undefined4 param_1,AudioProcessorEditor *this)

{
  long *plVar1;
  char cVar2;
  byte bVar3;
  Desktop *this_00;
  AudioProcessorEditor *pAVar4;
  long lVar5;
  
  *(undefined4 *)(this + 0x150) = param_1;
  *(undefined8 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = param_1;
  *(undefined4 *)(this + 0x164) = 0;
  Component::setTransform((Component *)this,(float *)(this + 0x150));
  pAVar4 = this;
  do {
    if ((*(ushort *)(pAVar4 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001be197 to 001be1a0 has its CatchHandler @ 001be269 */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 001be1a4 to 001be1ab has its CatchHandler @ 001be256 */
        Desktop::Desktop(this_00);
        Desktop::instance = this_00;
      }
      bVar3 = 1;
      if ((long)*(int *)(Desktop::instance + 0xdc) == 0) goto LAB_001be1f7;
      lVar5 = 0;
      goto LAB_001be1d0;
    }
    pAVar4 = *(AudioProcessorEditor **)(pAVar4 + 0x30);
  } while (pAVar4 != (AudioProcessorEditor *)0x0);
  bVar3 = 1;
  plVar1 = *(long **)(this + 0xf8);
  goto joined_r0x001be24e;
  while (lVar5 = lVar5 + 8, (long)*(int *)(Desktop::instance + 0xdc) * 8 != lVar5) {
LAB_001be1d0:
    plVar1 = *(long **)(*(long *)(Desktop::instance + 0xd0) + lVar5);
    if ((AudioProcessorEditor *)plVar1[1] == pAVar4) {
      cVar2 = (**(code **)(*plVar1 + 0x90))(plVar1);
      if (cVar2 == '\0') {
        bVar3 = (**(code **)(*plVar1 + 0x98))(plVar1);
        bVar3 = bVar3 ^ 1;
        plVar1 = *(long **)(this + 0xf8);
        goto joined_r0x001be24e;
      }
      bVar3 = 0;
      break;
    }
  }
LAB_001be1f7:
  plVar1 = *(long **)(this + 0xf8);
joined_r0x001be24e:
  if (plVar1 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar1 + 0x60))(plVar1,bVar3);
  Component::setBounds
            (*(Component **)(this + 0xf8),*(int *)(this + 0x40) + -0x12,
             *(int *)(this + 0x44) + -0x12,0x12,0x12);
  return;
}


