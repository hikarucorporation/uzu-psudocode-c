// Function : ~vector
// Namespace: std:vector_juce__detail__GlyphsStorage_std__allocator_juce__detail__GlyphsStorage__
// Entry    : 0031fd10
// Prototype: undefined ~vector(vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> * this)
// Body     : 0031fd10 - 0031fdf5


/* std::vector<juce::detail::GlyphsStorage, std::allocator<juce::detail::GlyphsStorage> >::~vector()
    */

void __thiscall
std::vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>>::~vector
          (vector<juce::detail::GlyphsStorage,std::allocator<juce::detail::GlyphsStorage>> *this)

{
  long *plVar1;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *p_Var2;
  int iVar3;
  void *pvVar4;
  long *plVar5;
  _Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *this_00;
  undefined *puVar6;
  void *pvVar7;
  
  puVar6 = PTR___libc_single_threaded_00715c50;
  pvVar7 = *(void **)this;
  pvVar4 = *(void **)(this + 8);
  if (pvVar7 != pvVar4) {
    do {
      plVar5 = *(long **)((long)pvVar7 + 0x18);
      if (plVar5 != (long *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*plVar5 + 8))();
        }
      }
      this_00 = *(_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> **)((long)pvVar7 + 8);
      if (this_00 != (_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)0x0) {
        if (*(long *)(this_00 + 8) == 0x100000001) {
          *(undefined8 *)(this_00 + 8) = 0;
          (**(code **)(*(long *)this_00 + 0x10))(this_00);
          (**(code **)(*(long *)this_00 + 0x18))(this_00);
        }
        else {
          if (*puVar6 == '\0') {
            LOCK();
            p_Var2 = this_00 + 8;
            iVar3 = *(int *)p_Var2;
            *(int *)p_Var2 = *(int *)p_Var2 + -1;
            UNLOCK();
          }
          else {
            iVar3 = (int)*(long *)(this_00 + 8);
            *(int *)(this_00 + 8) = iVar3 + -1;
          }
          if (iVar3 == 1) {
            _Sp_counted_base<(__gnu_cxx::_Lock_policy)2>::_M_release_last_use_cold(this_00);
          }
        }
      }
      pvVar7 = (void *)((long)pvVar7 + 0x20);
    } while (pvVar7 != pvVar4);
    pvVar7 = *(void **)this;
  }
  if (pvVar7 == (void *)0x0) {
    return;
  }
  operator_delete(pvVar7);
  return;
}


