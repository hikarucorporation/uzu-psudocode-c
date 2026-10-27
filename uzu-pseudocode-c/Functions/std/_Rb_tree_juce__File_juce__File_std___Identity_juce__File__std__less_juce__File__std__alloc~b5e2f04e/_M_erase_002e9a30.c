// Function : _M_erase
// Namespace: std:_Rb_tree_juce__File_juce__File_std___Identity_juce__File__std__less_juce__File__std__alloc~b5e2f04e
// Entry    : 002e9a30
// Prototype: undefined _M_erase(void * param_1)
// Body     : 002e9a30 - 002e9a93


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree<juce::File, juce::File, std::_Identity<juce::File>, std::less<juce::File>,
   std::allocator<juce::File> >::_M_erase(std::_Rb_tree_node<juce::File>*) */

void __cdecl
std::
_Rb_tree<juce::File,juce::File,std::_Identity<juce::File>,std::less<juce::File>,std::allocator<juce::File>>
::_M_erase(void *param_1)

{
  int iVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_1 != (void *)0x0) {
    do {
      _M_erase(*(void **)((long)param_1 + 0x18));
      pvVar2 = *(void **)((long)param_1 + 0x10);
      piVar3 = (int *)(*(long *)((long)param_1 + 0x20) + -0x10);
      if (piVar3 != &juce::emptyString) {
        LOCK();
        iVar1 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar1 == 0) {
          operator_delete__(piVar3);
        }
      }
      operator_delete(param_1);
      param_1 = pvVar2;
    } while (pvVar2 != (void *)0x0);
  }
  return;
}


