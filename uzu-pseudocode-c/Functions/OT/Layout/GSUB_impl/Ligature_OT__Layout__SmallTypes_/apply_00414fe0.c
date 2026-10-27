// Function : apply
// Namespace: OT:Layout:GSUB_impl:Ligature_OT__Layout__SmallTypes_
// Entry    : 00414fe0
// Prototype: ulong apply(undefined8 param_1_00, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, Ligature<OT::Layout::SmallTypes> * this, hb_ot_apply_context_t * param_10)
// Body     : 00414fe0 - 00415d6e


/* OT::Layout::GSUB_impl::Ligature<OT::Layout::SmallTypes>::apply(OT::hb_ot_apply_context_t*) const
    */

ulong __thiscall
OT::Layout::GSUB_impl::Ligature<OT::Layout::SmallTypes>::apply
          (undefined8 param_1_00,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
          Ligature<OT::Layout::SmallTypes> *this,hb_ot_apply_context_t *param_10)

{
  char *param0;
  undefined8 *puVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  long lVar5;
  hb_buffer_t *phVar6;
  hb_ot_apply_context_t hVar7;
  byte bVar8;
  char cVar9;
  byte bVar10;
  ushort uVar11;
  byte *pbVar12;
  ulong uVar13;
  uint *__ptr;
  undefined8 uVar14;
  size_t sVar15;
  bool bVar16;
  byte bVar17;
  uint uVar18;
  ushort *puVar19;
  long lVar20;
  hb_buffer_t hVar21;
  byte bVar22;
  ushort uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  Ligature<OT::Layout::SmallTypes> *unaff_RBX;
  ulong uVar27;
  long lVar28;
  hb_buffer_t *phVar29;
  ulong uVar30;
  void *pvVar31;
  void *pvVar32;
  void *__dest;
  hb_ot_apply_context_t *phVar33;
  undefined8 in_R9;
  byte bVar34;
  char cVar35;
  int iVar36;
  int iVar37;
  uint *puVar38;
  ulong uVar39;
  ushort uVar40;
  char *pcVar41;
  bool bVar42;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 uVar43;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Db_02;
  undefined4 uVar44;
  undefined4 extraout_XMM0_Db_03;
  undefined1 in_stack_fffffffffffffb58;
  ulong local_478;
  int local_464;
  uint local_448 [4];
  char local_438 [1024];
  undefined1 local_38 [8];
  
  uVar40 = *(ushort *)(this + 2);
  uVar11 = uVar40 << 8 | uVar40 >> 8;
  if (uVar11 == 0) {
LAB_0041557f:
    uVar27 = 0;
LAB_00415d14:
    return uVar27 & 0xffffffff;
  }
  if (uVar11 == 1) {
    if (*(long *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0xd0) != 0) {
      phVar33 = param_10;
      hb_buffer_t::sync_so_far(*(hb_buffer_t **)(param_10 + 0xa0));
      hb_buffer_t::message
                (CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da),param_2,param_3,param_4,param_5,param_6
                 ,param_7,param_8,*(hb_buffer_t **)(param_10 + 0xa0),
                 *(undefined8 *)(param_10 + 0x90),"replacing glyph at %u (ligature substitution)",
                 (ulong)*(uint *)(*(hb_buffer_t **)(param_10 + 0xa0) + 0x5c),phVar33,in_R9,
                 in_stack_fffffffffffffb58);
      unaff_RBX = this;
    }
    phVar33 = param_10;
    uVar14 = hb_ot_apply_context_t::replace_glyph
                       (param_10,(uint)(ushort)(*(ushort *)this << 8 | *(ushort *)this >> 8));
    phVar29 = *(hb_buffer_t **)(param_10 + 0xa0);
    uVar27 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (*(long *)(phVar29 + 0xd0) != 0) {
      hb_buffer_t::message
                (uVar14,param_2,param_3,param_4,param_5,param_6,param_7,param_8,phVar29,
                 *(undefined8 *)(param_10 + 0x90),"replaced glyph at %u (ligature substitution)",
                 (ulong)(*(int *)(phVar29 + 0x5c) - 1),phVar33,in_R9,in_stack_fffffffffffffb58);
    }
    goto LAB_00415d14;
  }
  if (0x40 < uVar11) goto LAB_0041557f;
  uVar27 = (ulong)uVar11;
  if (uVar11 < 5) {
    __ptr = local_448;
  }
  else {
    __ptr = malloc(uVar27 * 4);
    if (__ptr == (uint *)0x0) goto LAB_0041557f;
  }
  lVar20 = *(long *)(param_10 + 0xa0);
  uVar25 = *(uint *)(lVar20 + 0x5c);
  uVar30 = (ulong)uVar25;
  *(uint *)(param_10 + 8) = uVar25;
  lVar28 = *(long *)(*(long *)(param_10 + 0x10) + 0xa0);
  uVar26 = *(uint *)(lVar28 + 0x60);
  *(uint *)(param_10 + 0x40) = uVar26;
  if (*(uint *)(lVar28 + 0x5c) == uVar25) {
    hVar7 = *(hb_ot_apply_context_t *)(*(long *)(lVar28 + 0x70) + 0xf + uVar30 * 0x14);
  }
  else {
    hVar7 = (hb_ot_apply_context_t)0x0;
  }
  if (param_10[0x23] == (hb_ot_apply_context_t)0x0) {
    hVar7 = (hb_ot_apply_context_t)0x0;
  }
  param_10[0x24] = hVar7;
  *(code **)(param_10 + 0x28) = match_glyph;
  *(undefined8 *)(param_10 + 0x30) = 0;
  *(Ligature<OT::Layout::SmallTypes> **)(param_10 + 0x38) = this + 4;
  bVar10 = *(byte *)(*(long *)(lVar20 + 0x70) + 0xe + uVar30 * 0x14);
  bVar8 = bVar10 & 0xf;
  if ((bVar10 & 0x10) != 0) {
    bVar8 = 0;
  }
  iVar37 = uVar26 - 1;
  if (iVar37 <= (int)uVar25) goto LAB_0041547e;
  bVar34 = bVar10 >> 5;
  local_478 = 1;
  bVar42 = true;
  local_464 = 0;
  cVar35 = '\0';
