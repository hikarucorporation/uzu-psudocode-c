// Function : replace_glyph
// Namespace: hb_buffer_t
// Entry    : 004217f0
// Prototype: undefined8 replace_glyph(hb_buffer_t * this, undefined4 param_1)
// Body     : 004217f0 - 004218b5


/* hb_buffer_t::replace_glyph(unsigned int) */

undefined8 __thiscall hb_buffer_t::replace_glyph(hb_buffer_t *this,undefined4 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  void *__src;
  void *pvVar9;
  
  uVar8 = *(int *)(this + 100) + 1;
  if (((uVar8 != 0) && (*(uint *)(this + 0x68) <= uVar8)) &&
     (uVar5 = enlarge(this,uVar8), (char)uVar5 == '\0')) {
    return 0;
  }
  __src = *(void **)(this + 0x70);
  pvVar4 = *(void **)(this + 0x78);
  pvVar9 = pvVar4;
  if (pvVar4 == __src) {
    uVar8 = *(uint *)(this + 100);
    if (*(int *)(this + 0x5c) + 1U < uVar8 + 1) {
      pvVar9 = *(void **)(this + 0x80);
      *(void **)(this + 0x78) = pvVar9;
      if ((ulong)uVar8 != 0) {
        memcpy(pvVar9,__src,(ulong)uVar8 * 0x14);
        pvVar9 = *(void **)(this + 0x78);
        __src = *(void **)(this + 0x70);
        goto LAB_00421859;
      }
    }
    __src = pvVar4;
  }
  else {
  }
LAB_00421859:
  uVar8 = *(uint *)(this + 0x5c);
  uVar3 = *(uint *)(this + 100);
  uVar7 = (ulong)uVar3;
  uVar6 = uVar3 - 1;
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  if (uVar8 < *(uint *)(this + 0x60)) {
    uVar6 = uVar8;
  }
  if (uVar8 >= *(uint *)(this + 0x60)) {
    __src = pvVar9;
  }
  puVar1 = (undefined8 *)((long)__src + (ulong)uVar6 * 0x14);
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)((long)pvVar9 + uVar7 * 0x14);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  *(undefined4 *)((long)pvVar9 + uVar7 * 0x14 + 0x10) =
       *(undefined4 *)((long)__src + (ulong)uVar6 * 0x14 + 0x10);
  *(undefined4 *)((long)pvVar9 + uVar7 * 0x14) = param_1;
  *(int *)(this + 0x5c) = *(int *)(this + 0x5c) + 1;
  *(int *)(this + 100) = *(int *)(this + 100) + 1;
  return CONCAT71((int7)(uVar7 * 5 >> 8),1);
}


