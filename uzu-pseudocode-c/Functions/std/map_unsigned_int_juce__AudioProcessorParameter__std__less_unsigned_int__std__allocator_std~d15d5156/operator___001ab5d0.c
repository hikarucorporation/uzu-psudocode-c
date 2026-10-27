// Function : operator[]
// Namespace: std:map_unsigned_int_juce__AudioProcessorParameter__std__less_unsigned_int__std__allocator_std~d15d5156
// Entry    : 001ab5d0
// Prototype: _Rb_tree_node_base * operator[](map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * this, uint * param_1)
// Body     : 001ab5d0 - 001ab697


/* std::map<unsigned int, juce::AudioProcessorParameter*, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, juce::AudioProcessorParameter*> >
   >::operator[](unsigned int const&) */

_Rb_tree_node_base * __thiscall
std::
map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
::operator[](map<unsigned_int,juce::AudioProcessorParameter*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
             *this,uint *param_1)

{
  _Rb_tree_node_base *p_Var1;
  uint uVar2;
  _Rb_tree_node_base *p_Var3;
  _Rb_tree_node_base *p_Var4;
  _Rb_tree_node_base *p_Var5;
  bool bVar6;
  undefined1 auVar7 [16];
  
  p_Var3 = *(_Rb_tree_node_base **)(this + 0x10);
  p_Var1 = (_Rb_tree_node_base *)(this + 8);
  uVar2 = *param_1;
  p_Var4 = p_Var1;
  if (p_Var3 != (_Rb_tree_node_base *)0x0) {
    do {
      p_Var5 = p_Var3 + 0x18;
      if (uVar2 <= *(uint *)(p_Var3 + 0x20)) {
        p_Var5 = p_Var3 + 0x10;
        p_Var4 = p_Var3;
      }
      p_Var3 = *(_Rb_tree_node_base **)p_Var5;
    } while (p_Var3 != (_Rb_tree_node_base *)0x0);
    if (p_Var4 == p_Var1) {
      p_Var4 = p_Var1;
    }
    else if (*(uint *)(p_Var4 + 0x20) <= uVar2) goto LAB_001ab682;
  }
  p_Var3 = operator_new(0x30);
  *(uint *)(p_Var3 + 0x20) = uVar2;
  *(undefined8 *)(p_Var3 + 0x28) = 0;
                    /* try { // try from 001ab636 to 001ab643 has its CatchHandler @ 001ab698 */
  auVar7 = _Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
           ::_M_get_insert_hint_unique_pos
                     ((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
                       *)this,p_Var4,(uint *)(p_Var3 + 0x20));
  p_Var5 = auVar7._8_8_;
  p_Var4 = auVar7._0_8_;
  if (p_Var5 == (_Rb_tree_node_base *)0x0) {
    operator_delete(p_Var3);
  }
  else {
    bVar6 = true;
    if ((p_Var4 == (_Rb_tree_node_base *)0x0) && (p_Var5 != p_Var1)) {
      bVar6 = *(uint *)(p_Var3 + 0x20) < *(uint *)(p_Var5 + 0x20);
    }
    std::_Rb_tree_insert_and_rebalance(bVar6,p_Var3,p_Var5,p_Var1);
    *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
    p_Var4 = p_Var3;
  }
LAB_001ab682:
  return p_Var4 + 0x28;
}


