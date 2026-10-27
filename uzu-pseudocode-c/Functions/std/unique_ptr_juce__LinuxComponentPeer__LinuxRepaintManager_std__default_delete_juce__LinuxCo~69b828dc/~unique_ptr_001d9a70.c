// Function : ~unique_ptr
// Namespace: std:unique_ptr_juce__LinuxComponentPeer__LinuxRepaintManager_std__default_delete_juce__LinuxCo~69b828dc
// Entry    : 001d9a70
// Prototype: undefined ~unique_ptr(unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>> * this)
// Body     : 001d9a70 - 001d9abb


/* std::unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,
   std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager> >::~unique_ptr() */

void __thiscall
std::
unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>>
::~unique_ptr(unique_ptr<juce::LinuxComponentPeer::LinuxRepaintManager,std::default_delete<juce::LinuxComponentPeer::LinuxRepaintManager>>
              *this)

{
  long *plVar1;
  void *pvVar2;
  long *plVar3;
  
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    *(undefined4 *)((long)pvVar2 + 0x2c) = 0;
    free(*(void **)((long)pvVar2 + 0x20));
    plVar3 = *(long **)((long)pvVar2 + 0x10);
    if (plVar3 != (long *)0x0) {
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*plVar3 + 8))();
      }
    }
    operator_delete(pvVar2);
  }
  *(undefined8 *)this = 0;
  return;
}


