// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_juce__String_std__pair_juce__String_const_juce__AudioProcessorParameter___std___S~3aa47d2c
// Entry    : 001ac030
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> * this, _Rb_tree_node_base * param_1, undefined8 * param_2)
// Body     : 001ac030 - 001ac189


/* std::_Rb_tree<juce::String, std::pair<juce::String const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<juce::String const, juce::AudioProcessorParameter*> >,
   std::less<juce::String>, std::allocator<std::pair<juce::String const,
   juce::AudioProcessorParameter*> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<juce::String const,
   juce::AudioProcessorParameter*> >, juce::String const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
           *this,_Rb_tree_node_base *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  byte *local_30;
  
  if ((_Rb_tree_node_base *)(this + 8) == param_1) {
    if (*(long *)(this + 0x28) != 0) {
      lVar1 = *(long *)(this + 0x20);
      juce::StringRef::StringRef((StringRef *)&local_30,param_2);
      uVar2 = juce::operator<((undefined8 *)(lVar1 + 0x20),local_30);
      if ((char)uVar2 != '\0') {
        param_1 = *(_Rb_tree_node_base **)(this + 0x20);
LAB_001ac16b:
        p_Var5 = (_Rb_tree_node_base *)0x0;
        p_Var3 = param_1;
        goto LAB_001ac179;
      }
    }
  }
  else {
    juce::StringRef::StringRef((StringRef *)&local_30,(undefined8 *)(param_1 + 0x20));
    uVar2 = juce::operator<(param_2,local_30);
    p_Var5 = param_1;
    p_Var3 = param_1;
    if ((char)uVar2 == '\0') {
      juce::StringRef::StringRef((StringRef *)&local_30,param_2);
      uVar2 = juce::operator<((undefined8 *)(param_1 + 0x20),local_30);
      if ((char)uVar2 == '\0') {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        goto LAB_001ac179;
      }
      if (*(_Rb_tree_node_base **)(this + 0x20) == param_1) goto LAB_001ac16b;
      p_Var4 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      juce::StringRef::StringRef((StringRef *)&local_30,(undefined8 *)(p_Var4 + 0x20));
      uVar2 = juce::operator<(param_2,local_30);
      if ((char)uVar2 != '\0') {
        p_Var5 = (_Rb_tree_node_base *)0x0;
        if (*(long *)(param_1 + 0x18) != 0) {
          p_Var5 = p_Var4;
          p_Var3 = p_Var4;
        }
        goto LAB_001ac179;
      }
    }
    else {
      if (*(_Rb_tree_node_base **)(this + 0x18) == param_1) goto LAB_001ac179;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      juce::StringRef::StringRef((StringRef *)&local_30,param_2);
      uVar2 = juce::operator<((undefined8 *)(p_Var3 + 0x20),local_30);
      if ((char)uVar2 != '\0') {
        if (*(long *)(p_Var3 + 0x18) == 0) {
          p_Var5 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var3 = param_1;
        }
        goto LAB_001ac179;
      }
    }
  }
  auVar6 = _M_get_insert_unique_pos(this,param_2);
  p_Var5 = auVar6._0_8_;
  p_Var3 = auVar6._8_8_;
LAB_001ac179:
  auVar6._8_8_ = p_Var3;
  auVar6._0_8_ = p_Var5;
  return auVar6;
}