LAB_00415166:
  uVar25 = (int)uVar30 + 1;
  uVar30 = (ulong)uVar25;
  *(uint *)(param_10 + 8) = uVar25;
  lVar28 = *(long *)(*(long *)(*(long *)(param_10 + 0x10) + 0xa0) + 0x70);
  uVar25 = *(uint *)(param_10 + 0x18);
  uVar3 = *(ushort *)(lVar28 + 0xc + uVar30 * 0x14);
  if ((uVar25 & uVar3 & 0xe) != 0) goto LAB_00415159;
  puVar38 = (uint *)(uVar30 * 0x14 + lVar28);
  if ((uVar3 & 8) != 0) {
    if ((uVar25 & 0x10) == 0) {
      if (((uVar25 & 0xff00) == 0) || ((uVar25 & 0xff00) == (uVar3 & 0xff00))) goto LAB_004151a6;
    }
    else {
      uVar14 = GDEF::accelerator_t::mark_set_covers
                         (*(accelerator_t **)(*(long *)(param_10 + 0x10) + 0xf8),uVar25 >> 0x10,
                          *puVar38);
      if ((char)uVar14 != '\0') goto LAB_004151a6;
    }
LAB_00415159:
    uVar30 = (ulong)*(uint *)(param_10 + 8);
    if (iVar37 <= (int)*(uint *)(param_10 + 8)) goto LAB_00415458;
    goto LAB_00415166;
  }
