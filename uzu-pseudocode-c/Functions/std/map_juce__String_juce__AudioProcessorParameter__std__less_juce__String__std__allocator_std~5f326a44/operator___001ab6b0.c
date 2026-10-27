// Function : operator[]
// Namespace: std:map_juce__String_juce__AudioProcessorParameter__std__less_juce__String__std__allocator_std~5f326a44
// Entry    : 001ab6b0
// Prototype: _Rb_tree_node_base * operator[](map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> * this, byte * param_1)
// Body     : 001ab6b0 - 001ab782


/* std::map<juce::String, juce::AudioProcessorParameter*, std::less<juce::String>,
   std::allocator<std::pair<juce::String const, juce::AudioProcessorParameter*> >
   >::operator[](juce::String&&) */

_Rb_tree_node_base * __thiscall
std::
map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::operator[](map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
             *this,byte *param_1)

{
  uint uVar1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  byte *local_40;
  map<juce::String,juce::AudioProcessorParameter*,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
  *local_38;
  
  p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var4 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
  }
  else {
    p_Var2 = p_Var4;
    local_38 = this;
    do {
      juce::StringRef::StringRef((StringRef *)&local_40,(undefined8 *)param_1);
      uVar1 = juce::operator<((undefined8 *)(p_Var5 + 0x20),local_40);
      p_Var3 = p_Var5 + 0x18;
      if ((char)uVar1 == '\0') {
        p_Var3 = p_Var5 + 0x10;
        p_Var2 = p_Var5;
      }
      p_Var5 = *(_Rb_tree_node_base **)p_Var3;
    } while (p_Var5 != (_Rb_tree_node_base *)0x0);
    if (p_Var2 == p_Var4) {
      this = local_38;
    }
    else {
      juce::StringRef::StringRef((StringRef *)&local_40,(undefined8 *)(p_Var2 + 0x20));
      uVar1 = juce::operator<((undefined8 *)param_1,local_40);
      p_Var4 = p_Var2;
      this = local_38;
      if ((char)uVar1 == '\0') goto LAB_001ab76d;
    }
  }
  local_40 = param_1;
  p_Var2 = _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
           ::
           _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<juce::String&&>,std::tuple<>>
                     ((_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
                       *)this,p_Var4,PTR_piecewise_construct_00715990,&local_40);
LAB_001ab76d:
  return p_Var2 + 0x28;
}


