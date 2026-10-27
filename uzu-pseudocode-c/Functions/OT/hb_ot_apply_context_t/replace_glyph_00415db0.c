// Function : replace_glyph
// Namespace: OT:hb_ot_apply_context_t
// Entry    : 00415db0
// Prototype: undefined replace_glyph(hb_ot_apply_context_t * this, uint param_1)
// Body     : 00415db0 - 00415e81


/* OT::hb_ot_apply_context_t::replace_glyph(unsigned int) */

void __thiscall OT::hb_ot_apply_context_t::replace_glyph(hb_ot_apply_context_t *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  hb_buffer_t *this_00;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  void *__src;
  void *pvVar9;
  
  _set_glyph_class(this,param_1,0,'\0','\0');
  this_00 = *(hb_buffer_t **)(this + 0xa0);
  uVar8 = *(int *)(this_00 + 100) + 1;
  if (((uVar8 != 0) && (*(uint *)(this_00 + 0x68) <= uVar8)) &&
     (uVar5 = hb_buffer_t::enlarge(this_00,uVar8), (char)uVar5 == '\0')) {
    return;
  }
  __src = *(void **)(this_00 + 0x70);
  pvVar4 = *(void **)(this_00 + 0x78);
  pvVar9 = pvVar4;
  if (pvVar4 == __src) {
    uVar8 = *(uint *)(this_00 + 100);
    if (*(int *)(this_00 + 0x5c) + 1U < uVar8 + 1) {
      pvVar9 = *(void **)(this_00 + 0x80);
      *(void **)(this_00 + 0x78) = pvVar9;
      if ((ulong)uVar8 != 0) {
        memcpy(pvVar9,__src,(ulong)uVar8 * 0x14);
        pvVar9 = *(void **)(this_00 + 0x78);
        __src = *(void **)(this_00 + 0x70);
        goto LAB_00415e2c;
      }
    }
    __src = pvVar4;
  }
  else {
  }
LAB_00415e2c:
  uVar8 = *(uint *)(this_00 + 0x5c);
  uVar3 = *(uint *)(this_00 + 100);
  uVar7 = (ulong)uVar3;
  uVar6 = uVar3 - 1;
  if (uVar3 == 0) {
    uVar6 = 0;
  }
  if (uVar8 < *(uint *)(this_00 + 0x60)) {
    uVar6 = uVar8;
  }
  if (uVar8 >= *(uint *)(this_00 + 0x60)) {
    __src = pvVar9;
  }
  puVar1 = (undefined8 *)((long)__src + (ulong)uVar6 * 0x14);
  uVar5 = puVar1[1];
  puVar2 = (undefined8 *)((long)pvVar9 + uVar7 * 0x14);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  *(undefined4 *)((long)pvVar9 + uVar7 * 0x14 + 0x10) =
       *(undefined4 *)((long)__src + (ulong)uVar6 * 0x14 + 0x10);
  *(uint *)((long)pvVar9 + uVar7 * 0x14) = param_1;
  *(int *)(this_00 + 0x5c) = *(int *)(this_00 + 0x5c) + 1;
  *(int *)(this_00 + 100) = *(int *)(this_00 + 100) + 1;
  return;
}


