// Function : FontManager
// Namespace: FontManager
// Entry    : 0016cbc0
// Prototype: undefined FontManager(FontManager * this)
// Body     : 0016cbc0 - 0016cc44


/* FontManager::FontManager() */

void __thiscall FontManager::FontManager(FontManager *this)

{
  long *plVar1;
  long *plVar2;
  undefined8 in_RAX;
  long *local_18;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  local_18 = (long *)in_RAX;
                    /* try { // try from 0016cbd7 to 0016cbe3 has its CatchHandler @ 0016cc47 */
  juce::Typeface::createSystemTypefaceFor
            ((Typeface *)&local_18,*(void **)PTR_CompoundMono_ttf_00715730,0x4e04);
  plVar2 = *(long **)this;
  *(long **)this = local_18;
  local_18 = plVar2;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
    }
  }
                    /* try { // try from 0016cc0e to 0016cc1a has its CatchHandler @ 0016cc45 */
  juce::Typeface::createSystemTypefaceFor
            ((Typeface *)&local_18,*(void **)PTR_HurleybirdJr_ATSFS_ttf_00715e48,0x1b94);
  plVar2 = *(long **)(this + 8);
  *(long **)(this + 8) = local_18;
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      local_18 = plVar2;
      (**(code **)(*plVar2 + 8))();
    }
  }
  return;
}


