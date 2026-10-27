// Function : enablementChanged
// Namespace: juce:Slider
// Entry    : 002e3830
// Prototype: undefined enablementChanged(Slider * this)
// Body     : 002e3830 - 002e390c


/* juce::Slider::enablementChanged() */

void __thiscall juce::Slider::enablementChanged(Slider *this)

{
  long lVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  
  Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
  lVar4 = *(long *)(this + 0x1a0);
  lVar1 = *(long *)(lVar4 + 600);
  if (lVar1 != 0) {
    if (*(char *)(lVar4 + 0x230) == '\0') {
LAB_002e38a4:
      if (*(char *)(lVar1 + 0x210) == '\0' && *(char *)(lVar1 + 0x211) == '\0') {
        return;
      }
      *(undefined1 *)(lVar1 + 0x210) = 0;
      uVar3 = 0;
    }
    else {
      lVar4 = *(long *)(lVar4 + 0x18);
      do {
        if ((*(ushort *)(lVar4 + 0xe8) & 0x8000) != 0) goto LAB_002e38a4;
        lVar4 = *(long *)(lVar4 + 0x30);
      } while (lVar4 != 0);
      if (*(char *)(lVar1 + 0x210) != '\0' || *(char *)(lVar1 + 0x211) != '\0') {
        return;
      }
      *(undefined1 *)(lVar1 + 0x210) = 1;
      uVar3 = 0xe0;
    }
    *(undefined2 *)(lVar1 + 0x211) = 0;
    *(undefined1 *)(lVar1 + 0xea) = *(undefined1 *)(lVar1 + 0xea);
    *(ushort *)(lVar1 + 0xe8) = (ushort)*(undefined3 *)(lVar1 + 0xe8) & 0xff1f | uVar3;
    plVar2 = *(long **)(lVar1 + 0xe0);
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x002e3908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


