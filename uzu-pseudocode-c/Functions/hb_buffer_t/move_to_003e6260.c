// Function : move_to
// Namespace: hb_buffer_t
// Entry    : 003e6260
// Prototype: undefined8 move_to(hb_buffer_t * this, uint param_1)
// Body     : 003e6260 - 003e6462


/* hb_buffer_t::move_to(unsigned int) */

undefined8 __thiscall hb_buffer_t::move_to(hb_buffer_t *this,uint param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  void *__dest;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  
  uVar8 = (ulong)param_1;
  if (this[0x5a] == (hb_buffer_t)0x0) {
    *(uint *)(this + 0x5c) = param_1;
LAB_003e641c:
    return CONCAT71((int7)(uVar8 >> 8),1);
  }
  if (this[0x58] != (hb_buffer_t)0x0) {
    uVar7 = *(uint *)(this + 100);
    uVar10 = uVar7 - param_1;
    if (uVar7 >= param_1) {
      uVar4 = CONCAT71((uint7)(uint3)(param_1 >> 8),1);
      if (uVar7 < param_1 || uVar10 == 0) {
        return uVar4;
      }
      uVar3 = *(uint *)(this + 0x5c);
      uVar11 = uVar10 - uVar3;
      if (uVar3 <= uVar10 && uVar11 != 0) {
        iVar6 = *(int *)(this + 0x60);
        uVar7 = iVar6 + uVar11;
        if ((uVar7 != 0) && (*(uint *)(this + 0x68) <= uVar7)) {
          uVar5 = enlarge(this,uVar7);
          if ((char)uVar5 == '\0') {
            return 0;
          }
          uVar3 = *(uint *)(this + 0x5c);
          iVar6 = *(int *)(this + 0x60);
        }
        pvVar9 = (void *)((ulong)uVar3 * 0x14 + *(long *)(this + 0x70));
        memmove((void *)((long)pvVar9 + (ulong)uVar11 * 0x14),pvVar9,(ulong)(iVar6 - uVar3) * 0x14);
        uVar3 = *(int *)(this + 0x5c) + uVar11;
        uVar7 = *(uint *)(this + 0x60);
        if ((uVar7 <= uVar3 && uVar3 - uVar7 != 0) && (uVar2 = (uVar3 - uVar7) * 0x14, uVar2 != 0))
        {
          memset((void *)((ulong)uVar7 * 0x14 + *(long *)(this + 0x70)),0,(ulong)uVar2);
          uVar7 = *(uint *)(this + 0x60);
          uVar3 = *(int *)(this + 0x5c) + uVar11;
        }
        *(uint *)(this + 0x60) = uVar7 + uVar11;
        uVar7 = *(uint *)(this + 100);
      }
      *(uint *)(this + 0x5c) = uVar3 - uVar10;
      *(uint *)(this + 100) = uVar7 - uVar10;
      memmove((void *)((ulong)(uVar3 - uVar10) * 0x14 + *(long *)(this + 0x70)),
              (void *)((ulong)(uVar7 - uVar10) * 0x14 + *(long *)(this + 0x78)),(ulong)uVar10 * 0x14
             );
      return uVar4;
    }
    if ((param_1 < *(uint *)(this + 0x68)) || (uVar4 = enlarge(this,param_1), (char)uVar4 != '\0'))
    {
      uVar7 = param_1 - uVar7;
      uVar8 = (ulong)uVar7;
      pvVar9 = *(void **)(this + 0x70);
      pvVar1 = *(void **)(this + 0x78);
      __dest = pvVar1;
      if (pvVar1 == pvVar9) {
        uVar10 = *(uint *)(this + 100);
        if (*(int *)(this + 0x5c) + uVar7 < uVar10 + uVar7) {
          __dest = *(void **)(this + 0x80);
          *(void **)(this + 0x78) = __dest;
          if ((ulong)uVar10 == 0) {
            pvVar9 = pvVar1;
          }
          else {
            memcpy(__dest,pvVar9,(ulong)uVar10 * 0x14);
            __dest = *(void **)(this + 0x78);
            pvVar9 = *(void **)(this + 0x70);
          }
        }
        else {
          pvVar9 = pvVar1;
        }
      }
      memmove((void *)((long)__dest + (ulong)*(uint *)(this + 100) * 0x14),
              (void *)((long)pvVar9 + (ulong)*(uint *)(this + 0x5c) * 0x14),uVar8 * 0x14);
      *(uint *)(this + 0x5c) = *(int *)(this + 0x5c) + uVar7;
      *(uint *)(this + 100) = *(int *)(this + 100) + uVar7;
      goto LAB_003e641c;
    }
  }
  return 0;
}


