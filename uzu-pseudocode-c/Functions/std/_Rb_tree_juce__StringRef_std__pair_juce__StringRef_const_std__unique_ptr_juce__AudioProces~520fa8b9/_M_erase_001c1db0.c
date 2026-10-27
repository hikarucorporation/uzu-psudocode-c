// Function : _M_erase
// Namespace: std:_Rb_tree_juce__StringRef_std__pair_juce__StringRef_const_std__unique_ptr_juce__AudioProces~520fa8b9
// Entry    : 001c1db0
// Prototype: undefined _M_erase(_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>> * this)
// Body     : 001c1db0 - 001c1dfc


/* std::_Rb_tree<juce::StringRef, std::pair<juce::StringRef const,
   std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,
   std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> > >,
   std::_Select1st<std::pair<juce::StringRef const,
   std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,
   std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> > > >,
   juce::AudioProcessorValueTreeState::StringRefLessThan, std::allocator<std::pair<juce::StringRef
   const, std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,
   std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> > > >
   >::_M_erase(std::_Rb_tree_node<std::pair<juce::StringRef const,
   std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,
   std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> > > >*) */

void __thiscall
std::
_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
::_M_erase(_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
           *this)

{
  _Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
  *p_Var1;
  
  if (this != (_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
               *)0x0) {
    do {
      _M_erase(*(_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
                 **)(this + 0x18));
      p_Var1 = *(_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
                 **)(this + 0x10);
      if (*(default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> **)(this + 0x28) !=
          (default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> *)0x0) {
        default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>::operator()
                  (*(default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter> **)
                    (this + 0x28));
      }
      *(undefined8 *)(this + 0x28) = 0;
      operator_delete(this);
      this = p_Var1;
    } while (p_Var1 != (_Rb_tree<juce::StringRef,std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>,std::_Select1st<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>,juce::AudioProcessorValueTreeState::StringRefLessThan,std::allocator<std::pair<juce::StringRef_const,std::unique_ptr<juce::AudioProcessorValueTreeState::ParameterAdapter,std::default_delete<juce::AudioProcessorValueTreeState::ParameterAdapter>>>>>
                        *)0x0);
  }
  return;
}


