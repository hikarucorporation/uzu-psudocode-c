// Function : reset
// Namespace: hb_buffer_t
// Entry    : 003f58d0
// Prototype: undefined reset(hb_buffer_t * this)
// Body     : 003f58d0 - 003f59d8


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* hb_buffer_t::reset() */

void __thiscall hb_buffer_t::reset(hb_buffer_t *this)

{
  undefined8 uVar1;
  int *piVar2;
  int *piVar3;
  
  hb_unicode_funcs_destroy(*(int **)(this + 0x10));
  while (piVar3 = static_ucd_funcs, static_ucd_funcs = piVar3, piVar3 == (int *)0x0) {
    piVar3 = hb_ucd_unicode_funcs_lazy_loader_t::create();
    piVar2 = static_ucd_funcs;
    if (piVar3 == (int *)0x0) {
      piVar3 = &_hb_Null_hb_unicode_funcs_t;
      LOCK();
      if (static_ucd_funcs == (int *)0x0) {
        static_ucd_funcs = &_hb_Null_hb_unicode_funcs_t;
      }
      UNLOCK();
    }
    else {
      LOCK();
      if (static_ucd_funcs == (int *)0x0) {
        static_ucd_funcs = piVar3;
      }
      UNLOCK();
    }
    if (piVar2 == (int *)0x0) break;
    if ((piVar3 != (int *)0x0) && (piVar3 != &_hb_Null_hb_unicode_funcs_t)) {
      hb_unicode_funcs_destroy(piVar3);
    }
  }
  if ((piVar3 != (int *)0x0) && (*piVar3 != 0)) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(int **)(this + 0x10) = piVar3;
  uVar1 = _UNK_005dd358;
  *(undefined8 *)(this + 0x18) = _DAT_005dd350;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = 0xffffffff00000000;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  this[0x58] = (hb_buffer_t)0x1;
  *(undefined8 *)(this + 0x59) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(this + 0x70);
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined2 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xbc) = 1;
  return;
}


