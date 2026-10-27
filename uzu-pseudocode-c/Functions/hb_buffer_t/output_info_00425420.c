// Function : output_info
// Namespace: hb_buffer_t
// Entry    : 00425420
// Prototype: undefined output_info(hb_buffer_t * this, undefined8 * param_1)
// Body     : 00425420 - 0042549f


/* hb_buffer_t::output_info(hb_glyph_info_t const&) */

void __thiscall hb_buffer_t::output_info(hb_buffer_t *this,undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uVar3;
  void *__dest;
  
  uVar3 = *(int *)(this + 100) + 1;
  if (((uVar3 == 0) || (uVar3 < *(uint *)(this + 0x68))) ||
     (uVar2 = enlarge(this,uVar3), (char)uVar2 != '\0')) {
    __dest = *(void **)(this + 0x78);
    if ((__dest == *(void **)(this + 0x70)) &&
       (uVar3 = *(uint *)(this + 100), *(uint *)(this + 0x5c) < uVar3 + 1)) {
      __dest = *(void **)(this + 0x80);
      *(void **)(this + 0x78) = __dest;
      if ((ulong)uVar3 != 0) {
        memcpy(__dest,*(void **)(this + 0x70),(ulong)uVar3 * 0x14);
        __dest = *(void **)(this + 0x78);
      }
    }
    uVar3 = *(uint *)(this + 100);
    *(undefined4 *)((long)__dest + (ulong)uVar3 * 0x14 + 0x10) = *(undefined4 *)(param_1 + 2);
    uVar2 = param_1[1];
    puVar1 = (undefined8 *)((long)__dest + (ulong)uVar3 * 0x14);
    *puVar1 = *param_1;
    puVar1[1] = uVar2;
    *(int *)(this + 100) = *(int *)(this + 100) + 1;
  }
  return;
}


