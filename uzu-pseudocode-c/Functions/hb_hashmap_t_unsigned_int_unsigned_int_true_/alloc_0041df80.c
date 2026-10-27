// Function : alloc
// Namespace: hb_hashmap_t_unsigned_int_unsigned_int_true_
// Entry    : 0041df80
// Prototype: bool alloc(hb_hashmap_t<unsigned_int,unsigned_int,true> * this, ulong param_1)
// Body     : 0041df80 - 0041e20d


/* hb_hashmap_t<unsigned int, unsigned int, true>::alloc(unsigned int) */

bool __thiscall
hb_hashmap_t<unsigned_int,unsigned_int,true>::alloc
          (hb_hashmap_t<unsigned_int,unsigned_int,true> *this,ulong param_1)

{
  int *piVar1;
  int iVar2;
  void *__ptr;
  long lVar3;
  size_t __size;
  uint uVar4;
  void *__s;
  uint *puVar5;
  undefined4 *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  bool bVar14;
  
  if (this[0x10] == (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0) {
    bVar14 = false;
  }
  else {
    uVar4 = (uint)param_1;
    if ((uVar4 == 0) ||
       (bVar14 = true, *(uint *)(this + 0x1c) <= ((uint)(param_1 >> 1) & 0x7fffffff) + uVar4)) {
      uVar8 = *(uint *)(this + 0x14);
      if (*(uint *)(this + 0x14) < uVar4) {
        uVar8 = uVar4;
      }
      uVar4 = uVar8 * 2 + 8;
      if (uVar4 == 0) {
        uVar4 = 0;
      }
      else {
        uVar8 = 0x1f;
        if (uVar4 != 0) {
          for (; uVar4 >> uVar8 == 0; uVar8 = uVar8 - 1) {
          }
        }
        uVar4 = (uVar8 ^ 0xffffffe0) + 0x21;
      }
      uVar8 = 1 << ((byte)uVar4 & 0x1f);
      __size = (ulong)uVar8 * 0xc;
      __s = malloc(__size);
      if (__s == (void *)0x0) {
        this[0x10] = (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0;
      }
      else {
        if ((int)__size != 0) {
          memset(__s,0,__size & 0xffffffff);
        }
        iVar2 = *(int *)(this + 0x1c);
        __ptr = *(void **)(this + 0x28);
        *(undefined8 *)(this + 0x14) = 0;
        *(uint *)(this + 0x1c) = uVar8 - 1;
        if (uVar4 < 0x20) {
          puVar6 = (undefined4 *)(&DAT_005fce60 + (ulong)uVar4 * 4);
        }
        else {
          puVar6 = &DAT_005fcedc;
        }
        *(undefined4 *)(this + 0x20) = *puVar6;
        *(short *)(this + 0x12) = (short)uVar4 * 2;
        *(void **)(this + 0x28) = __s;
        if (1 < iVar2 + 1U) {
          uVar13 = 0;
          do {
            uVar4 = *(uint *)((long)__ptr + uVar13 * 0xc + 4);
            if ((((uVar4 & 1) != 0) &&
                (this[0x10] != (hb_hashmap_t<unsigned_int,unsigned_int,true>)0x0)) &&
               (((*(uint *)(this + 0x18) >> 1) + *(uint *)(this + 0x18) < *(uint *)(this + 0x1c) ||
                (bVar14 = alloc(this,0), bVar14)))) {
              piVar1 = (int *)((long)__ptr + uVar13 * 0xc);
              uVar10 = 0;
              uVar7 = (ulong)(uVar4 >> 2) % (ulong)*(uint *)(this + 0x20);
              lVar3 = *(long *)(this + 0x28);
              uVar8 = *(uint *)(lVar3 + 4 + uVar7 * 0xc);
              if ((uVar8 & 2) == 0) {
LAB_0041e187:
                uVar12 = uVar7;
              }
              else {
                uVar12 = 0xffffffff;
                uVar10 = 0;
                do {
                  iVar11 = (int)uVar12;
                  if (*(int *)(lVar3 + uVar7 * 0xc) == *piVar1) goto joined_r0x0041e1ba;
                  if (iVar11 == -1 && (uVar8 & 1) == 0) {
                    uVar12 = uVar7;
                  }
                  uVar9 = uVar10 + 1;
                  uVar7 = (ulong)((int)uVar7 + uVar10 + 1 & *(uint *)(this + 0x1c));
                  uVar8 = *(uint *)(lVar3 + 4 + uVar7 * 0xc);
                  uVar10 = uVar9;
                } while ((uVar8 & 2) != 0);
                iVar11 = (int)uVar12;
joined_r0x0041e1ba:
                if (iVar11 == -1) goto LAB_0041e187;
              }
              puVar5 = (uint *)(lVar3 + uVar12 * 0xc + 4);
              if ((*(byte *)(lVar3 + 4 + uVar12 * 0xc) & 2) != 0) {
                *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
                *(uint *)(this + 0x14) = *(int *)(this + 0x14) - (*puVar5 & 1);
              }
              *(int *)(lVar3 + uVar12 * 0xc) = *piVar1;
              *(undefined4 *)(lVar3 + 8 + uVar12 * 0xc) =
                   *(undefined4 *)((long)__ptr + uVar13 * 0xc + 8);
              *puVar5 = uVar4 | 3;
              iVar11 = *(int *)(this + 0x18);
              *(int *)(this + 0x18) = iVar11 + 1;
              *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
              if ((*(ushort *)(this + 0x12) < uVar10) &&
                 (*(uint *)(this + 0x1c) < (uint)((iVar11 + 1) * 8))) {
                alloc(this,(ulong)(*(uint *)(this + 0x1c) - 8));
              }
            }
            uVar13 = uVar13 + 1;
          } while (uVar13 != iVar2 + 1U);
        }
        free(__ptr);
      }
      bVar14 = __s != (void *)0x0;
    }
  }
  return bVar14;
}


