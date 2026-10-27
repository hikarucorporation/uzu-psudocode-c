// Function : _M_get_insert_unique_pos
// Namespace: std:_Rb_tree_juce__String_std__pair_juce__String_const_juce__AudioProcessorParameter___std___S~3aa47d2c
// Entry    : 001ac1b0
// Prototype: undefined1[16] _M_get_insert_unique_pos(_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> * this, undefined8 * param_1)
// Body     : 001ac1b0 - 001ac25d


/* std::_Rb_tree<juce::String, std::pair<juce::String const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<juce::String const, juce::AudioProcessorParameter*> >,
   std::less<juce::String>, std::allocator<std::pair<juce::String const,
   juce::AudioProcessorParameter*> > >::_M_get_insert_unique_pos(juce::String const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::_M_get_insert_unique_pos
          (_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
           *this,undefined8 *param_1)

{
  uint uVar1;
  byte *in_RAX;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  undefined1 auVar4 [16];
  byte *local_28;
  
  p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
  local_28 = in_RAX;
  if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
    p_Var3 = (_Rb_tree_node_base *)(this + 8);
    if (p_Var3 == *(_Rb_tree_node_base **)(this + 0x18)) {
LAB_001ac249:
      p_Var2 = (_Rb_tree_node_base *)0x0;
      goto LAB_001ac24c;
    }
LAB_001ac20a:
    p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var3);
  }
  else {
    do {
      p_Var3 = p_Var2;
      juce::StringRef::StringRef((StringRef *)&local_28,(undefined8 *)(p_Var3 + 0x20));
      uVar1 = juce::operator<(param_1,local_28);
      p_Var2 = *(_Rb_tree_node_base **)(p_Var3 + (ulong)(byte)((byte)uVar1 ^ 1) * 8 + 0x10);
    } while (*(_Rb_tree_node_base **)(p_Var3 + (ulong)(byte)((byte)uVar1 ^ 1) * 8 + 0x10) !=
             (_Rb_tree_node_base *)0x0);
    p_Var2 = p_Var3;
    if ((byte)uVar1 != 0) {
      if (p_Var3 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001ac249;
      goto LAB_001ac20a;
    }
  }
  juce::StringRef::StringRef((StringRef *)&local_28,param_1);
  uVar1 = juce::operator<((undefined8 *)(p_Var2 + 0x20),local_28);
  if ((char)uVar1 == '\0') {
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
  else {
    p_Var2 = (_Rb_tree_node_base *)0x0;
  }
LAB_001ac24c:
  auVar4._8_8_ = p_Var3;
  auVar4._0_8_ = p_Var2;
  return auVar4;
}


