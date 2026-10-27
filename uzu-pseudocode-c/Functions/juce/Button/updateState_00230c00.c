// Function : updateState
// Namespace: juce:Button
// Entry    : 00230c00
// Prototype: undefined updateState(Button * this)
// Body     : 00230c00 - 00230cb0


/* juce::Button::updateState() */

void __thiscall juce::Button::updateState(Button *this)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  char cVar6;
  Desktop *this_00;
  long lVar7;
  
  bVar5 = Component::isMouseOver((Component *)this,'\x01');
  if (Desktop::instance == (Desktop *)0x0) {
    this_00 = operator_new(0x1d0);
                    /* try { // try from 00230c3c to 00230c43 has its CatchHandler @ 00230cb1 */
    Desktop::Desktop(this_00);
    lVar2 = *(long *)(this_00 + 0x40);
    iVar1 = *(int *)(lVar2 + 0x44);
    Desktop::instance = this_00;
  }
  else {
    lVar2 = *(long *)(Desktop::instance + 0x40);
    iVar1 = *(int *)(lVar2 + 0x44);
  }
  if ((long)iVar1 != 0) {
    lVar7 = 0;
    do {
      lVar3 = *(long *)(*(long *)(lVar2 + 0x38) + lVar7);
      lVar4 = *(long *)(lVar3 + 0x48);
      if (((lVar4 != 0) && (*(Button **)(lVar4 + 0x10) == this)) &&
         ((*(ushort *)(lVar3 + 0x3c) & 0x1f0) != 0)) {
        cVar6 = '\x01';
        goto LAB_00230c9e;
      }
      lVar7 = lVar7 + 8;
    } while ((long)iVar1 * 8 != lVar7);
  }
  cVar6 = '\0';
LAB_00230c9e:
  updateState(this,bVar5,cVar6);
  return;
}


