// Function : setFont
// Namespace: juce:Label
// Entry    : 002d80c0
// Prototype: undefined setFont(Label * this, long * param_1)
// Body     : 002d80c0 - 002d8138


/* juce::Label::setFont(juce::Font const&) */

void __thiscall juce::Label::setFont(Label *this,long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(long *)(this + 0x1b0) != *param_1) {
                    /* try { // try from 002d80e1 to 002d80e5 has its CatchHandler @ 002d8139 */
    uVar4 = FontOptions::operator==
                      ((FontOptions *)(*(long *)(this + 0x1b0) + 0x18),
                       (undefined8 *)(*param_1 + 0x18));
    if ((char)uVar4 == '\0') {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      plVar3 = *(long **)(this + 0x1b0);
      *(long *)(this + 0x1b0) = lVar2;
      if (plVar3 != (long *)0x0) {
        LOCK();
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar3 + 8))();
        }
      }
      Component::internalRepaintUnchecked((long)this,0,*(ulong *)(this + 0x40),'\x01');
      return;
    }
  }
  return;
}


