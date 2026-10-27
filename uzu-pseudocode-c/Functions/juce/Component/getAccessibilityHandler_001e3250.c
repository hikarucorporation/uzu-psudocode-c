// Function : getAccessibilityHandler
// Namespace: juce:Component
// Entry    : 001e3250
// Prototype: long getAccessibilityHandler(Component * this)
// Body     : 001e3250 - 001e33aa


/* juce::Component::getAccessibilityHandler() */

long __thiscall juce::Component::getAccessibilityHandler(Component *this)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  Component *pCVar4;
  Desktop *this_00;
  long lVar5;
  long lVar6;
  long *local_20;
  
  pCVar4 = this;
  do {
    if (((byte)pCVar4[0xea] & 0x20) != 0) {
      return 0;
    }
    pCVar4 = *(Component **)(pCVar4 + 0x30);
  } while (pCVar4 != (Component *)0x0);
  pCVar4 = this;
  do {
    if ((*(ushort *)(pCVar4 + 0xe8) & 1) != 0) {
      if (Desktop::instance == (Desktop *)0x0) {
                    /* try { // try from 001e32d3 to 001e32dc has its CatchHandler @ 001e33be */
        this_00 = operator_new(0x1d0);
                    /* try { // try from 001e32e0 to 001e32e7 has its CatchHandler @ 001e33ab */
        Desktop::Desktop(this_00);
        iVar1 = *(int *)(this_00 + 0xdc);
        Desktop::instance = this_00;
      }
      else {
        iVar1 = *(int *)(Desktop::instance + 0xdc);
      }
      if ((long)iVar1 != 0) {
        lVar6 = 0;
        while ((Component *)(*(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6))[1] != pCVar4)
        {
          lVar6 = lVar6 + 8;
          if ((long)iVar1 * 8 == lVar6) {
            return 0;
          }
        }
        lVar6 = (**(code **)(**(long **)(*(long *)(Desktop::instance + 0xd0) + lVar6) + 0x18))();
        if (lVar6 != 0) {
          lVar6 = *(long *)(this + 0xe0);
          if (lVar6 == 0) {
            lVar5 = *(long *)this;
          }
          else {
            lVar5 = *(long *)this;
            if (*(long *)(lVar6 + 0x10) == *(long *)(lVar5 + -8)) {
              return lVar6;
            }
          }
          (**(code **)(lVar5 + 0x188))(&local_20,this);
          plVar3 = local_20;
          local_20 = (long *)0x0;
          plVar2 = *(long **)(this + 0xe0);
          *(long **)(this + 0xe0) = plVar3;
          if ((plVar2 != (long *)0x0) && ((**(code **)(*plVar2 + 8))(), local_20 != (long *)0x0)) {
            (**(code **)(*local_20 + 8))();
          }
          return *(long *)(this + 0xe0);
        }
      }
      return 0;
    }
    pCVar4 = *(Component **)(pCVar4 + 0x30);
  } while (pCVar4 != (Component *)0x0);
  return 0;
}


