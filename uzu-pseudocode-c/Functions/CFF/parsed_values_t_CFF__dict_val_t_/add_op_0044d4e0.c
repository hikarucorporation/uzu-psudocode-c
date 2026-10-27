// Function : add_op
// Namespace: CFF:parsed_values_t_CFF__dict_val_t_
// Entry    : 0044d4e0
// Prototype: undefined add_op(parsed_values_t<CFF::dict_val_t> * this, undefined4 param_1, long * param_2, undefined8 * param_3)
// Body     : 0044d4e0 - 0044d5cd


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CFF::parsed_values_t<CFF::dict_val_t>::add_op(unsigned int, CFF::byte_str_ref_t const&,
   CFF::dict_val_t const&) */

void __thiscall
CFF::parsed_values_t<CFF::dict_val_t>::add_op
          (parsed_values_t<CFF::dict_val_t> *this,undefined4 param_1,long *param_2,
          undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  void *pvVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  
  uVar4 = *(uint *)(this + 8);
  if ((int)uVar4 <= *(int *)(this + 0xc)) {
    if ((int)uVar4 < 0) {
LAB_0044d5a4:
      _hb_CrapPool = 0;
      _DAT_0071cd88 = 0;
      plVar6 = &_hb_CrapPool;
      goto LAB_0044d52a;
    }
    uVar7 = *(int *)(this + 0xc) + 1;
    if (uVar4 < uVar7) {
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 + (uVar9 >> 1) + 8;
      } while (uVar9 < uVar7);
      if (0xfffffff < uVar9) {
LAB_0044d59f:
        *(uint *)(this + 8) = ~uVar4;
        goto LAB_0044d5a4;
      }
      if (uVar9 == 0) {
        free(*(void **)(this + 0x10));
        pvVar5 = (void *)0x0;
      }
      else {
        pvVar5 = realloc(*(void **)(this + 0x10),(ulong)uVar9 << 4);
        if (pvVar5 == (void *)0x0) {
          uVar4 = *(uint *)(this + 8);
          if (uVar9 <= uVar4) goto LAB_0044d50d;
          goto LAB_0044d59f;
        }
      }
      *(void **)(this + 0x10) = pvVar5;
      *(uint *)(this + 8) = uVar9;
    }
  }
LAB_0044d50d:
  uVar4 = *(uint *)(this + 0xc);
  *(uint *)(this + 0xc) = uVar4 + 1;
  lVar8 = (ulong)uVar4 * 0x10;
  plVar6 = (long *)(*(long *)(this + 0x10) + lVar8);
  uVar3 = param_3[1];
  puVar1 = (undefined8 *)(*(long *)(this + 0x10) + lVar8);
  *puVar1 = *param_3;
  puVar1[1] = uVar3;
LAB_0044d52a:
  *(undefined4 *)(plVar6 + 1) = param_1;
  uVar4 = *(uint *)this;
  iVar2 = *(int *)((long)param_2 + 0xc);
  uVar9 = iVar2 - uVar4;
  uVar7 = *(uint *)(param_2 + 1) - uVar4;
  if (*(uint *)(param_2 + 1) < uVar4) {
    uVar7 = 0;
  }
  if (uVar9 < uVar7) {
    uVar7 = uVar9;
  }
  *plVar6 = (ulong)uVar4 + *param_2;
  *(char *)((long)plVar6 + 0xc) = (char)uVar7;
  *(int *)this = iVar2;
  return;
}


