// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__PopupMenu_std__default_delete_juce__PopupMenu__
// Entry    : 0027dd90
// Prototype: undefined ~unique_ptr(unique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>> * this)
// Body     : 0027dd90 - 0027de16


/* std::unique_ptr<juce::PopupMenu, std::default_delete<juce::PopupMenu> >::~unique_ptr() */

void __thiscall
std::unique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>>::~unique_ptr
          (unique_ptr<juce::PopupMenu,std::default_delete<juce::PopupMenu>> *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar2 = *(long **)this;
  if (plVar2 != (long *)0x0) {
    plVar3 = (long *)plVar2[2];
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    if (0 < *(int *)((long)plVar2 + 0xc)) {
      lVar5 = 0;
      lVar4 = 0;
      do {
        juce::PopupMenu::Item::~Item((Item *)(*plVar2 + lVar5));
        lVar4 = lVar4 + 1;
        lVar5 = lVar5 + 0x70;
      } while (lVar4 < *(int *)((long)plVar2 + 0xc));
    }
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    free((void *)*plVar2);
    operator_delete(plVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


