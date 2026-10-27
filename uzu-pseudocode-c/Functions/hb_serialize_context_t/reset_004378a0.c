// Function : reset
// Namespace: hb_serialize_context_t
// Entry    : 004378a0
// Prototype: undefined reset(hb_serialize_context_t * this)
// Body     : 004378a0 - 00437998


/* hb_serialize_context_t::reset() */

void __thiscall hb_serialize_context_t::reset(hb_serialize_context_t *this)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 0x18);
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  fini(this);
  uVar1 = *(uint *)(this + 0x50);
  if ((int)uVar1 <= *(int *)(this + 0x54)) {
    if ((int)uVar1 < 0) {
LAB_00437975:
      _hb_CrapPool = 0;
      goto LAB_004378f0;
    }
    uVar3 = *(int *)(this + 0x54) + 1;
    if (uVar1 < uVar3) {
      uVar4 = uVar1;
      do {
        uVar4 = uVar4 + (uVar4 >> 1) + 8;
      } while (uVar4 < uVar3);
      if (0x1fffffff < uVar4) {
LAB_00437970:
        *(uint *)(this + 0x50) = ~uVar1;
        goto LAB_00437975;
      }
      if (uVar4 == 0) {
        free(*(void **)(this + 0x58));
        pvVar2 = (void *)0x0;
      }
      else {
        pvVar2 = realloc(*(void **)(this + 0x58),(ulong)uVar4 << 3);
        if (pvVar2 == (void *)0x0) {
          uVar1 = *(uint *)(this + 0x50);
          if (uVar4 <= uVar1) goto LAB_004378db;
          goto LAB_00437970;
        }
      }
      *(void **)(this + 0x58) = pvVar2;
      *(uint *)(this + 0x50) = uVar4;
    }
  }
LAB_004378db:
  uVar1 = *(uint *)(this + 0x54);
  *(uint *)(this + 0x54) = uVar1 + 1;
  *(undefined8 *)(*(long *)(this + 0x58) + (ulong)uVar1 * 8) = 0;
LAB_004378f0:
  *(undefined4 *)(this + 0x60) = 1;
  *(undefined4 *)(this + 100) = 1;
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (hb_serialize_context_t)0x1;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x72) = 0;
  *(undefined8 *)(this + 0x7a) = 0;
  *(undefined2 *)(this + 0x82) = 0;
  return;
}


