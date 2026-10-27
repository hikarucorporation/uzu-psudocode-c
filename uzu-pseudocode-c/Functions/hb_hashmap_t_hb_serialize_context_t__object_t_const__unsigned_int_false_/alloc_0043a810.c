// Function : alloc
// Namespace: hb_hashmap_t_hb_serialize_context_t__object_t_const__unsigned_int_false_
// Entry    : 0043a810
// Prototype: bool alloc(hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> * this, ulong param_1)
// Body     : 0043a810 - 0043ab9f


/* hb_hashmap_t<hb_serialize_context_t::object_t const*, unsigned int, false>::alloc(unsigned int)
    */

bool __thiscall
hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
          (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *this,
          ulong param_1)

{
  int iVar1;
  uint uVar2;
  void *__ptr;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  void *__s;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  size_t __size;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  
  if (this[0x10] == (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0) {
    bVar20 = false;
  }
  else {
    uVar6 = (uint)param_1;
    if ((uVar6 == 0) ||
       (bVar20 = true, *(uint *)(this + 0x1c) <= ((uint)(param_1 >> 1) & 0x7fffffff) + uVar6)) {
      uVar19 = *(uint *)(this + 0x14);
      if (*(uint *)(this + 0x14) < uVar6) {
        uVar19 = uVar6;
      }
      uVar6 = uVar19 * 2 + 8;
      if (uVar6 == 0) {
        uVar6 = 0;
      }
      else {
        uVar19 = 0x1f;
        if (uVar6 != 0) {
          for (; uVar6 >> uVar19 == 0; uVar19 = uVar19 - 1) {
          }
        }
        uVar6 = (uVar19 ^ 0xffffffe0) + 0x21;
      }
      uVar19 = 1 << ((byte)uVar6 & 0x1f);
      __size = (ulong)uVar19 << 4;
      __s = malloc(__size);
      if (__s == (void *)0x0) {
        this[0x10] = (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0;
      }
      else {
        if ((int)__size != 0) {
          memset(__s,0,__size & 0xffffffff);
        }
        iVar1 = *(int *)(this + 0x1c);
        __ptr = *(void **)(this + 0x28);
        *(undefined8 *)(this + 0x14) = 0;
        *(uint *)(this + 0x1c) = uVar19 - 1;
        if (uVar6 < 0x20) {
          puVar12 = (undefined4 *)(&DAT_005fce60 + (ulong)uVar6 * 4);
        }
        else {
          puVar12 = &DAT_005fcedc;
        }
        *(undefined4 *)(this + 0x20) = *puVar12;
        *(short *)(this + 0x12) = (short)uVar6 * 2;
        *(void **)(this + 0x28) = __s;
        if (1 < iVar1 + 1U) {
          uVar17 = 0;
          do {
            lVar15 = uVar17 * 0x10;
            uVar6 = *(uint *)((long)__ptr + lVar15 + 8);
            if (((uVar6 & 1) != 0) &&
               (this[0x10] !=
                (hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>)0x0)) {
              if (*(uint *)(this + 0x1c) <= (*(uint *)(this + 0x18) >> 1) + *(uint *)(this + 0x18))
              {
                bVar20 = alloc(this,0);
                if (!bVar20) goto LAB_0043a974;
              }
              uVar11 = 0;
              uVar9 = (ulong)(uVar6 >> 2) % (ulong)*(uint *)(this + 0x20);
              lVar3 = *(long *)(this + 0x28);
              uVar19 = *(uint *)(lVar3 + 8 + uVar9 * 0x10);
              uVar13 = (uint)uVar9;
              if ((uVar19 & 2) == 0) {
LAB_0043ab1d:
                uVar18 = uVar13;
              }
              else {
                puVar4 = *(undefined8 **)((long)__ptr + lVar15);
                uVar2 = *(uint *)(this + 0x1c);
                uVar18 = 0xffffffff;
                uVar16 = 0;
                do {
                  uVar13 = (uint)uVar9;
                  if (uVar19 >> 2 == uVar6 >> 2) {
                    puVar5 = *(undefined8 **)(lVar3 + uVar9 * 0x10);
                    uVar9 = puVar5[1] - (long)*puVar5;
                    if ((uVar9 == puVar4[1] - (long)*puVar4) &&
                       (iVar8 = *(int *)((long)puVar5 + 0x14),
                       iVar8 == *(int *)((long)puVar4 + 0x14))) {
                      if ((int)uVar9 != 0) {
                        iVar7 = bcmp((void *)*puVar5,(void *)*puVar4,uVar9 & 0xffffffff);
                        if (iVar7 != 0) goto LAB_0043aa30;
                      }
                      uVar11 = iVar8 * 0xc;
                      if (uVar11 != 0) {
                        iVar8 = bcmp((void *)puVar5[3],(void *)puVar4[3],(ulong)uVar11);
                        if (iVar8 != 0) goto LAB_0043aa30;
                      }
                      uVar11 = uVar16;
                      break;
                    }
                  }
LAB_0043aa30:
                  if (uVar18 == 0xffffffff && (uVar19 & 1) == 0) {
                    uVar18 = uVar13;
                  }
                  uVar11 = uVar16 + 1;
                  uVar13 = uVar13 + uVar16 + 1 & uVar2;
                  uVar19 = *(uint *)(lVar3 + 8 + (ulong)uVar13 * 0x10);
                  uVar9 = (ulong)uVar13;
                  uVar16 = uVar11;
                } while ((uVar19 & 2) != 0);
                if (uVar18 == 0xffffffff) goto LAB_0043ab1d;
              }
              lVar10 = (ulong)uVar18 * 0x10;
              puVar14 = (uint *)(lVar3 + lVar10 + 8);
              if ((*(byte *)(lVar3 + 8 + lVar10) & 2) != 0) {
                *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
                *(uint *)(this + 0x14) = *(int *)(this + 0x14) - (*puVar14 & 1);
              }
              *(long *)(lVar3 + lVar10) = *(long *)((long)__ptr + lVar15);
              *(undefined4 *)(lVar3 + 0xc + lVar10) = *(undefined4 *)((long)__ptr + lVar15 + 0xc);
              *puVar14 = uVar6 | 3;
              iVar8 = *(int *)(this + 0x18);
              *(int *)(this + 0x18) = iVar8 + 1;
              *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
              if (*(ushort *)(this + 0x12) < uVar11) {
                if (*(uint *)(this + 0x1c) < (uint)((iVar8 + 1) * 8)) {
                  alloc(this,(ulong)(*(uint *)(this + 0x1c) - 8));
                }
              }
            }
LAB_0043a974:
            uVar17 = uVar17 + 1;
          } while (uVar17 != iVar1 + 1U);
        }
        free(__ptr);
      }
      bVar20 = __s != (void *)0x0;
    }
  }
  return bVar20;
}


