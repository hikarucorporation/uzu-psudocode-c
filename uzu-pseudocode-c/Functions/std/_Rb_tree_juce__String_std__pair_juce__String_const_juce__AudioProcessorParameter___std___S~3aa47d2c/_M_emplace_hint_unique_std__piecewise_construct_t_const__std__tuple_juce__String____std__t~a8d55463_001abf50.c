// Function : _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<juce::String&&>,std::tuple<>>
// Namespace: std:_Rb_tree_juce__String_std__pair_juce__String_const_juce__AudioProcessorParameter___std___S~3aa47d2c
// Entry    : 001abf50
// Prototype: _Rb_tree_node_base * _M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<juce::String&&>,std::tuple<>>(_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>> * param_1, _Rb_tree_node_base * param_2, undefined8 param_3, undefined8 * param_4)
// Body     : 001abf50 - 001ac016


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* std::_Rb_tree_iterator<std::pair<juce::String const, juce::AudioProcessorParameter*> >
   std::_Rb_tree<juce::String, std::pair<juce::String const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<juce::String const, juce::AudioProcessorParameter*> >,
   std::less<juce::String>, std::allocator<std::pair<juce::String const,
   juce::AudioProcessorParameter*> > >::_M_emplace_hint_unique<std::piecewise_construct_t const&,
   std::tuple<juce::String&&>, std::tuple<> >(std::_Rb_tree_const_iterator<std::pair<juce::String
   const, juce::AudioProcessorParameter*> >, std::piecewise_construct_t const&,
   std::tuple<juce::String&&>&&, std::tuple<>&&) */

_Rb_tree_node_base * __cdecl
std::
_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
::_M_emplace_hint_unique<std::piecewise_construct_t_const&,std::tuple<juce::String&&>,std::tuple<>>
          (_Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
           *param_1,_Rb_tree_node_base *param_2,undefined8 param_3,undefined8 *param_4)

{
  String *this;
  undefined1 uVar1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  byte *local_48;
  _Rb_tree<juce::String,std::pair<juce::String_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<juce::String_const,juce::AudioProcessorParameter*>>,std::less<juce::String>,std::allocator<std::pair<juce::String_const,juce::AudioProcessorParameter*>>>
  *local_40;
  _Rb_tree_node_base *local_38;
  
  local_40 = param_1;
  p_Var3 = operator_new(0x30);
  this = (String *)(p_Var3 + 0x20);
  juce::String::String(this,(undefined8 *)*param_4);
  *(undefined8 *)(p_Var3 + 0x28) = 0;
  local_38 = p_Var3;
                    /* try { // try from 001abf96 to 001abfa3 has its CatchHandler @ 001ac017 */
  auVar6 = _M_get_insert_hint_unique_pos(param_1,param_2,(undefined8 *)this);
  p_Var5 = auVar6._8_8_;
  p_Var4 = auVar6._0_8_;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    juce::String::~String(this);
    operator_delete(p_Var3);
  }
  else {
    uVar1 = true;
    if ((p_Var4 == (_Rb_tree_node_base *)0x0) && (p_Var5 != (_Rb_tree_node_base *)(param_1 + 8))) {
      juce::StringRef::StringRef((StringRef *)&local_48,(undefined8 *)(p_Var5 + 0x20));
      uVar2 = juce::operator<((undefined8 *)this,local_48);
      uVar1 = (undefined1)uVar2;
    }
    std::_Rb_tree_insert_and_rebalance
              ((bool)uVar1,p_Var3,p_Var5,(_Rb_tree_node_base *)(param_1 + 8));
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
    p_Var4 = p_Var3;
  }
  return p_Var4;
}


