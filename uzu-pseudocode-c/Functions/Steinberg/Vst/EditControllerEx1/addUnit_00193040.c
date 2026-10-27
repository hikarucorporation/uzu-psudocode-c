// Function : addUnit
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00193040
// Prototype: undefined8 addUnit(EditControllerEx1 * this, long param_1)
// Body     : 00193040 - 00193092


/* Steinberg::Vst::EditControllerEx1::addUnit(Steinberg::Vst::Unit*) */

undefined8 __thiscall
Steinberg::Vst::EditControllerEx1::addUnit(EditControllerEx1 *this,long param_1)

{
  long *plVar1;
  undefined8 extraout_RAX;
  char local_9;
  long local_8;
  
  local_9 = '\0';
  plVar1 = *(long **)(this + 0x98);
  if (plVar1 == *(long **)(this + 0xa0)) {
    local_8 = param_1;
    std::
    vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>
    ::_M_realloc_insert<Steinberg::Vst::Unit*&,bool>
              ((vector<Steinberg::IPtr<Steinberg::Vst::Unit>,std::allocator<Steinberg::IPtr<Steinberg::Vst::Unit>>>
                *)(this + 0x90),(long)plVar1,&local_8,&local_9);
    return CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  *plVar1 = param_1;
  *(long **)(this + 0x98) = plVar1 + 1;
  return CONCAT71((int7)((ulong)param_1 >> 8),1);
}


