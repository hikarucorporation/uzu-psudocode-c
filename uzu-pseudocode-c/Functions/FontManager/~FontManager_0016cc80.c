// Function : ~FontManager
// Namespace: FontManager
// Entry    : 0016cc80
// Prototype: undefined ~FontManager(FontManager * this)
// Body     : 0016cc80 - 0016ccb1


/* FontManager::~FontManager() */

void __thiscall FontManager::~FontManager(FontManager *this)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 8);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0016ccad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


