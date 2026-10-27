// Function : pop_pack
// Namespace: hb_serialize_context_t
// Entry    : 00437a60
// Prototype: ulong pop_pack(hb_serialize_context_t * this, char param_1)
// Body     : 00437a60 - 00438073


/* WARNING: Type propagation algorithm not settling */
/* hb_serialize_context_t::pop_pack(bool) */

ulong __thiscall hb_serialize_context_t::pop_pack(hb_serialize_context_t *this,char param_1)

{
  hb_serialize_context_t hVar1;
  int iVar2;
  uint uVar3;
  object_t *this_00;
  byte *__src;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  void *pvVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  object_t *local_38;
  
  this_00 = *(object_t **)(this + 0x48);
  if (this_00 == (object_t *)0x0) {
    return 0;
  }
  uVar7 = *(uint *)(this + 0x2c) >> 1;
  if (8 < (uVar7 | (uint)((*(uint *)(this + 0x2c) & 1) != 0) << 0x1f)) {
    return 0;
  }
  if ((0x113U >> (uVar7 & 0x1f) & 1) == 0) {
    return 0;
  }
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(this_00 + 0x30);
  lVar16 = *(long *)(this + 8);
  *(long *)(this_00 + 8) = lVar16;
  *(undefined8 *)(this_00 + 0x30) = 0;
  __src = *(byte **)this_00;
  uVar17 = lVar16 - (long)__src;
  pbVar4 = *(byte **)(this + 0x20);
  pbVar10 = pbVar4;
  if (pbVar4 == (byte *)0x0) {
    pbVar10 = __src;
  }
  *(byte **)(this + 8) = pbVar10;
  *(undefined8 *)(this + 0x20) = 0;
  if ((uint)uVar17 == 0) {
    return 0;
  }
  uVar7 = 0;
  local_38 = this_00;
  if (param_1 != '\0') {
    uVar7 = 0x80;
    if ((long)uVar17 < 0x80) {
      uVar7 = (uint)uVar17;
    }
    uVar6 = hb_array_t<char_const>::hash(__src,uVar7);
    uVar7 = hb_array_t<char_const>::hash(*(byte **)(this_00 + 0x18),*(int *)(this_00 + 0x14) * 0xc);
    uVar7 = uVar7 ^ uVar6;
    puVar21 = &_hb_NullPool;
    if ((*(long *)(this + 0x88) != 0) &&
       (plVar11 = hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::
                  fetch_item(*(uint *)(this + 0x7c),(ulong)*(uint *)(this + 0x80),
                             *(long *)(this + 0x88),(long *)&local_38,uVar7), plVar11 != (long *)0x0
       )) {
      puVar21 = (uint *)((long)plVar11 + 0xc);
    }
    uVar12 = (ulong)*puVar21;
    if (uVar12 != 0) {
      if (*puVar21 < *(uint *)(this + 0x54)) {
        lVar16 = *(long *)(*(long *)(this + 0x58) + uVar12 * 8);
        uVar7 = *(uint *)(this_00 + 0x24);
      }
      else {
        _hb_CrapPool = 0;
        lVar16 = 0;
        uVar7 = *(uint *)(this_00 + 0x24);
      }
      if ((ulong)uVar7 != 0) {
        puVar18 = *(undefined8 **)(this_00 + 0x28);
        puVar22 = (undefined8 *)((ulong)uVar7 * 0xc + (long)puVar18);
        do {
          while( true ) {
            uVar7 = *(uint *)(lVar16 + 0x20);
            if ((int)uVar7 <= *(int *)(lVar16 + 0x24)) break;
LAB_00437e70:
            lVar13 = *(long *)(lVar16 + 0x28);
            uVar7 = *(uint *)(lVar16 + 0x24);
            *(uint *)(lVar16 + 0x24) = uVar7 + 1;
            *(undefined4 *)(lVar13 + 8 + (ulong)uVar7 * 0xc) = *(undefined4 *)(puVar18 + 1);
            *(undefined8 *)(lVar13 + (ulong)uVar7 * 0xc) = *puVar18;
            puVar18 = (undefined8 *)((long)puVar18 + 0xc);
            if (puVar18 == puVar22) goto LAB_00437ff9;
          }
          if (-1 < (int)uVar7) {
            uVar6 = *(int *)(lVar16 + 0x24) + 1;
            if (uVar7 < uVar6) {
              uVar23 = uVar7;
              do {
                uVar23 = uVar23 + (uVar23 >> 1) + 8;
              } while (uVar23 < uVar6);
              if (0x15555555 < uVar23) {
LAB_00437f01:
                *(uint *)(lVar16 + 0x20) = ~uVar7;
                goto LAB_00437f06;
              }
              if (uVar23 == 0) {
                free(*(void **)(lVar16 + 0x28));
                pvVar14 = (void *)0x0;
              }
              else {
                pvVar14 = realloc(*(void **)(lVar16 + 0x28),(ulong)uVar23 * 0xc);
                if (pvVar14 == (void *)0x0) {
                  uVar7 = *(uint *)(lVar16 + 0x20);
                  if (uVar23 <= uVar7) goto LAB_00437e70;
                  goto LAB_00437f01;
                }
              }
              *(void **)(lVar16 + 0x28) = pvVar14;
              *(uint *)(lVar16 + 0x20) = uVar23;
            }
            goto LAB_00437e70;
          }
LAB_00437f06:
          DAT_0071cd88 = 0;
          _hb_CrapPool = 0;
          puVar18 = (undefined8 *)((long)puVar18 + 0xc);
        } while (puVar18 != puVar22);
      }
LAB_00437ff9:
      if (*(int *)(this_00 + 0x10) != 0) {
        *(undefined4 *)(this_00 + 0x14) = 0;
        free(*(void **)(this_00 + 0x18));
      }
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x18) = 0;
      if (*(int *)(this_00 + 0x20) != 0) {
        *(undefined4 *)(this_00 + 0x24) = 0;
        free(*(void **)(this_00 + 0x28));
      }
      *(undefined8 *)(this_00 + 0x20) = 0;
      *(undefined8 *)(this_00 + 0x28) = 0;
      return uVar12;
    }
  }
  uVar17 = uVar17 & 0xffffffff;
  pvVar14 = (void *)(*(long *)(this + 0x10) - uVar17);
  *(void **)(this + 0x10) = pvVar14;
  if (pbVar4 == (byte *)0x0) {
    memmove(pvVar14,__src,uVar17);
    pvVar14 = *(void **)(this + 0x10);
  }
  *(void **)this_00 = pvVar14;
  *(ulong *)(this_00 + 8) = uVar17 + (long)pvVar14;
  uVar6 = *(uint *)(this + 0x50);
  uVar23 = uVar6;
  if (*(int *)(this + 0x54) < (int)uVar6) {
LAB_00437c03:
    uVar6 = *(uint *)(this + 0x54);
    *(uint *)(this + 0x54) = uVar6 + 1;
    *(object_t **)(*(long *)(this + 0x58) + (ulong)uVar6 * 8) = this_00;
    iVar2 = *(int *)(this + 0x2c);
    uVar6 = uVar23;
  }
  else {
    if (-1 < (int)uVar6) {
      uVar15 = *(int *)(this + 0x54) + 1;
      if (uVar6 < uVar15) {
        do {
          uVar23 = uVar23 + (uVar23 >> 1) + 8;
        } while (uVar23 < uVar15);
        if (0x1fffffff < uVar23) {
LAB_00437f9f:
          uVar6 = ~uVar6;
          *(uint *)(this + 0x50) = uVar6;
          goto LAB_00437fa4;
        }
        if (uVar23 == 0) {
          free(*(void **)(this + 0x58));
          pvVar14 = (void *)0x0;
        }
        else {
          pvVar14 = realloc(*(void **)(this + 0x58),(ulong)uVar23 << 3);
          if (pvVar14 == (void *)0x0) {
            uVar6 = *(uint *)(this + 0x50);
            bVar5 = uVar23 <= uVar6;
            uVar23 = uVar6;
            if (bVar5) goto LAB_00437c03;
            goto LAB_00437f9f;
          }
        }
        *(void **)(this + 0x58) = pvVar14;
        *(uint *)(this + 0x50) = uVar23;
      }
      goto LAB_00437c03;
    }
LAB_00437fa4:
    _hb_CrapPool = 0;
    iVar2 = *(int *)(this + 0x2c);
  }
  if (((int)uVar6 < 0) && (iVar2 == 0)) {
    *(undefined4 *)(this + 0x2c) = 1;
LAB_00437f34:
    object_t::fini(this_00);
    return 0;
  }
  if (iVar2 != 0) goto LAB_00437f34;
  iVar2 = *(int *)(this + 0x54);
  uVar17 = (ulong)(iVar2 - 1U);
  if (param_1 == '\0') {
    bVar5 = false;
    hVar1 = this[0x70];
    goto joined_r0x00437e3e;
  }
  if ((this[0x70] != (hb_serialize_context_t)0x0) &&
     (((*(uint *)(this + 0x78) >> 1) + *(uint *)(this + 0x78) < *(uint *)(this + 0x7c) ||
      (bVar5 = hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
                         ((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>
                           *)(this + 0x60),0), bVar5)))) {
    uVar23 = 0;
    uVar12 = (ulong)(uVar7 & 0x3fffffff) % (ulong)*(uint *)(this + 0x80);
    lVar16 = *(long *)(this + 0x88);
    uVar6 = *(uint *)(lVar16 + 8 + uVar12 * 0x10);
    uVar15 = (uint)uVar12;
    if ((uVar6 & 2) == 0) {
LAB_00437dcf:
      uVar19 = uVar15;
    }
    else {
      uVar3 = *(uint *)(this + 0x7c);
      uVar19 = 0xffffffff;
      uVar20 = 0;
      do {
        uVar15 = (uint)uVar12;
        if (uVar6 >> 2 == (uVar7 & 0x3fffffff)) {
          puVar18 = *(undefined8 **)(lVar16 + uVar12 * 0x10);
          uVar12 = puVar18[1] - (long)*puVar18;
          if ((((uVar12 == *(long *)(this_00 + 8) - (long)*(void **)this_00) &&
               (iVar9 = *(int *)((long)puVar18 + 0x14), iVar9 == *(int *)(this_00 + 0x14))) &&
              (((int)uVar12 == 0 ||
               (iVar8 = bcmp((void *)*puVar18,*(void **)this_00,uVar12 & 0xffffffff), iVar8 == 0))))
             && ((uVar23 = iVar9 * 0xc, uVar23 == 0 ||
                 (iVar9 = bcmp((void *)puVar18[3],*(void **)(this_00 + 0x18),(ulong)uVar23),
                 iVar9 == 0)))) {
            uVar23 = uVar20;
            break;
          }
        }
        if (uVar19 == 0xffffffff && (uVar6 & 1) == 0) {
          uVar19 = uVar15;
        }
        uVar23 = uVar20 + 1;
        uVar15 = uVar15 + uVar20 + 1 & uVar3;
        uVar6 = *(uint *)(lVar16 + 8 + (ulong)uVar15 * 0x10);
        uVar12 = (ulong)uVar15;
        uVar20 = uVar23;
      } while ((uVar6 & 2) != 0);
      if (uVar19 == 0xffffffff) goto LAB_00437dcf;
    }
    lVar13 = (ulong)uVar19 * 0x10;
    puVar21 = (uint *)(lVar16 + lVar13 + 8);
    if ((*(byte *)(lVar16 + 8 + lVar13) & 2) != 0) {
      *(int *)(this + 0x78) = *(int *)(this + 0x78) + -1;
      *(uint *)(this + 0x74) = *(int *)(this + 0x74) - (*puVar21 & 1);
    }
    *(object_t **)(lVar16 + lVar13) = this_00;
    *(uint *)(lVar16 + 0xc + lVar13) = iVar2 - 1U;
    *puVar21 = uVar7 * 4 + 3;
    iVar2 = *(int *)(this + 0x78);
    *(int *)(this + 0x78) = iVar2 + 1;
    *(int *)(this + 0x74) = *(int *)(this + 0x74) + 1;
    if ((*(ushort *)(this + 0x72) < uVar23) && (*(uint *)(this + 0x7c) < (uint)((iVar2 + 1) * 8))) {
      hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false>::alloc
                ((hb_hashmap_t<hb_serialize_context_t::object_t_const*,unsigned_int,false> *)
                 (this + 0x60),(ulong)(*(uint *)(this + 0x7c) - 8));
    }
  }
  bVar5 = *(int *)(this + 0x2c) != 0;
  hVar1 = this[0x70];
joined_r0x00437e3e:
  if (hVar1 != (hb_serialize_context_t)0x0) {
    return uVar17;
  }
  if (!bVar5) {
    *(undefined4 *)(this + 0x2c) = 1;
    return uVar17;
  }
  return uVar17;
}