LAB_004151a6:
  pbVar12 = (byte *)(uVar30 * 0x14 + 0xc + lVar28);
  uVar3 = *(ushort *)(lVar28 + 0x10 + uVar30 * 0x14);
  uVar23 = 0;
  bVar16 = false;
  if (((((uVar3 & 0x20) != 0) && (bVar16 = false, (*pbVar12 & 0x10) == 0)) &&
      ((param_10[0x20] != (hb_ot_apply_context_t)0x0 || (bVar16 = false, (uVar3 & 0x21f) != 0x201)))
      ) && ((param_10[0x21] != (hb_ot_apply_context_t)0x0 ||
            (bVar16 = false, (uVar3 & 0x11f) != 0x101)))) {
    bVar16 = (uVar3 & 0x40) == 0 || param_10[0x22] != (hb_ot_apply_context_t)0x0;
  }
  puVar19 = *(ushort **)(param_10 + 0x38);
  if (puVar19 != (ushort *)0x0) {
    uVar23 = *puVar19 << 8 | *puVar19 >> 8;
  }
  if (((*(uint *)(lVar28 + 4 + uVar30 * 0x14) & *(uint *)(param_10 + 0x1c)) == 0) ||
     ((param_10[0x24] != (hb_ot_apply_context_t)0x0 &&
      (param_10[0x24] != *(hb_ot_apply_context_t *)(pbVar12 + 3))))) {
LAB_00415150:
    if (!bVar16) {
      uVar30 = (ulong)*(uint *)(param_10 + 8);
      if (!bVar42) goto LAB_00415627;
      uVar26 = *(uint *)(param_10 + 8) + 1;
      goto LAB_0041547e;
    }
    goto LAB_00415159;
  }
  if (*(code **)(param_10 + 0x28) == (code *)0x0) {
    if (bVar16) goto LAB_00415159;
  }
  else {
    cVar9 = (**(code **)(param_10 + 0x28))(puVar38,uVar23,*(undefined8 *)(param_10 + 0x30));
    if (cVar9 == '\0') goto LAB_00415150;
    puVar19 = *(ushort **)(param_10 + 0x38);
  }
  if (puVar19 != (ushort *)0x0) {
    *(ushort **)(param_10 + 0x38) = puVar19 + 1;
  }
  uVar30 = (ulong)*(uint *)(param_10 + 8);
  __ptr[local_478] = *(uint *)(param_10 + 8);
  lVar28 = *(long *)(lVar20 + 0x70);
  bVar22 = *(byte *)(lVar28 + 0xe + uVar30 * 0x14);
  bVar17 = bVar22 & 0xf;
  if ((bVar22 & 0x10) != 0) {
    bVar17 = 0;
  }
  if (bVar10 < 0x20 || bVar8 == 0) {
    if (((bVar22 >> 5 == bVar34) || (bVar22 < 0x20)) || (bVar17 == 0)) goto LAB_0041534d;
LAB_004154ac:
    uVar26 = 0;
    if (bVar42) goto LAB_0041547e;
    goto LAB_00415623;
  }
  if ((bVar34 == bVar22 >> 5) && (bVar8 == bVar17)) {
LAB_0041534d:
    bVar22 = 1;
    if (((*(byte *)(lVar28 + 0xc + uVar30 * 0x14) & 4) != 0) &&
       (bVar17 = *(byte *)(lVar28 + uVar30 * 0x14 + 0xe), (bVar17 & 0x10) != 0)) {
      bVar22 = bVar17 & 0xf;
    }
    cVar35 = cVar35 + bVar22;
    local_478 = local_478 + 1;
    bVar42 = local_478 < uVar27;
    if (local_478 == uVar27) goto LAB_00415630;
    uVar26 = *(uint *)(param_10 + 0x40);
    iVar37 = uVar26 - 1;
    if ((int)uVar30 < iVar37) goto LAB_00415166;
  }
  else {
    uVar26 = 0;
    if (local_464 == 0) {
      lVar5 = *(long *)(lVar20 + 0x78);
      uVar39 = (ulong)*(uint *)(lVar20 + 100);
      do {
        uVar39 = uVar39 - 1;
        if (uVar39 == 0xffffffffffffffff) goto LAB_004154ac;
        uVar13 = uVar39 & 0xffffffff;
        bVar22 = *(byte *)(lVar5 + 0xe + uVar13 * 0x14);
        if (bVar22 >> 5 != bVar34) goto LAB_004154ac;
      } while (((bVar22 & 0x10) == 0) && ((bVar22 & 0xf) != 0));
      uVar3 = *(ushort *)(lVar5 + uVar13 * 0x14 + 0xc);
      local_464 = 2;
      if ((*(uint *)(param_10 + 0x18) & (uint)uVar3 & 0xe) != 0) goto LAB_0041534d;
      if ((uVar3 & 8) == 0) goto LAB_004154ac;
      uVar30 = hb_ot_apply_context_t::match_properties_mark
                         (*(hb_ot_apply_context_t **)(param_10 + 0x10),
                          *(uint *)(lVar5 + uVar13 * 0x14),(uint)uVar3,*(uint *)(param_10 + 0x18));
      if ((char)uVar30 != '\0') {
        if (!bVar42) goto LAB_00415623;
        goto LAB_0041547e;
      }
      lVar28 = *(long *)(lVar20 + 0x70);
      uVar30 = (ulong)*(uint *)(param_10 + 8);
      goto LAB_0041534d;
    }
    if (local_464 != 1) goto LAB_0041534d;
  }
  if (bVar42) goto LAB_0041547e;
