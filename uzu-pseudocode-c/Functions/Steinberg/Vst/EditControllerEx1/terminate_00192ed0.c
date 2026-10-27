// Function : terminate
// Namespace: Steinberg:Vst:EditControllerEx1
// Entry    : 00192ed0
// Prototype: undefined8 terminate(EditControllerEx1 * this)
// Body     : 00192ed0 - 00192ffa


/* Steinberg::Vst::EditControllerEx1::terminate() */

undefined8 __thiscall Steinberg::Vst::EditControllerEx1::terminate(EditControllerEx1 *this)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = *(long **)(this + 0x90);
  plVar1 = *(long **)(this + 0x98);
  if (plVar1 != plVar2) {
    plVar3 = plVar2;
    do {
      if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 00192f1b to 00192f1d has its CatchHandler @ 0019300b */
        (**(code **)(*(long *)*plVar3 + 0x10))();
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
    *(long **)(this + 0x98) = plVar2;
  }
  plVar2 = *(long **)(this + 0xa8);
  plVar1 = *(long **)(this + 0xb0);
  if (plVar2 != plVar1) {
    do {
      plVar3 = (long *)*plVar2;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x50))(plVar3,this);
      }
      plVar2 = plVar2 + 1;
    } while (plVar2 != plVar1);
    plVar2 = *(long **)(this + 0xa8);
    plVar1 = *(long **)(this + 0xb0);
    if (plVar1 != plVar2) {
      plVar3 = plVar2;
      do {
        if ((long *)*plVar3 != (long *)0x0) {
                    /* try { // try from 00192f94 to 00192f96 has its CatchHandler @ 00193003 */
          (**(code **)(*(long *)*plVar3 + 0x10))();
          *plVar3 = 0;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
      *(long **)(this + 0xb0) = plVar2;
    }
  }
                    /* try { // try from 00192fb5 to 00192fbc has its CatchHandler @ 00192ffb */
  std::
  _Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
  ::_M_erase((_Rb_tree<int,std::pair<int_const,unsigned_long>,std::_Select1st<std::pair<int_const,unsigned_long>>,std::less<int>,std::allocator<std::pair<int_const,unsigned_long>>>
              *)(this + 0xc0),*(void **)(this + 0xd0));
  *(undefined8 *)(this + 0xd0) = 0;
  *(EditControllerEx1 **)(this + 0xd8) = this + 200;
  *(EditControllerEx1 **)(this + 0xe0) = this + 200;
  *(undefined8 *)(this + 0xe8) = 0;
  EditController::terminate((EditController *)this);
  return 0;
}


