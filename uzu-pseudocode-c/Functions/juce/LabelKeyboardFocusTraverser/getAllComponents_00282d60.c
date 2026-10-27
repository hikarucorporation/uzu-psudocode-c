// Function : getAllComponents
// Namespace: juce:LabelKeyboardFocusTraverser
// Entry    : 00282d60
// Prototype: vector<juce::Component*,std::allocator<juce::Component*>> * getAllComponents(vector<juce::Component*,std::allocator<juce::Component*>> * param_1, long param_2, long param_3)
// Body     : 00282d60 - 00282dc2


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::LabelKeyboardFocusTraverser::getAllComponents(juce::Component*) */

vector<juce::Component*,std::allocator<juce::Component*>> * __cdecl
juce::LabelKeyboardFocusTraverser::getAllComponents
          (vector<juce::Component*,std::allocator<juce::Component*>> *param_1,long param_2,
          long param_3)

{
  long lVar1;
  
  if ((*(long *)(*(long *)(param_2 + 8) + 0x1c0) == 0) || (*(long *)(param_2 + 8) != param_3)) {
    if (param_3 == 0) {
LAB_00282db0:
      *(undefined8 *)param_1 = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      return param_1;
    }
  }
  else {
    lVar1 = *(long *)(param_3 + 0x30);
    do {
      param_3 = lVar1;
      if (param_3 == 0) goto LAB_00282db0;
    } while (((*(ushort *)(param_3 + 0xe8) & 0x80) == 0) &&
            (lVar1 = *(long *)(param_3 + 0x30), *(long *)(param_3 + 0x30) != 0));
  }
  KeyboardFocusTraverser::getAllComponents(param_1,param_2,param_3);
  return param_1;
}


