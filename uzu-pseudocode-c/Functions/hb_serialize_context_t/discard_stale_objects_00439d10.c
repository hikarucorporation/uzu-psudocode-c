// Function : discard_stale_objects
// Namespace: hb_serialize_context_t
// Entry    : 00439d10
// Prototype: undefined discard_stale_objects(hb_serialize_context_t * this)
// Body     : 00439d10 - 00439e5b


/* hb_serialize_context_t::discard_stale_objects() */

void __thiscall hb_serialize_context_t::discard_stale_objects(hb_serialize_context_t *this)

{
  undefined8 *puVar1;
  byte *pbVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  
  if (*(int *)(this + 0x2c) == 0) {
    uVar8 = *(uint *)(this + 0x54);
    while (1 < uVar8) {
      lVar9 = *(long *)(this + 0x58);
      puVar1 = *(undefined8 **)(lVar9 + (ulong)(uVar8 - 1) * 8);
      pbVar2 = (byte *)*puVar1;
      if (*(byte **)(this + 0x10) <= pbVar2) {
        return;
      }
      lVar3 = *(long *)(this + 0x88);
      if (lVar3 == 0) {
LAB_00439dcd:
        lVar9 = *(long *)(*(long *)(this + 0x58) + (ulong)(uVar8 - 1) * 8);
        puVar1 = (undefined8 *)(lVar9 + 0x10);
        iVar4 = *(int *)(lVar9 + 0x10);
      }
      else {
        uVar5 = (uint)(puVar1[1] - (long)pbVar2);
        if (0x7f < puVar1[1] - (long)pbVar2) {
          uVar5 = 0x80;
        }
        uVar5 = hb_array_t<char_const>::hash(pbVar2,uVar5);
        uVar6 = hb_array_t<char_const>::hash((byte *)puVar1[3],*(int *)((long)puVar1 + 0x14) * 0xc);
        plVar7 = hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::
                 fetch_item(*(uint *)(this + 0x7c),(ulong)*(uint *)(this + 0x80),lVar3,
                            (long *)(lVar9 + (ulong)(uVar8 - 1) * 8),uVar5 ^ uVar6);
        if (plVar7 == (long *)0x0) goto LAB_00439dcd;
        *(byte *)(plVar7 + 1) = *(byte *)(plVar7 + 1) & 0xfe;
        *(int *)(this + 0x74) = *(int *)(this + 0x74) + -1;
        uVar8 = *(uint *)(this + 0x54);
        if (uVar8 != 0) goto LAB_00439dcd;
        _hb_CrapPool = 0;
        lVar9 = 0;
        puVar1 = (undefined8 *)0x10;
        iVar4 = iRam0000000000000010;
      }
      if (iVar4 != 0) {
        *(undefined4 *)(lVar9 + 0x14) = 0;
        free(*(void **)(lVar9 + 0x18));
      }
      *puVar1 = 0;
      puVar1[1] = 0;
      if (*(int *)(lVar9 + 0x20) != 0) {
        *(undefined4 *)(lVar9 + 0x24) = 0;
        free(*(void **)(lVar9 + 0x28));
      }
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      if (*(int *)(this + 0x54) == 0) {
        return;
      }
      uVar8 = *(int *)(this + 0x54) - 1;
      *(uint *)(this + 0x54) = uVar8;
    }
  }
  return;
}


