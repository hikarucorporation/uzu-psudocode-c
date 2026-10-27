// Function : _M_get_insert_hint_unique_pos
// Namespace: std:_Rb_tree_unsigned_int_std__pair_unsigned_int_const_juce__AudioProcessorParameter___std___S~1d9b22e5
// Entry    : 001abd60
// Prototype: undefined1[16] _M_get_insert_hint_unique_pos(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * this, _Rb_tree_node_base * param_1, uint * param_2)
// Body     : 001abd60 - 001abf43


/* std::_Rb_tree<unsigned int, std::pair<unsigned int const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<unsigned int const, juce::AudioProcessorParameter*> >,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   juce::AudioProcessorParameter*> >
   >::_M_get_insert_hint_unique_pos(std::_Rb_tree_const_iterator<std::pair<unsigned int const,
   juce::AudioProcessorParameter*> >, unsigned int const&) */

undefined1  [16] __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
::_M_get_insert_hint_unique_pos
          (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
           *this,_Rb_tree_node_base *param_1,uint *param_2)

{
  _Rb_tree_node_base *p_Var1;
  _Rb_tree_node_base *p_Var2;
  _Rb_tree_node_base *p_Var3;
  uint uVar4;
  _Rb_tree_node_base *p_Var5;
  undefined1 auVar6 [16];
  
  p_Var5 = (_Rb_tree_node_base *)(this + 8);
  if (p_Var5 == param_1) {
    if ((*(long *)(this + 0x28) != 0) &&
       (p_Var5 = *(_Rb_tree_node_base **)(this + 0x20), *(uint *)(p_Var5 + 0x20) < *param_2)) {
LAB_001abdd5:
      p_Var3 = (_Rb_tree_node_base *)0x0;
      param_1 = p_Var5;
      goto LAB_001abf32;
    }
    if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001abe4e:
      if (param_1 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001abe80;
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      uVar4 = *param_2;
    }
    else {
      uVar4 = *param_2;
      p_Var5 = *(_Rb_tree_node_base **)(this + 0x10);
      do {
        p_Var3 = p_Var5;
        p_Var5 = *(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10);
      } while (*(_Rb_tree_node_base **)
                (p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10) !=
               (_Rb_tree_node_base *)0x0);
      param_1 = p_Var3;
      if (uVar4 < *(uint *)(p_Var3 + 0x20)) goto LAB_001abe4e;
    }
    if (*(uint *)(p_Var3 + 0x20) < uVar4) {
      p_Var3 = (_Rb_tree_node_base *)0x0;
    }
    else {
      param_1 = (_Rb_tree_node_base *)0x0;
    }
  }
  else {
    uVar4 = *param_2;
    p_Var3 = param_1;
    if (uVar4 < *(uint *)(param_1 + 0x20)) {
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x18);
      if (p_Var1 == param_1) {
        goto LAB_001abf32;
      }
      p_Var2 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      if (*(uint *)(p_Var2 + 0x20) < uVar4) {
        if (*(long *)(p_Var2 + 0x18) == 0) {
          param_1 = (_Rb_tree_node_base *)0x0;
        }
        else {
          p_Var2 = param_1;
        }
        p_Var3 = param_1;
        param_1 = p_Var2;
        goto LAB_001abf32;
      }
      p_Var2 = *(_Rb_tree_node_base **)(this + 0x10);
      param_1 = p_Var5;
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001abebe:
        p_Var5 = p_Var1;
        if (param_1 == p_Var1) goto LAB_001abdd5;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(param_1);
      }
      else {
        do {
          p_Var3 = p_Var2;
          p_Var2 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        param_1 = p_Var3;
        if (uVar4 < *(uint *)(p_Var3 + 0x20)) goto LAB_001abebe;
      }
      if (*(uint *)(p_Var3 + 0x20) < uVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001abf32;
    }
    if (uVar4 <= *(uint *)(param_1 + 0x20)) {
      param_1 = (_Rb_tree_node_base *)0x0;
      goto LAB_001abf32;
    }
    if (*(_Rb_tree_node_base **)(this + 0x20) != param_1) {
      p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_increment(param_1);
      if (uVar4 < *(uint *)(p_Var3 + 0x20)) {
        if (*(long *)(param_1 + 0x18) == 0) {
          p_Var3 = (_Rb_tree_node_base *)0x0;
        }
        else {
          param_1 = p_Var3;
        }
        goto LAB_001abf32;
      }
      p_Var1 = *(_Rb_tree_node_base **)(this + 0x10);
      if (*(_Rb_tree_node_base **)(this + 0x10) == (_Rb_tree_node_base *)0x0) {
LAB_001abf13:
        if (p_Var5 == *(_Rb_tree_node_base **)(this + 0x18)) goto LAB_001abdd5;
        p_Var3 = (_Rb_tree_node_base *)std::_Rb_tree_decrement(p_Var5);
      }
      else {
        do {
          p_Var3 = p_Var1;
          p_Var1 = *(_Rb_tree_node_base **)
                    (p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10);
        } while (*(_Rb_tree_node_base **)
                  (p_Var3 + (ulong)(*(uint *)(p_Var3 + 0x20) <= uVar4) * 8 + 0x10) !=
                 (_Rb_tree_node_base *)0x0);
        p_Var5 = p_Var3;
        if (uVar4 < *(uint *)(p_Var3 + 0x20)) goto LAB_001abf13;
      }
      if (*(uint *)(p_Var3 + 0x20) < uVar4) {
        p_Var3 = (_Rb_tree_node_base *)0x0;
        param_1 = p_Var5;
      }
      else {
        param_1 = (_Rb_tree_node_base *)0x0;
      }
      goto LAB_001abf32;
    }
LAB_001abe80:
    p_Var3 = (_Rb_tree_node_base *)0x0;
  }
LAB_001abf32:
  auVar6._8_8_ = param_1;
  auVar6._0_8_ = p_Var3;
  return auVar6;
}


