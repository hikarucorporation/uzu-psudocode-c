// Function : ProgramList
// Namespace: Steinberg:Vst:ProgramList
// Entry    : 00193c30
// Prototype: undefined ProgramList(ProgramList * this, long param_1)
// Body     : 00193c30 - 00193d17


/* Steinberg::Vst::ProgramList::ProgramList(Steinberg::Vst::ProgramList const&) */

void __thiscall Steinberg::Vst::ProgramList::ProgramList(ProgramList *this,long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  *(undefined4 *)(this + 8) = 1;
  *(undefined ***)this = &PTR_queryInterface_00703df0;
  memcpy(this + 0xc,(void *)(param_1 + 0xc),0x108);
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  uVar2 = *(long *)(param_1 + 0x120) - *(long *)(param_1 + 0x118);
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  if (uVar2 == 0) {
    plVar1 = (long *)0x0;
  }
  else {
    if (0x7fffffffffffffe0 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__throw_bad_array_new_length();
    }
    plVar1 = operator_new(uVar2);
  }
  *(long **)(this + 0x118) = plVar1;
  *(long **)(this + 0x120) = plVar1;
  *(long **)(this + 0x128) = plVar1 + ((long)uVar2 >> 5) * 4;
                    /* try { // try from 00193ce8 to 00193cec has its CatchHandler @ 00193d18 */
  plVar1 = std::
           __do_uninit_copy<__gnu_cxx::__normal_iterator<std::__cxx11::u16string_const*,std::vector<std::__cxx11::u16string,std::allocator<std::__cxx11::u16string>>>,std::__cxx11::u16string*>
                     (*(long *)(param_1 + 0x118),*(long *)(param_1 + 0x120),plVar1);
  *(long **)(this + 0x120) = plVar1;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  return;
}