LAB_00415623:
  uVar30 = (ulong)*(uint *)(param_10 + 8);
  goto LAB_00415627;
LAB_00415458:
  if (bVar42) {
    uVar26 = *(uint *)(param_10 + 0x40);
LAB_0041547e:
    lVar20 = *(long *)(param_10 + 0xa0);
    if ((*(byte *)(lVar20 + 0x18) & 0x40) != 0) {
      uVar25 = *(uint *)(lVar20 + 0x5c);
      uVar27 = (ulong)uVar25;
      if (*(uint *)(lVar20 + 0x60) < uVar26) {
        uVar26 = *(uint *)(lVar20 + 0x60);
      }
      *(byte *)(lVar20 + 0xc0) = *(byte *)(lVar20 + 0xc0) | 0x20;
      if (uVar25 < uVar26) {
        lVar20 = *(long *)(lVar20 + 0x70);
        uVar30 = ~uVar27;
        if ((uVar26 - uVar25 & 3) != 0) {
          pbVar12 = (byte *)(lVar20 + uVar27 * 0x14 + 4);
          lVar28 = 0;
          do {
            *pbVar12 = *pbVar12 | 2;
            lVar28 = lVar28 + -1;
            pbVar12 = pbVar12 + 0x14;
          } while (-lVar28 != ((ulong)(uVar26 - uVar25) & 3));
          uVar27 = uVar27 - lVar28;
        }
        if (2 < uVar30 + uVar26) {
          lVar28 = uVar26 - uVar27;
          pbVar12 = (byte *)(lVar20 + uVar27 * 0x14 + 0x40);
          do {
            pbVar12[-0x3c] = pbVar12[-0x3c] | 2;
            pbVar12[-0x28] = pbVar12[-0x28] | 2;
            pbVar12[-0x14] = pbVar12[-0x14] | 2;
            *pbVar12 = *pbVar12 | 2;
            pbVar12 = pbVar12 + 0x50;
            lVar28 = lVar28 + -4;
          } while (lVar28 != 0);
        }
      }
    }
    uVar30 = 0;
    uVar27 = 0;
  }
  else {
LAB_00415627:
    lVar28 = *(long *)(lVar20 + 0x70);
LAB_00415630:
    uVar25 = *(uint *)(lVar20 + 0x5c);
    bVar10 = 1;
    if (((*(byte *)(lVar28 + 0xc + (ulong)uVar25 * 0x14) & 4) != 0) &&
       (bVar8 = *(byte *)(lVar28 + (ulong)uVar25 * 0x14 + 0xe), (bVar8 & 0x10) != 0)) {
      bVar10 = bVar8 & 0xf;
    }
    uVar26 = (int)uVar30 + 1;
    *__ptr = uVar25;
    phVar29 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar29 + 0xd0) == 0) {
      uVar4 = 0;
    }
    else {
      hVar21 = phVar29[0x5a];
      iVar37 = *(int *)(phVar29 + 0x5c);
      iVar36 = *(int *)(phVar29 + 100);
      phVar33 = param_10;
      puVar38 = __ptr;
      uVar14 = hb_buffer_t::sync(phVar29);
      if ((char)uVar14 == '\0') {
        iVar36 = iVar37;
      }
      *(int *)(phVar29 + 0x5c) = iVar36;
      if (hVar21 != (hb_buffer_t)0x0) {
        phVar29[0x5a] = (hb_buffer_t)0x1;
        *(int *)(phVar29 + 100) = iVar36;
      }
      iVar36 = iVar36 - iVar37;
      phVar29 = *(hb_buffer_t **)(param_10 + 0xa0);
      uVar4 = *(undefined4 *)(phVar29 + 0x5c);
      memset(local_438,0,0x400);
      uVar43 = extraout_XMM0_Da_00;
      uVar44 = extraout_XMM0_Db_00;
      if (uVar40 != 0) {
        uVar25 = *__ptr;
        *__ptr = uVar25 + iVar36;
        snprintf(local_438,0x400,"%u",uVar25 + iVar36);
        uVar43 = extraout_XMM0_Da_01;
        uVar44 = extraout_XMM0_Db_01;
        if (1 < uVar11) {
          sVar15 = strlen(local_438);
          pcVar41 = local_438 + sVar15;
          uVar30 = 1;
          do {
            uVar25 = __ptr[uVar30];
            __ptr[uVar30] = uVar25 + iVar36;
            param0 = pcVar41 + 1;
            *pcVar41 = ',';
            snprintf(param0,(size_t)(local_38 + -(long)param0),"%u",uVar25 + iVar36);
            sVar15 = strlen(param0);
            pcVar41 = pcVar41 + sVar15 + 1;
            uVar30 = uVar30 + 1;
            uVar43 = extraout_XMM0_Da_02;
            uVar44 = extraout_XMM0_Db_02;
          } while (uVar11 != uVar30);
        }
        phVar29 = *(hb_buffer_t **)(param_10 + 0xa0);
      }
      uVar26 = iVar36 + uVar26;
      hb_buffer_t::message
                (CONCAT44(uVar44,uVar43),param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                 phVar29,*(undefined8 *)(param_10 + 0x90),"ligating glyphs at %s",local_438,phVar33,
                 puVar38,in_stack_fffffffffffffb58);
      phVar29 = *(hb_buffer_t **)(param_10 + 0xa0);
    }
    uVar40 = *(ushort *)this;
    if (1 < uVar26 - *(uint *)(phVar29 + 0x5c)) {
      hb_buffer_t::merge_clusters_impl(phVar29,*(uint *)(phVar29 + 0x5c),uVar26);
    }
    lVar20 = *(long *)(phVar29 + 0x70);
    uVar3 = *(ushort *)(lVar20 + 0xc + (ulong)*__ptr * 0x14);
    bVar42 = (uVar3 & 2) == 0;
    bVar16 = (uVar3 & 8) == 0;
    if (1 < uVar11) {
      uVar30 = 1;
      do {
        if ((*(byte *)(lVar20 + 0xc + (ulong)__ptr[uVar30] * 0x14) & 8) == 0) {
          bVar16 = true;
          bVar42 = true;
          break;
        }
        uVar30 = uVar30 + 1;
      } while (uVar27 != uVar30);
    }
    uVar40 = uVar40 << 8 | uVar40 >> 8;
    bVar34 = bVar42 & bVar16;
    bVar8 = 0;
    if (bVar34 == 1) {
      hVar21 = phVar29[0xb9];
      do {
        hVar21 = (hb_buffer_t)((char)hVar21 + 1);
        if (hVar21 == (hb_buffer_t)0x0) {
          hVar21 = (hb_buffer_t)0x1;
        }
      } while (((byte)hVar21 & 7) == 0);
      phVar29[0xb9] = hVar21;
      bVar8 = (char)hVar21 << 5;
    }
    uVar30 = (ulong)*(uint *)(phVar29 + 0x5c);
    bVar22 = *(byte *)(lVar20 + 0xe + uVar30 * 0x14);
    uVar25 = bVar22 & 0xf;
    if ((bVar22 & 0x10) == 0) {
      uVar25 = 1;
    }
    if ((*(byte *)(lVar20 + 0xc + uVar30 * 0x14) & 4) == 0) {
      uVar25 = 1;
    }
    if (bVar34 != 0) {
      *(byte *)(lVar20 + uVar30 * 0x14 + 0xe) = bVar10 + cVar35 & 0xf | bVar8 | 0x10;
      uVar3 = *(ushort *)
               (*(long *)(phVar29 + 0x70) + 0x10 + (ulong)*(uint *)(phVar29 + 0x5c) * 0x14);
      if ((uVar3 & 0x1f) == 0xc) {
        *(ushort *)(*(long *)(phVar29 + 0x70) + (ulong)*(uint *)(phVar29 + 0x5c) * 0x14 + 0x10) =
             uVar3 & 0xe0 | 7;
      }
    }
    hb_ot_apply_context_t::_set_glyph_class(param_10,(uint)uVar40,(uint)bVar34 * 4,'\x01','\0');
    phVar6 = *(hb_buffer_t **)(param_10 + 0xa0);
    uVar26 = *(int *)(phVar6 + 100) + 1;
    if (((uVar26 == 0) || (uVar26 < *(uint *)(phVar6 + 0x68))) ||
       (uVar14 = hb_buffer_t::enlarge(phVar6,uVar26), (char)uVar14 != '\0')) {
      pvVar32 = *(void **)(phVar6 + 0x70);
      pvVar31 = *(void **)(phVar6 + 0x78);
      if (pvVar31 == pvVar32) {
        uVar26 = *(uint *)(phVar6 + 100);
        if (*(int *)(phVar6 + 0x5c) + 1U < uVar26 + 1) {
          __dest = *(void **)(phVar6 + 0x80);
          *(void **)(phVar6 + 0x78) = __dest;
          if ((ulong)uVar26 != 0) {
            memcpy(__dest,pvVar32,(ulong)uVar26 * 0x14);
            pvVar31 = *(void **)(phVar6 + 0x70);
            __dest = *(void **)(phVar6 + 0x78);
          }
          pvVar32 = pvVar31;
          pvVar31 = __dest;
        }
        else {
          pvVar32 = pvVar31;
        }
      }
      else {
      }
      uVar26 = *(uint *)(phVar6 + 0x5c);
      uVar24 = *(uint *)(phVar6 + 100);
      uVar30 = (ulong)uVar24;
      uVar18 = uVar24 - 1;
      if (uVar24 == 0) {
        uVar18 = 0;
      }
      if (uVar26 < *(uint *)(phVar6 + 0x60)) {
        uVar18 = uVar26;
      }
      if (uVar26 >= *(uint *)(phVar6 + 0x60)) {
        pvVar32 = pvVar31;
      }
      puVar1 = (undefined8 *)((long)pvVar32 + (ulong)uVar18 * 0x14);
      uVar14 = puVar1[1];
      puVar2 = (undefined8 *)((long)pvVar31 + uVar30 * 0x14);
      *puVar2 = *puVar1;
      puVar2[1] = uVar14;
      *(undefined4 *)((long)pvVar31 + uVar30 * 0x14 + 0x10) =
           *(undefined4 *)((long)pvVar32 + (ulong)uVar18 * 0x14 + 0x10);
      *(uint *)((long)pvVar31 + uVar30 * 0x14) = (uint)uVar40;
      *(int *)(phVar6 + 0x5c) = *(int *)(phVar6 + 0x5c) + 1;
      *(int *)(phVar6 + 100) = *(int *)(phVar6 + 100) + 1;
    }
    uVar30 = (ulong)uVar25;
    iVar37 = -uVar25;
    cVar35 = (char)iVar37;
    if (1 < uVar11) {
      uVar26 = *(uint *)(phVar29 + 0x5c);
      uVar39 = 1;
      do {
        if (uVar26 < __ptr[uVar39]) {
          do {
            while( true ) {
              if (phVar29[0x58] == (hb_buffer_t)0x0) goto LAB_00415a30;
              if (bVar34 != 0) {
                bVar10 = *(byte *)(*(long *)(phVar29 + 0x70) + 0xe + (ulong)uVar26 * 0x14);
                bVar22 = bVar10 & 0xf;
                if ((bVar10 & 0x10) != 0) {
                  bVar22 = 0;
                }
                uVar24 = (uint)bVar22;
                if (bVar22 == 0) {
                  uVar24 = uVar25;
                }
                cVar35 = (char)uVar24;
                if (uVar25 < uVar24) {
                  cVar35 = (char)uVar25;
                }
                *(byte *)(*(long *)(phVar29 + 0x70) + 0xe + (ulong)uVar26 * 0x14) =
                     cVar35 + (char)iVar37 + (char)uVar30 & 0xfU | bVar8;
              }
              if (phVar29[0x5a] != (hb_buffer_t)0x0) break;
LAB_00415ab7:
              uVar26 = *(int *)(phVar29 + 0x5c) + 1;
              *(uint *)(phVar29 + 0x5c) = uVar26;
              if (__ptr[uVar39] <= uVar26) goto LAB_00415a30;
            }
            pvVar31 = *(void **)(phVar29 + 0x78);
            pvVar32 = *(void **)(phVar29 + 0x70);
            iVar36 = *(int *)(phVar29 + 100);
            if ((pvVar31 == pvVar32) && (iVar36 == *(int *)(phVar29 + 0x5c))) {
LAB_00415ab1:
              *(int *)(phVar29 + 100) = iVar36 + 1;
              goto LAB_00415ab7;
            }
            uVar26 = iVar36 + 1;
            if ((uVar26 == 0) || (uVar26 < *(uint *)(phVar29 + 0x68))) {
              if (pvVar31 == pvVar32) {
LAB_00415b49:
                uVar26 = *(uint *)(phVar29 + 100);
                if (*(int *)(phVar29 + 0x5c) + 1U < uVar26 + 1) {
                  pvVar31 = *(void **)(phVar29 + 0x80);
                  *(void **)(phVar29 + 0x78) = pvVar31;
                  if ((ulong)uVar26 != 0) {
                    memcpy(pvVar31,pvVar32,(ulong)uVar26 * 0x14);
                    pvVar32 = *(void **)(phVar29 + 0x70);
                    pvVar31 = *(void **)(phVar29 + 0x78);
                  }
                }
                else {
                  pvVar31 = pvVar32;
                }
              }
LAB_00415a90:
              uVar26 = *(uint *)(phVar29 + 0x5c);
              uVar24 = *(uint *)(phVar29 + 100);
              *(undefined4 *)((long)pvVar31 + (ulong)uVar24 * 0x14 + 0x10) =
                   *(undefined4 *)((long)pvVar32 + (ulong)uVar26 * 0x14 + 0x10);
              puVar1 = (undefined8 *)((long)pvVar32 + (ulong)uVar26 * 0x14);
              uVar14 = puVar1[1];
              puVar2 = (undefined8 *)((long)pvVar31 + (ulong)uVar24 * 0x14);
              *puVar2 = *puVar1;
              puVar2[1] = uVar14;
              iVar36 = *(int *)(phVar29 + 100);
              goto LAB_00415ab1;
            }
            uVar14 = hb_buffer_t::enlarge(phVar29,uVar26);
            if ((char)uVar14 != '\0') {
              pvVar32 = *(void **)(phVar29 + 0x70);
              pvVar31 = *(void **)(phVar29 + 0x78);
              if (pvVar31 == pvVar32) goto LAB_00415b49;
              goto LAB_00415a90;
            }
            uVar26 = *(uint *)(phVar29 + 0x5c);
          } while (uVar26 < __ptr[uVar39]);
        }
LAB_00415a30:
        bVar22 = *(byte *)(*(long *)(phVar29 + 0x70) + 0xe + (ulong)uVar26 * 0x14);
        uVar25 = bVar22 & 0xf;
        if ((bVar22 & 0x10) == 0) {
          uVar25 = 1;
        }
        if ((*(ushort *)(*(long *)(phVar29 + 0x70) + 0xc + (ulong)uVar26 * 0x14) & 4) == 0) {
          uVar25 = 1;
        }
        uVar30 = (ulong)((int)uVar30 + uVar25);
        uVar26 = uVar26 + 1;
        *(uint *)(phVar29 + 0x5c) = uVar26;
        uVar39 = uVar39 + 1;
        iVar37 = -uVar25;
        cVar35 = (char)iVar37;
      } while (uVar39 != uVar27);
    }
    if (((bVar16 & 0x1f < bVar22) != 0) &&
       (uVar27 = (ulong)*(uint *)(phVar29 + 0x5c),
       *(uint *)(phVar29 + 0x5c) < *(uint *)(phVar29 + 0x60))) {
      cVar9 = (char)uVar30;
      lVar20 = uVar27 * 0x14 + 0xe;
      uVar30 = 0;
      do {
        bVar10 = *(byte *)(*(long *)(phVar29 + 0x70) + lVar20);
        if (0x1f < (bVar10 ^ bVar22)) break;
        bVar34 = bVar10 & 0xf;
        if ((bVar10 & 0x10) != 0) {
          bVar34 = 0;
        }
        if (bVar34 == 0) break;
        bVar10 = (byte)uVar25;
        if (bVar34 <= uVar25) {
          bVar10 = bVar34;
        }
        *(byte *)(*(long *)(phVar29 + 0x70) + lVar20) = bVar10 + cVar9 + cVar35 & 0xf | bVar8;
        uVar27 = uVar27 + 1;
        lVar20 = lVar20 + 0x14;
      } while (uVar27 < *(uint *)(phVar29 + 0x60));
    }
    phVar6 = *(hb_buffer_t **)(param_10 + 0xa0);
    if (*(long *)(phVar6 + 0xd0) != 0) {
      hVar21 = phVar6[0x5a];
      uVar25 = *(uint *)(phVar6 + 0x5c);
      uVar26 = *(uint *)(phVar6 + 100);
      puVar38 = __ptr;
      uVar14 = hb_buffer_t::sync(phVar6);
      if ((char)uVar14 == '\0') {
        uVar26 = uVar25;
      }
      phVar29 = (hb_buffer_t *)(ulong)uVar26;
      *(uint *)(phVar6 + 0x5c) = uVar26;
      if (hVar21 != (hb_buffer_t)0x0) {
        phVar6[0x5a] = (hb_buffer_t)0x1;
        *(uint *)(phVar6 + 100) = uVar26;
      }
      hb_buffer_t::message
                (CONCAT44(extraout_XMM0_Db_03,extraout_XMM0_Da_03),param_2,param_3,param_4,param_5,
                 param_6,param_7,param_8,*(hb_buffer_t **)(param_10 + 0xa0),
                 *(undefined8 *)(param_10 + 0x90),"ligated glyph at %u",uVar4,uVar30,puVar38,
                 in_stack_fffffffffffffb58);
    }
    uVar30 = CONCAT71((int7)((ulong)phVar29 >> 8),1);
    uVar27 = CONCAT71((int7)((ulong)phVar6 >> 8),1);
  }
  if (__ptr != local_448) {
    free(__ptr);
    uVar27 = uVar30 & 0xffffffff;
  }
  goto LAB_00415d14;
}


