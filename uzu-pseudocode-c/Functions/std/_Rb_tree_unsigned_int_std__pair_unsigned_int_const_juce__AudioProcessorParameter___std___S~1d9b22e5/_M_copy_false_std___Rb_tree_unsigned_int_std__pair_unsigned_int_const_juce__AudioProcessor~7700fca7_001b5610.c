// Function : _M_copy<false,std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>::_Alloc_node>
// Namespace: std:_Rb_tree_unsigned_int_std__pair_unsigned_int_const_juce__AudioProcessorParameter___std___S~1d9b22e5
// Entry    : 001b5610
// Prototype: undefined4 * _M_copy<false,std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>::_Alloc_node>(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>> * this, undefined4 * param_1, undefined8 param_2, undefined8 param_3)
// Body     : 001b5610 - 001b56e5


/* std::_Rb_tree_node<std::pair<unsigned int const, juce::AudioProcessorParameter*> >*
   std::_Rb_tree<unsigned int, std::pair<unsigned int const, juce::AudioProcessorParameter*>,
   std::_Select1st<std::pair<unsigned int const, juce::AudioProcessorParameter*> >,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   juce::AudioProcessorParameter*> > >::_M_copy<false, std::_Rb_tree<unsigned int,
   std::pair<unsigned int const, juce::AudioProcessorParameter*>, std::_Select1st<std::pair<unsigned
   int const, juce::AudioProcessorParameter*> >, std::less<unsigned int>,
   std::allocator<std::pair<unsigned int const, juce::AudioProcessorParameter*> >
   >::_Alloc_node>(std::_Rb_tree_node<std::pair<unsigned int const, juce::AudioProcessorParameter*>
   >*, std::_Rb_tree_node_base*, std::_Rb_tree<unsigned int, std::pair<unsigned int const,
   juce::AudioProcessorParameter*>, std::_Select1st<std::pair<unsigned int const,
   juce::AudioProcessorParameter*> >, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, juce::AudioProcessorParameter*> > >::_Alloc_node&) */

undefined4 * __thiscall
std::
_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
::
_M_copy<false,std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>::_Alloc_node>
          (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>
           *this,undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = operator_new(0x30);
  uVar1 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(puVar2 + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar2 + 10) = uVar1;
  *puVar2 = *param_1;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  *(undefined8 *)(puVar2 + 2) = param_2;
  if (*(undefined4 **)(param_1 + 6) != (undefined4 *)0x0) {
                    /* try { // try from 001b5656 to 001b5663 has its CatchHandler @ 001b56e6 */
    puVar3 = _M_copy<false,std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>::_Alloc_node>
                       (this,*(undefined4 **)(param_1 + 6),puVar2,param_3);
    *(undefined4 **)(puVar2 + 6) = puVar3;
  }
  puVar3 = *(undefined4 **)(param_1 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    puVar5 = puVar2;
    do {
                    /* try { // try from 001b568c to 001b56cd has its CatchHandler @ 001b56e8 */
      puVar4 = operator_new(0x30);
      uVar1 = *(undefined8 *)(puVar3 + 10);
      *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar3 + 8);
      *(undefined8 *)(puVar4 + 10) = uVar1;
      *puVar4 = *puVar3;
      *(undefined8 *)(puVar4 + 4) = 0;
      *(undefined8 *)(puVar4 + 6) = 0;
      *(undefined4 **)(puVar5 + 4) = puVar4;
      *(undefined4 **)(puVar4 + 2) = puVar5;
      if (*(undefined4 **)(puVar3 + 6) != (undefined4 *)0x0) {
        puVar5 = _M_copy<false,std::_Rb_tree<unsigned_int,std::pair<unsigned_int_const,juce::AudioProcessorParameter*>,std::_Select1st<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,juce::AudioProcessorParameter*>>>::_Alloc_node>
                           (this,*(undefined4 **)(puVar3 + 6),puVar4,param_3);
        *(undefined4 **)(puVar4 + 6) = puVar5;
      }
      puVar3 = *(undefined4 **)(puVar3 + 4);
      puVar5 = puVar4;
    } while (puVar3 != (undefined4 *)0x0);
  }
  return puVar2;
}


