// Function : fetch_item
// Namespace: hb_hashmap_t_hb_serialize_context_t__object_t_const__unsigned_int_false_
// Entry    : 00439ff0
// Prototype: long * fetch_item(uint param_1, ulong param_2, long param_3, long * param_4, uint param_5)
// Body     : 00439ff0 - 0043a11b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int,
   false>::fetch_item(hb_serialize_context_t::object_t const* const&, unsigned int) const */

long * __cdecl
hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::fetch_item
          (uint param_1,ulong param_2,long param_3,long *param_4,uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  long *plVar10;
  
  uVar8 = (ulong)(param_5 & 0x3fffffff) % (param_2 & 0xffffffff);
  uVar7 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
  if ((uVar7 & 2) != 0) {
    puVar1 = (undefined8 *)*param_4;
    iVar9 = 1;
    do {
      if (uVar7 >> 2 == (param_5 & 0x3fffffff)) {
        plVar10 = (long *)(uVar8 * 0x10 + param_3);
        puVar2 = (undefined8 *)*plVar10;
        uVar6 = puVar2[1] - (long)*puVar2;
        if ((((uVar6 == puVar1[1] - (long)*puVar1) &&
             (iVar5 = *(int *)((long)puVar2 + 0x14), iVar5 == *(int *)((long)puVar1 + 0x14))) &&
            (((int)uVar6 == 0 ||
             (iVar4 = bcmp((void *)*puVar2,(void *)*puVar1,uVar6 & 0xffffffff), iVar4 == 0)))) &&
           ((uVar3 = iVar5 * 0xc, uVar3 == 0 ||
            (iVar5 = bcmp((void *)puVar2[3],(void *)puVar1[3],(ulong)uVar3), iVar5 == 0)))) {
          if ((uVar7 & 1) == 0) {
            return (long *)0x0;
          }
          return plVar10;
        }
      }
      uVar8 = (ulong)((int)uVar8 + iVar9 & param_1);
      uVar7 = *(uint *)(param_3 + 8 + uVar8 * 0x10);
      iVar9 = iVar9 + 1;
    } while ((uVar7 & 2) != 0);
  }
  return (long *)0x0;
}


