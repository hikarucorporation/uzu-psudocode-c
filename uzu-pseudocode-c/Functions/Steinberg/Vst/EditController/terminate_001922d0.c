// Function : terminate
// Namespace: Steinberg:Vst:EditController
// Entry    : 001922d0
// Prototype: undefined8 terminate(EditController * this)
// Body     : 001922d0 - 001923ce


/* Steinberg::Vst::EditController::terminate() */

undefined8 __thiscall Steinberg::Vst::EditController::terminate(EditController *this)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  puVar1 = *(undefined8 **)(this + 0x50);
  if (puVar1 != (undefined8 *)0x0) {
    plVar2 = (long *)*puVar1;
    plVar3 = (long *)puVar1[1];
    if (plVar3 != plVar2) {
      plVar4 = plVar2;
      do {
        if ((long *)*plVar4 != (long *)0x0) {
                    /* try { // try from 00192314 to 00192316 has its CatchHandler @ 001923d7 */
          (**(code **)(*(long *)*plVar4 + 0x10))();
          *plVar4 = 0;
        }
        plVar4 = plVar4 + 1;
      } while (plVar4 != plVar3);
      puVar1[1] = plVar2;
    }
  }
                    /* try { // try from 0019232d to 00192334 has its CatchHandler @ 001923cf */
  std::
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
  ::_M_erase((_Rb_tree<unsigned_int,std::pair<unsigned_int_const,unsigned_long>,std::_Select1st<std::pair<unsigned_int_const,unsigned_long>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_long>>>
              *)(this + 0x58),*(void **)(this + 0x68));
  *(undefined8 *)(this + 0x68) = 0;
  *(EditController **)(this + 0x70) = this + 0x60;
  *(EditController **)(this + 0x78) = this + 0x60;
  *(undefined8 *)(this + 0x80) = 0;
  if (*(long **)(this + 0x40) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x40) + 0x10))();
  }
  *(undefined8 *)(this + 0x40) = 0;
  if (*(long **)(this + 0x48) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x48) + 0x10))();
  }
  *(undefined8 *)(this + 0x48) = 0;
  if (*(long **)(this + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x20) + 0x10))();
    *(undefined8 *)(this + 0x20) = 0;
  }
  plVar2 = *(long **)(this + 0x28);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,this + 0x18);
    if (*(long **)(this + 0x28) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x28) + 0x10))();
      *(undefined8 *)(this + 0x28) = 0;
    }
  }
  return 0;
}


