// Function : ~ParameterContainer
// Namespace: Steinberg:Vst:ParameterContainer
// Entry    : 00195f50
// Prototype: undefined ~ParameterContainer(ParameterContainer * this)
// Body     : 00195f50 - 00195fc9


/* Steinberg::Vst::ParameterContainer::~ParameterContainer() */

void __thiscall Steinberg::Vst::ParameterContainer::~ParameterContainer(ParameterContainer *this)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  
  puVar1 = *(undefined8 **)this;
  if (puVar1 != (undefined8 *)0x0) {
    plVar3 = (long *)*puVar1;
    plVar2 = (long *)puVar1[1];
    if (plVar3 != plVar2) {
      do {
        if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 00195fb4 to 00195fb6 has its CatchHandler @ 00195fd2 */
          (**(code **)(*(long *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar2);
      plVar3 = (long *)*puVar1;
    }
    if (plVar3 != (long *)0x0) {
      operator_delete(plVar3);
    }
    operator_delete(puVar1);
  }
                    /* try { // try from 00195f8c to 00195f93 has its CatchHandler @ 00195fca */
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
              *)(this + 8),*(void **)(this + 0x18));
  return;
}


