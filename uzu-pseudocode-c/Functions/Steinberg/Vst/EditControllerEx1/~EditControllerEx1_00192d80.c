// Function : ~EditControllerEx1
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00192d80
// Prototype: undefined ~EditControllerEx1(EditControllerEx1 * this)
// Body     : 00192d80 - 00192e92


/* Steinberg::Vst::EditControllerEx1::~EditControllerEx1() */

void __thiscall Steinberg::Vst::EditControllerEx1::~EditControllerEx1(EditControllerEx1 *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR_queryInterface_00703a08;
  *(undefined ***)(this + 0x10) = &PTR_queryInterface_00703c10;
  *(undefined ***)(this + 0x18) = &PTR_queryInterface_00703c48;
  *(undefined ***)(this + 0x30) = &PTR_queryInterface_00703c88;
  *(undefined ***)(this + 0x38) = &PTR_queryInterface_00703d28;
  *(undefined ***)(this + 0x88) = &PTR_queryInterface_00703d68;
                    /* try { // try from 00192dda to 00192dde has its CatchHandler @ 00192e93 */
  std::
  _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
              *)(this + 0xc0),*(void **)(this + 0xd0));
  plVar2 = *(long **)(this + 0xa8);
  plVar1 = *(long **)(this + 0xb0);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 00192e44 to 00192e46 has its CatchHandler @ 00192ea3 */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0xa8);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  plVar2 = *(long **)(this + 0x90);
  plVar1 = *(long **)(this + 0x98);
  if (plVar2 != plVar1) {
    do {
      if ((long *)*plVar2 != (long *)0x0) {
                    /* try { // try from 00192e64 to 00192e66 has its CatchHandler @ 00192e9b */
        (**(code **)(*(long *)*plVar2 + 0x10))();
        *plVar2 = 0;
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0x90);
  }
  if (plVar2 != (long *)0x0) {
    operator_delete(plVar2);
  }
  EditController::~EditController((EditController *)this);
  return;
}


