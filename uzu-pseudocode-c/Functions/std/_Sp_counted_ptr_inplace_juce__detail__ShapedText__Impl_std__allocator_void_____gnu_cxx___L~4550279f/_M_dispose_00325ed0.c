// Function : _M_dispose
// Namespace: std:_Sp_counted_ptr_inplace_juce__detail__ShapedText__Impl_std__allocator_void_____gnu_cxx___L~4550279f
// Entry    : 00325ed0
// Prototype: undefined _M_dispose(_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2> * this)
// Body     : 00325ed0 - 00326040


/* std::_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl, std::allocator<void>,
   (__gnu_cxx::_Lock_policy)2>::_M_dispose() */

void __thiscall
std::
_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
::_M_dispose(_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
             *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  int *piVar7;
  
  if (*(void **)(this + 0x2c0) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x2c0));
  }
  if (*(void **)(this + 0x2a8) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x2a8));
  }
  if (*(void **)(this + 0x290) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x290));
  }
  if (*(void **)(this + 0x278) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x278));
  }
  if (*(void **)(this + 0x260) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x260));
  }
  if (this[600] !=
      (_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
       )0x0) {
    this[600] = (_Sp_counted_ptr_inplace<juce::detail::ShapedText::Impl,std::allocator<void>,(__gnu_cxx::_Lock_policy)2>
                 )0x0;
    juce::detail::SimpleShapedText::~SimpleShapedText((SimpleShapedText *)(this + 400));
  }
  if (*(void **)(this + 0x178) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x178));
  }
  if (*(void **)(this + 0x160) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x160));
  }
  juce::detail::SimpleShapedText::~SimpleShapedText((SimpleShapedText *)(this + 0x90));
  piVar7 = (int *)(*(long *)(this + 0x88) + -0x10);
  if (piVar7 != &juce::emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
      lVar3 = *(long *)(this + 0x80);
      goto joined_r0x00325fd4;
    }
  }
  lVar3 = *(long *)(this + 0x80);
joined_r0x00325fd4:
  piVar7 = (int *)(lVar3 + -0x10);
  if (piVar7 != &juce::emptyString) {
    LOCK();
    iVar2 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      operator_delete__(piVar7);
    }
  }
  plVar6 = *(long **)(this + 0x50);
  plVar4 = *(long **)(this + 0x58);
  if (plVar6 != plVar4) {
    do {
      plVar5 = (long *)*plVar6;
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar4);
    plVar6 = *(long **)(this + 0x50);
  }
  if (plVar6 != (long *)0x0) {
    operator_delete(plVar6);
  }
  if (*(void **)(this + 0x38) == (void *)0x0) {
    return;
  }
  operator_delete(*(void **)(this + 0x38));
  return;
}


