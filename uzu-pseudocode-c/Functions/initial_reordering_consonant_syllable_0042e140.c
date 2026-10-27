// Function : initial_reordering_consonant_syllable
// Namespace: 
// Entry    : 0042e140
// Prototype: undefined initial_reordering_consonant_syllable(long param_1, long param_2, hb_buffer_t * param_3, uint param_4, ulong param_5)
// Body     : 0042e140 - 0042f395


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* initial_reordering_consonant_syllable(hb_ot_shape_plan_t const*, hb_face_t*, hb_buffer_t*,
   unsigned int, unsigned int) */

void __cdecl
initial_reordering_consonant_syllable
          (long param_1,long param_2,hb_buffer_t *param_3,uint param_4,ulong param_5)

{
  char cVar1;
  undefined1 uVar2;
  long *plVar3;
  long lVar4;
  bool bVar5;
  undefined8 uVar6;
  hb_buffer_t *this;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  byte *pbVar10;
  undefined7 extraout_var_01;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  bool bVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint uVar26;
  ulong uVar27;
  ulong uVar28;
  byte bVar29;
  char cVar30;
  char *pcVar31;
  long lVar32;
  undefined1 *puVar33;
  undefined8 *puVar34;
  uint uVar35;
  uint uVar36;
  undefined8 *puVar37;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulong local_70;
  long local_68;
  ulong local_60;
  hb_buffer_t *local_58;
  ulong local_50;
  long local_48;
  ulong local_40;
  ulong local_38;
  
  plVar3 = *(long **)(param_1 + 0x88);
  lVar4 = *(long *)(param_3 + 0x70);
  uVar19 = param_4 + 3;
  local_70 = (ulong)param_4;
  uVar26 = (uint)param_5;
  local_58 = param_3;
  local_48 = param_2;
  if ((((*(int *)(param_3 + 0x3c) == 0x4b6e6461) && (uVar19 <= uVar26)) &&
      ((*(byte *)(lVar4 + 0xc + local_70 * 0x14) & 0x20) == 0)) &&
     (*(char *)(lVar4 + 0x12 + local_70 * 0x14) == '\x0f')) {
    uVar20 = (ulong)(param_4 + 1);
    if ((((*(byte *)(lVar4 + 0xc + uVar20 * 0x14) & 0x20) == 0) &&
        (*(char *)(lVar4 + 0x12 + uVar20 * 0x14) == '\x04')) &&
       ((uVar17 = (ulong)(param_4 + 2), (*(byte *)(lVar4 + 0xc + uVar17 * 0x14) & 0x20) == 0 &&
        (*(char *)(lVar4 + 0x12 + uVar17 * 0x14) == '\x06')))) {
      puVar37 = (undefined8 *)(uVar20 * 0x14 + lVar4);
      puVar34 = (undefined8 *)(lVar4 + uVar17 * 0x14);
      hb_buffer_t::merge_clusters_impl(param_3,param_4 + 1,uVar19);
      local_78 = *(undefined4 *)(puVar37 + 2);
      local_88 = *puVar37;
      uStack_80 = puVar37[1];
      *(undefined4 *)(puVar37 + 2) = *(undefined4 *)(puVar34 + 2);
      uVar6 = puVar34[1];
      *puVar37 = *puVar34;
      puVar37[1] = uVar6;
      *(undefined4 *)(puVar34 + 2) = local_78;
      *puVar34 = local_88;
      puVar34[1] = uStack_80;
    }
  }
  iVar9 = *(int *)(*plVar3 + 0x10);
  uVar36 = param_4;
  uVar23 = param_4;
  if ((uVar26 < uVar19) || ((int)plVar3[0x12] == 0)) {
    if (iVar9 != 2) goto LAB_0042e4ae;
LAB_0042e2a1:
    if (*(char *)(lVar4 + 0x12 + local_70 * 0x14) == '\x0e') {
      uVar19 = param_4 + 1;
      uVar36 = uVar19;
      if (uVar19 < uVar26) {
        uVar36 = uVar26;
      }
      uVar8 = param_4;
      do {
        uVar35 = uVar19;
        bVar7 = true;
        if (uVar26 <= uVar35) goto LAB_0042e4b7;
        uVar8 = uVar8 + 1;
        if ((*(byte *)(lVar4 + 0xc + (ulong)uVar35 * 0x14) & 0x20) != 0) {
          uVar36 = uVar8;
          goto LAB_0042e4b7;
        }
        bVar29 = *(byte *)(lVar4 + 0x12 + (ulong)uVar35 * 0x14);
      } while ((bVar29 < 0x20) && (uVar19 = uVar35 + 1, (1 << (bVar29 & 0x1f) & 0x60U) != 0));
      uVar36 = uVar35;
      goto LAB_0042e4b7;
    }
  }
  else {
    if (iVar9 == 2) goto LAB_0042e2a1;
    if (iVar9 == 1) {
      if (*(char *)(lVar4 + 0x12 + (ulong)(param_4 + 2) * 0x14) == '\x06') goto LAB_0042e32b;
    }
    else if ((iVar9 == 0) &&
            ((((*(byte *)(lVar4 + 0xc + (ulong)(param_4 + 2) * 0x14) & 0x20) != 0 ||
              (bVar29 = *(byte *)(lVar4 + 0x12 + (ulong)(param_4 + 2) * 0x14), 0x1f < bVar29)) ||
             ((1 << (bVar29 & 0x1f) & 0x60U) == 0)))) {
LAB_0042e32b:
      local_88 = CONCAT44(*(undefined4 *)(lVar4 + (ulong)(param_4 + 1) * 0x14),
                          *(undefined4 *)(lVar4 + local_70 * 0x14));
      uVar11 = 0;
      if (iVar9 == 1) {
        uVar11 = *(undefined4 *)(lVar4 + (ulong)(param_4 + 2) * 0x14);
      }
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar11);
      uVar19 = *(uint *)(plVar3 + 3);
      if ((ulong)uVar19 == 0) {
LAB_0042e3d9:
        if ((iVar9 != 1) || (uVar19 = *(uint *)(plVar3 + 3), (ulong)uVar19 == 0)) goto LAB_0042e4ae;
        lVar32 = plVar3[2];
        lVar25 = 0;
        do {
          bVar7 = hb_ot_layout_lookup_would_substitute
                            (local_48,(uint)*(ushort *)(lVar32 + lVar25),(uint *)&local_88,3,
                             (uint)*(byte *)(plVar3 + 4));
          iVar9 = (int)CONCAT71(extraout_var_00,bVar7);
          if (iVar9 != 0) break;
          bVar7 = (ulong)uVar19 * 0xc + -0xc != lVar25;
          lVar25 = lVar25 + 0xc;
        } while (bVar7);
        if (iVar9 != 0) goto LAB_0042e449;
        bVar7 = false;
        uVar23 = uVar26;
      }
      else {
        lVar32 = plVar3[2];
        lVar25 = 0;
        do {
          bVar7 = hb_ot_layout_lookup_would_substitute
                            (local_48,(uint)*(ushort *)(lVar32 + lVar25),(uint *)&local_88,2,
                             (uint)*(byte *)(plVar3 + 4));
          iVar9 = (int)CONCAT71(extraout_var,bVar7);
          if (iVar9 != 0) break;
          bVar7 = (ulong)uVar19 * 0xc + -0xc != lVar25;
          lVar25 = lVar25 + 0xc;
        } while (bVar7);
        if (iVar9 == 0) {
          iVar9 = *(int *)(*plVar3 + 0x10);
          goto LAB_0042e3d9;
        }
LAB_0042e449:
        uVar36 = param_4 + 2;
        bVar7 = true;
        if (uVar36 < uVar26) {
          pbVar10 = (byte *)((ulong)uVar36 * 0x14 + 0x12 + lVar4);
          do {
            if ((((pbVar10[-6] & 0x20) != 0) || (0x1f < *pbVar10)) ||
               ((1 << (*pbVar10 & 0x1f) & 0x60U) == 0)) goto LAB_0042f374;
            uVar36 = uVar36 + 1;
            pbVar10 = pbVar10 + 0x14;
          } while (uVar26 != uVar36);
          uVar36 = uVar26;
LAB_0042f374:
          goto LAB_0042e4b7;
        }
      }
      goto LAB_0042e4b7;
    }
  }
LAB_0042e4ae:
  bVar7 = false;
  uVar23 = uVar26;
LAB_0042e4b7:
  uVar20 = local_70;
  uVar19 = uVar26 - 1;
  uVar14 = (ulong)uVar19;
  pcVar31 = (char *)(uVar14 * 0x14 + 0x13 + lVar4);
  bVar5 = false;
  bVar22 = false;
  uVar17 = param_5 & 0xffffffff;
  do {
    iVar9 = (int)uVar17;
    uVar8 = iVar9 - 1;
    uVar17 = (ulong)uVar8;
    if ((((pcVar31[-7] & 0x20U) == 0) && ((byte)pcVar31[-1] < 0x20)) &&
       ((1 << (pcVar31[-1] & 0x1fU) & 0x58c06U) != 0)) {
      cVar30 = *pcVar31;
      uVar23 = uVar8;
      if ((cVar30 != '\b') && ((cVar30 != '\v' || (bVar22)))) break;
      bVar22 = bVar5;
      if (cVar30 == '\b') {
        bVar22 = true;
      }
      bVar5 = bVar22;
    }
    else if (((param_4 < uVar8) && (pcVar31[-1] == '\x06')) &&
            (*(char *)(lVar4 + 0x12 + (ulong)(iVar9 - 2) * 0x14) == '\x04')) break;
    pcVar31 = pcVar31 + -0x14;
  } while (uVar36 < uVar8);
  bVar22 = bVar7;
  if (bVar7) {
    bVar22 = false;
    if (2 < uVar36 - uVar23) {
      bVar22 = bVar7;
    }
    if (uVar23 != param_4) {
      bVar22 = bVar7;
    }
  }
  uVar17 = (ulong)uVar23;
  uVar36 = uVar23 - param_4;
  if (param_4 <= uVar23 && uVar36 != 0) {
    uVar21 = local_70;
    if ((uVar36 & 3) != 0) {
      pbVar10 = (byte *)(lVar4 + local_70 * 0x14 + 0x13);
      lVar32 = 0;
      do {
        bVar29 = *pbVar10;
        if (2 < bVar29) {
          bVar29 = 3;
        }
        *pbVar10 = bVar29;
        lVar32 = lVar32 + -1;
        pbVar10 = pbVar10 + 0x14;
      } while (-lVar32 != ((ulong)uVar36 & 3));
      uVar21 = local_70 - lVar32;
    }
    if (2 < ~local_70 + uVar17) {
      lVar32 = uVar17 - uVar21;
      pbVar10 = (byte *)(lVar4 + uVar21 * 0x14 + 0x4f);
      do {
        bVar29 = pbVar10[-0x3c];
        if (2 < pbVar10[-0x3c]) {
          bVar29 = 3;
        }
        pbVar10[-0x3c] = bVar29;
        bVar29 = pbVar10[-0x28];
        if (2 < pbVar10[-0x28]) {
          bVar29 = 3;
        }
        pbVar10[-0x28] = bVar29;
        bVar29 = pbVar10[-0x14];
        if (2 < pbVar10[-0x14]) {
          bVar29 = 3;
        }
        pbVar10[-0x14] = bVar29;
        bVar29 = *pbVar10;
        if (2 < *pbVar10) {
          bVar29 = 3;
        }
        *pbVar10 = bVar29;
        pbVar10 = pbVar10 + 0x50;
        lVar32 = lVar32 + -4;
      } while (lVar32 != 0);
    }
  }
  if (uVar23 < uVar26) {
    *(undefined1 *)(lVar4 + 0x13 + uVar17 * 0x14) = 4;
  }
  if (bVar22) {
    *(undefined1 *)(lVar4 + 0x13 + local_70 * 0x14) = 1;
    cVar30 = (char)plVar3[1];
  }
  else {
    cVar30 = (char)plVar3[1];
  }
  if (cVar30 != '\0') {
    uVar36 = uVar23;
    do {
      uVar8 = uVar36;
      uVar36 = uVar8 + 1;
      if (uVar26 <= uVar36) goto LAB_0042e771;
    } while (*(char *)(lVar4 + 0x12 + (ulong)uVar36 * 0x14) != '\x04');
    uVar35 = uVar19 - uVar36;
    if (uVar36 <= uVar19 && uVar35 != 0) {
      puVar34 = (undefined8 *)(lVar4 + (ulong)uVar36 * 0x14);
      pbVar10 = (byte *)(lVar4 + (ulong)uVar19 * 0x14 + 0x12);
      do {
        if (((((pbVar10[-6] & 0x20) == 0) && (*pbVar10 < 0x20)) &&
            ((1 << (*pbVar10 & 0x1f) & 0x58c06U) != 0)) ||
           ((*(int *)(local_58 + 0x3c) == 0x4b6e6461 && (*pbVar10 == 4)))) {
          if (*pbVar10 != 4) {
            local_78 = *(undefined4 *)(puVar34 + 2);
            local_88 = *puVar34;
            uStack_80 = puVar34[1];
            memmove(puVar34,(void *)(lVar4 + (ulong)(uVar8 + 2) * 0x14),(ulong)uVar35 * 0x14);
            *(undefined8 *)(pbVar10 + -0x12) = local_88;
            *(undefined8 *)(pbVar10 + -10) = uStack_80;
            *(undefined4 *)(pbVar10 + -2) = local_78;
          }
          break;
        }
        uVar35 = uVar35 - 1;
        pbVar10 = pbVar10 + -0x14;
        uVar19 = (int)uVar14 - 1;
        uVar14 = (ulong)uVar19;
      } while (uVar36 < uVar19);
    }
  }
LAB_0042e771:
  this = local_58;
  if (param_4 < uVar26) {
    cVar30 = '\0';
    uVar17 = uVar20;
    do {
      lVar32 = lVar4 + uVar17 * 0x14;
      bVar29 = *(byte *)(lVar4 + 0x12 + uVar17 * 0x14);
      if ((bVar29 < 0x20) && ((1 << (bVar29 & 0x1f) & 0x11078U) != 0)) {
        *(char *)(lVar32 + 0x13) = cVar30;
        if ((bVar29 == 4) && (cVar30 == '\x02')) {
          uVar14 = uVar17;
          do {
            if (uVar14 <= uVar20) goto LAB_0042e792;
            uVar14 = uVar14 - 1;
            cVar1 = *(char *)(lVar4 + 0x13 + (uVar14 & 0xffffffff) * 0x14);
          } while (cVar1 == '\x02');
          *(char *)(lVar32 + 0x13) = cVar1;
        }
      }
      else {
        cVar1 = *(char *)(lVar32 + 0x13);
        if ((((cVar1 != '\r') && (cVar30 = cVar1, bVar29 == 0xd)) && (uVar20 < uVar17)) &&
           (*(char *)(lVar4 + -2 + uVar17 * 0x14) == '\b')) {
          *(char *)(lVar4 + uVar17 * 0x14 + -1) = cVar1;
        }
      }
LAB_0042e792:
      uVar17 = uVar17 + 1;
    } while (uVar17 != (param_5 & 0xffffffff));
  }
  if (uVar23 + 1 < uVar26) {
    uVar17 = (ulong)(uVar23 + 1);
    do {
      while( true ) {
        bVar29 = *(byte *)(lVar4 + 0x12 + uVar17 * 0x14);
        uVar19 = (uint)uVar17;
        if ((*(byte *)(lVar4 + 0xc + uVar17 * 0x14) & 0x20) == 0) break;
        uVar36 = 1 << (bVar29 & 0x1f);
LAB_0042e8d2:
        if ((uVar36 & 0x2080) == 0) {
          uVar19 = uVar23;
        }
        if (bVar29 < 0x20) {
          uVar23 = uVar19;
        }
        uVar17 = uVar17 + 1;
        if (uVar26 <= (uint)uVar17) goto LAB_0042e8f2;
      }
      uVar36 = 1 << (bVar29 & 0x1f);
      if ((0x1f < bVar29) || ((uVar36 & 0x58c06) == 0)) goto LAB_0042e8d2;
      uVar14 = (ulong)(uVar23 + 1);
      if (uVar14 < uVar17) {
        pbVar10 = (byte *)(lVar4 + 0x13 + uVar14 * 0x14);
        do {
          uVar14 = uVar14 + 1;
          if (*pbVar10 < 0xd) {
            *pbVar10 = *(byte *)(lVar4 + uVar17 * 0x14 + 0x13);
          }
          pbVar10 = pbVar10 + 0x14;
        } while ((uVar14 & 0xffffffff) < uVar17);
      }
      uVar17 = uVar17 + 1;
      uVar23 = uVar19;
    } while ((uint)uVar17 < uVar26);
  }
LAB_0042e8f2:
  local_68 = uVar20 * 5;
  uVar2 = *(undefined1 *)(lVar4 + 0xf + uVar20 * 0x14);
  local_38 = ~uVar20;
  uVar19 = uVar26 - param_4;
  local_60 = CONCAT44(local_60._4_4_,uVar19);
  if (param_4 <= uVar26 && uVar19 != 0) {
    uVar26 = uVar26 - (int)uVar20;
    uVar17 = uVar20;
    if ((uVar26 & 3) != 0) {
      puVar33 = (undefined1 *)(lVar4 + uVar20 * 0x14 + 0xf);
      uVar17 = 0;
      do {
        *puVar33 = (char)uVar17;
        uVar17 = uVar17 + 1;
        puVar33 = puVar33 + 0x14;
      } while (((ulong)uVar26 & 3) != uVar17);
      uVar17 = uVar17 + uVar20;
    }
    if (2 < local_38 + (param_5 & 0xffffffff)) {
      pcVar31 = (char *)(lVar4 + uVar17 * 0x14 + 0x4b);
      do {
        cVar30 = (char)uVar17 - (char)param_4;
        pcVar31[-0x3c] = cVar30;
        pcVar31[-0x28] = cVar30 + '\x01';
        pcVar31[-0x14] = cVar30 + '\x02';
        *pcVar31 = cVar30 + '\x03';
        uVar17 = uVar17 + 4;
        pcVar31 = pcVar31 + 0x50;
      } while ((param_5 & 0xffffffff) != uVar17);
    }
  }
  local_50 = (ulong)param_4;
  local_40 = param_5 & 0xffffffff;
  if (1 < uVar19) {
    lVar32 = lVar4 + uVar20 * 0x14;
    uVar20 = 1;
    uVar17 = 0;
    do {
      uVar14 = uVar17;
      do {
        if (uVar14 == 0xffffffffffffffff) {
          uVar14 = 0;
          if (uVar20 != 0) goto LAB_0042e9e0;
          goto LAB_0042ea37;
        }
        uVar21 = uVar14 & 0xffffffff;
        uVar14 = uVar14 - 1;
      } while (*(byte *)(lVar32 + 0x13 + uVar20 * 0x14) < *(byte *)(lVar32 + 0x13 + uVar21 * 0x14));
      uVar14 = (ulong)((int)uVar14 + 2);
      if (uVar20 != uVar14) {
LAB_0042e9e0:
        local_78 = *(undefined4 *)(lVar32 + 0x10 + uVar20 * 0x14);
        puVar34 = (undefined8 *)(lVar32 + uVar20 * 0x14);
        local_88 = *puVar34;
        uStack_80 = puVar34[1];
        memmove((void *)(lVar32 + (ulong)((int)uVar14 + 1) * 0x14),(void *)(uVar14 * 0x14 + lVar32),
                (ulong)(uint)((int)uVar20 - (int)uVar14) * 0x14);
        puVar34 = (undefined8 *)(lVar32 + uVar14 * 0x14);
        *puVar34 = local_88;
        puVar34[1] = uStack_80;
        *(undefined4 *)(lVar32 + 0x10 + uVar14 * 0x14) = local_78;
      }
LAB_0042ea37:
      uVar20 = uVar20 + 1;
      uVar17 = uVar17 + 1;
    } while (uVar20 != uVar19);
  }
  uVar17 = local_40;
  uVar20 = local_50;
  uVar19 = (uint)local_40;
  uVar14 = local_40 & 0xffffffff;
  uVar26 = (uint)local_50;
  if (uVar26 < uVar19) {
    pcVar31 = (char *)(lVar4 + local_68 * 4 + 0x13);
    uVar14 = local_50 & 0xffffffff;
    uVar21 = local_40 & 0xffffffff;
    uVar16 = local_40 & 0xffffffff;
    do {
      uVar23 = (uint)uVar21;
      if (*pcVar31 == '\x02') {
        if ((uint)uVar16 == uVar19) {
          uVar16 = uVar14;
        }
        uVar21 = uVar14;
      }
      else if (*pcVar31 == '\x04') {
        if (uVar23 <= (uint)uVar16) goto LAB_0042ec3c;
        goto LAB_0042eb0a;
      }
      uVar23 = (uint)uVar21;
      uVar36 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar36;
      pcVar31 = pcVar31 + 0x14;
    } while (uVar19 != uVar36);
    uVar14 = local_40 & 0xffffffff;
    if ((uint)uVar16 < uVar23) {
LAB_0042eb0a:
      uVar12 = uVar23 + 1;
      uVar36 = *(uint *)(this + 0x60);
      uVar8 = (uint)uVar16;
      uVar35 = uVar8;
      if (uVar36 < uVar8) {
        uVar35 = uVar36;
      }
      if (uVar12 <= uVar36) {
        uVar36 = uVar12;
      }
      if ((uVar35 + 2 <= uVar36) && (uVar35 < uVar36 - 1)) {
        uVar21 = (ulong)(uVar36 - 1);
        uVar27 = (ulong)uVar35;
        puVar34 = (undefined8 *)(*(long *)(this + 0x70) + uVar27 * 0x14);
        puVar37 = (undefined8 *)(*(long *)(this + 0x70) + uVar21 * 0x14);
        do {
          uVar21 = uVar21 - 1;
          local_78 = *(undefined4 *)(puVar37 + 2);
          local_88 = *puVar37;
          uStack_80 = puVar37[1];
          *(undefined4 *)(puVar37 + 2) = *(undefined4 *)(puVar34 + 2);
          uVar6 = puVar34[1];
          *puVar37 = *puVar34;
          puVar37[1] = uVar6;
          *(undefined4 *)(puVar34 + 2) = local_78;
          *puVar34 = local_88;
          puVar34[1] = uStack_80;
          uVar27 = uVar27 + 1;
          puVar34 = (undefined8 *)((long)puVar34 + 0x14);
          puVar37 = (undefined8 *)((long)puVar37 + -0x14);
        } while (uVar27 < (uVar21 & 0xffffffff));
      }
      if (this[0x5b] != (hb_buffer_t)0x0) {
        uVar36 = *(uint *)(this + 0x60);
        uVar35 = uVar8;
        if (uVar36 < uVar8) {
          uVar35 = uVar36;
        }
        if (uVar36 < uVar12) {
          uVar12 = uVar36;
        }
        if ((uVar35 + 2 <= uVar12) && (uVar35 < uVar12 - 1)) {
          uVar21 = (ulong)(uVar12 - 1);
          uVar27 = (ulong)uVar35;
          puVar37 = (undefined8 *)(uVar27 * 0x14 + *(long *)(this + 0x80));
          puVar34 = (undefined8 *)(*(long *)(this + 0x80) + uVar21 * 0x14);
          do {
            uVar21 = uVar21 - 1;
            local_78 = *(undefined4 *)(puVar34 + 2);
            local_88 = *puVar34;
            uStack_80 = puVar34[1];
            *(undefined4 *)(puVar34 + 2) = *(undefined4 *)(puVar37 + 2);
            uVar6 = puVar37[1];
            *puVar34 = *puVar37;
            puVar34[1] = uVar6;
            *(undefined4 *)(puVar37 + 2) = local_78;
            *puVar37 = local_88;
            puVar37[1] = uStack_80;
            uVar27 = uVar27 + 1;
            puVar37 = (undefined8 *)((long)puVar37 + 0x14);
            puVar34 = (undefined8 *)((long)puVar34 + -0x14);
          } while (uVar27 < (uVar21 & 0xffffffff));
        }
      }
      if (uVar8 <= uVar23) {
        uVar21 = uVar16;
        do {
          uVar8 = uVar8 + 1;
          uVar36 = (uint)uVar16;
          bVar29 = *(byte *)(lVar4 + 0x12 + uVar21 * 0x14);
          uVar35 = (int)uVar21 + 1;
          uVar21 = (ulong)uVar35;
          if ((bVar29 < 0x20) && ((1 << (bVar29 & 0x1f) & 0x2080U) != 0)) {
            uVar12 = *(uint *)(this + 0x60);
            uVar13 = uVar36;
            if (uVar12 < uVar36) {
              uVar13 = uVar12;
            }
            uVar24 = uVar35;
            if (uVar12 < uVar35) {
              uVar24 = uVar12;
            }
            if ((uVar13 + 2 <= uVar24) && (uVar13 < uVar24 - 1)) {
              uVar16 = (ulong)uVar13;
              puVar34 = (undefined8 *)(*(long *)(this + 0x70) + uVar16 * 0x14);
              if (uVar8 <= uVar12) {
                uVar12 = uVar8;
              }
              uVar27 = (ulong)(uVar12 - 1);
              puVar37 = (undefined8 *)(*(long *)(this + 0x70) + uVar27 * 0x14);
              do {
                uVar27 = uVar27 - 1;
                local_78 = *(undefined4 *)(puVar37 + 2);
                local_88 = *puVar37;
                uStack_80 = puVar37[1];
                *(undefined4 *)(puVar37 + 2) = *(undefined4 *)(puVar34 + 2);
                uVar6 = puVar34[1];
                *puVar37 = *puVar34;
                puVar37[1] = uVar6;
                *(undefined4 *)(puVar34 + 2) = local_78;
                *puVar34 = local_88;
                puVar34[1] = uStack_80;
                uVar16 = uVar16 + 1;
                puVar34 = (undefined8 *)((long)puVar34 + 0x14);
                puVar37 = (undefined8 *)((long)puVar37 + -0x14);
              } while (uVar16 < (uVar27 & 0xffffffff));
            }
            uVar12 = uVar35;
            if (this[0x5b] != (hb_buffer_t)0x0) {
              uVar13 = *(uint *)(this + 0x60);
              if (uVar13 < uVar36) {
                uVar36 = uVar13;
              }
              uVar24 = uVar35;
              if (uVar13 < uVar35) {
                uVar24 = uVar13;
              }
              if ((uVar36 + 2 <= uVar24) && (uVar36 < uVar24 - 1)) {
                uVar16 = (ulong)uVar36;
                puVar34 = (undefined8 *)(*(long *)(this + 0x80) + uVar16 * 0x14);
                if (uVar8 <= uVar13) {
                  uVar13 = uVar8;
                }
                uVar27 = (ulong)(uVar13 - 1);
                puVar37 = (undefined8 *)(*(long *)(this + 0x80) + uVar27 * 0x14);
                do {
                  uVar27 = uVar27 - 1;
                  local_78 = *(undefined4 *)(puVar37 + 2);
                  local_88 = *puVar37;
                  uStack_80 = puVar37[1];
                  *(undefined4 *)(puVar37 + 2) = *(undefined4 *)(puVar34 + 2);
                  uVar6 = puVar34[1];
                  *puVar37 = *puVar34;
                  puVar37[1] = uVar6;
                  *(undefined4 *)(puVar34 + 2) = local_78;
                  *puVar34 = local_88;
                  puVar34[1] = uStack_80;
                  uVar16 = uVar16 + 1;
                  puVar34 = (undefined8 *)((long)puVar34 + 0x14);
                  puVar37 = (undefined8 *)((long)puVar37 + -0x14);
                } while (uVar16 < (uVar27 & 0xffffffff));
              }
            }
          }
          else {
            uVar12 = uVar36;
          }
          uVar16 = (ulong)uVar12;
        } while (uVar35 <= uVar23);
      }
    }
  }
LAB_0042ec3c:
  uVar23 = (uint)uVar14;
  if (((uint)local_60 < 0x80) && ((char)plVar3[1] == '\0')) {
    if (uVar23 < uVar19) {
      uVar16 = local_40 & 0xffffffff;
      uVar21 = uVar14;
      do {
        uVar36 = (uint)*(byte *)(lVar4 + 0xf + uVar21 * 0x14);
        if (uVar36 != 0xff) {
          uVar27 = (ulong)(uVar36 + uVar26);
          if (uVar21 == uVar27) {
            uVar36 = (uint)uVar21;
            uVar8 = uVar36;
          }
          else {
            uVar18 = uVar21 & 0xffffffff;
            uVar28 = uVar21 & 0xffffffff;
            do {
              if ((uint)uVar27 < (uint)uVar28) {
                uVar28 = uVar27;
              }
              uVar36 = (uint)uVar28;
              if ((uint)uVar18 < (uint)uVar27) {
                uVar18 = uVar27;
              }
              uVar8 = (uint)uVar18;
              bVar29 = *(byte *)(lVar4 + 0xf + uVar27 * 0x14);
              *(undefined1 *)(lVar4 + 0xf + uVar27 * 0x14) = 0xff;
              uVar27 = (ulong)(bVar29 + uVar26);
            } while (uVar21 != uVar27);
          }
          uVar27 = (ulong)uVar36;
          if (uVar36 <= uVar23) {
            uVar27 = uVar14;
          }
          if (1 < (uVar8 + 1) - (uint)uVar27) {
            hb_buffer_t::merge_clusters_impl(this,(uint)uVar27,uVar8 + 1);
          }
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar16);
    }
  }
  else if (1 < uVar19 - uVar23) {
    hb_buffer_t::merge_clusters_impl(this,uVar23,uVar19);
  }
  iVar9 = uVar19 - uVar26;
  if (uVar26 <= uVar19 && iVar9 != 0) {
    uVar36 = uVar19 - (int)local_70;
    uVar21 = local_70;
    if ((uVar36 & 7) != 0) {
      puVar33 = (undefined1 *)(lVar4 + local_68 * 4 + 0xf);
      lVar32 = 0;
      do {
        *puVar33 = uVar2;
        lVar32 = lVar32 + -1;
        puVar33 = puVar33 + 0x14;
      } while (-lVar32 != ((ulong)uVar36 & 7));
      uVar21 = local_70 - lVar32;
    }
    if (6 < local_38 + (uVar17 & 0xffffffff)) {
      lVar32 = (uVar17 & 0xffffffff) - uVar21;
      puVar33 = (undefined1 *)(lVar4 + uVar21 * 0x14 + 0x9b);
      do {
        puVar33[-0x8c] = uVar2;
        puVar33[-0x78] = uVar2;
        puVar33[-100] = uVar2;
        puVar33[-0x50] = uVar2;
        puVar33[-0x3c] = uVar2;
        puVar33[-0x28] = uVar2;
        puVar33[-0x14] = uVar2;
        *puVar33 = uVar2;
        puVar33 = puVar33 + 0xa0;
        lVar32 = lVar32 + -8;
      } while (lVar32 != 0);
    }
    puVar15 = (uint *)(lVar4 + local_68 * 4 + 4);
    do {
      if (*(char *)((long)puVar15 + 0xf) != '\x01') break;
      *puVar15 = *puVar15 | *(uint *)(plVar3 + 0x12);
      puVar15 = puVar15 + 5;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  uVar36 = *(uint *)((long)plVar3 + 0xa4);
  lVar32 = plVar3[1];
  if (((char)lVar32 == '\0') && (*(int *)(*plVar3 + 0x14) == 0)) {
    uVar36 = uVar36 | *(uint *)((long)plVar3 + 0x9c);
  }
  if (uVar26 < uVar23) {
    uVar8 = uVar23 - (int)local_70;
    uVar21 = local_70;
    if ((uVar8 & 3) != 0) {
      puVar15 = (uint *)(lVar4 + local_68 * 4 + 4);
      lVar25 = 0;
      do {
        *puVar15 = *puVar15 | uVar36;
        lVar25 = lVar25 + -1;
        puVar15 = puVar15 + 5;
      } while (-lVar25 != ((ulong)uVar8 & 3));
      uVar21 = local_70 - lVar25;
    }
    if (2 < local_38 + uVar14) {
      lVar25 = uVar14 - uVar21;
      puVar15 = (uint *)(lVar4 + uVar21 * 0x14 + 0x40);
      do {
        puVar15[-0xf] = puVar15[-0xf] | uVar36;
        puVar15[-10] = puVar15[-10] | uVar36;
        puVar15[-5] = puVar15[-5] | uVar36;
        *puVar15 = *puVar15 | uVar36;
        puVar15 = puVar15 + 0x14;
        lVar25 = lVar25 + -4;
      } while (lVar25 != 0);
    }
  }
  if (uVar23 + 1 < uVar19) {
    uVar36 = *(uint *)(plVar3 + 0x14) | *(uint *)((long)plVar3 + 0x9c) | *(uint *)(plVar3 + 0x15);
    uVar21 = (ulong)(uVar23 + 1);
    uVar8 = ~uVar23 + uVar19 & 3;
    if (uVar8 != 0) {
      puVar15 = (uint *)(lVar4 + uVar21 * 0x14 + 4);
      lVar25 = 0;
      do {
        *puVar15 = *puVar15 | uVar36;
        lVar25 = lVar25 + -1;
        puVar15 = puVar15 + 5;
      } while (-uVar8 != (int)lVar25);
      uVar21 = uVar21 - lVar25;
    }
    if (2 < (uVar19 - uVar23) - 2) {
      puVar15 = (uint *)(lVar4 + uVar21 * 0x14 + 0x40);
      do {
        puVar15[-0xf] = puVar15[-0xf] | uVar36;
        puVar15[-10] = puVar15[-10] | uVar36;
        puVar15[-5] = puVar15[-5] | uVar36;
        *puVar15 = *puVar15 | uVar36;
        uVar8 = (int)uVar21 + 4;
        uVar21 = (ulong)uVar8;
        puVar15 = puVar15 + 0x14;
      } while (uVar8 < uVar19);
    }
  }
  if ((((char)lVar32 != '\0') && (*(int *)(this + 0x3c) == 0x44657661)) && (uVar26 + 1 < uVar23)) {
    lVar32 = (ulong)(uVar26 + 1) * 0x14;
    uVar21 = uVar20 & 0xffffffff;
    lVar25 = lVar4;
    do {
      iVar9 = (int)uVar21;
      if (((*(char *)(lVar4 + 0x12 + uVar21 * 0x14) == '\x0f') &&
          (*(char *)(lVar25 + 0x12 + lVar32) == '\x04')) &&
         ((uVar23 - 2 == iVar9 || (*(char *)(lVar25 + 0x12 + (ulong)(uVar26 + 2) * 0x14) != '\x06'))
         )) {
        puVar15 = (uint *)(lVar4 + 4 + uVar21 * 0x14);
        *puVar15 = *puVar15 | *(uint *)((long)plVar3 + 0x9c);
        puVar15 = (uint *)(lVar25 + 4 + lVar32);
        *puVar15 = *puVar15 | *(uint *)((long)plVar3 + 0x9c);
      }
      lVar25 = lVar25 + 0x14;
      uVar21 = (ulong)(iVar9 + 1);
    } while (iVar9 + 2U < uVar23);
  }
  uVar21 = local_70;
  if (((int)plVar3[0x13] != 0) && (uVar23 + 2 < uVar19)) {
    local_60 = uVar14;
    do {
      uVar16 = (ulong)((int)local_60 + 1);
      local_68 = uVar16 * 5;
      uVar14 = (ulong)((int)local_60 + 2);
      local_88 = CONCAT44(*(undefined4 *)(lVar4 + uVar14 * 0x14),
                          *(undefined4 *)(lVar4 + uVar16 * 0x14));
      uVar19 = *(uint *)(plVar3 + 6);
      if ((ulong)uVar19 != 0) {
        lVar32 = plVar3[5];
        lVar25 = 0;
        do {
          bVar7 = hb_ot_layout_lookup_would_substitute
                            (local_48,(uint)*(ushort *)(lVar32 + lVar25),(uint *)&local_88,2,
                             (uint)*(byte *)(plVar3 + 7));
          iVar9 = (int)CONCAT71(extraout_var_01,bVar7);
          if (iVar9 != 0) break;
          bVar7 = (ulong)uVar19 * 0xc + -0xc != lVar25;
          lVar25 = lVar25 + 0xc;
        } while (bVar7);
        uVar19 = (uint)local_40;
        uVar21 = local_70;
        if (iVar9 != 0) {
          puVar15 = (uint *)(lVar4 + 4 + local_68 * 4);
          *puVar15 = *puVar15 | *(uint *)(plVar3 + 0x13);
          puVar15 = (uint *)(lVar4 + 4 + uVar14 * 0x14);
          *puVar15 = *puVar15 | *(uint *)(plVar3 + 0x13);
          uVar26 = (uint)local_50;
          break;
        }
        uVar20 = local_50;
        uVar17 = local_40;
      }
      uVar26 = (uint)uVar20;
      iVar9 = (int)local_60;
      uVar19 = (uint)uVar17;
      local_60 = uVar16;
    } while (iVar9 + 3U < uVar19);
  }
  if (uVar26 + 1 < uVar19) {
    uVar20 = (ulong)(uVar26 + 1);
    uVar23 = uVar26;
    do {
      uVar17 = (ulong)uVar23;
      if ((((*(byte *)(lVar4 + 0xc + uVar20 * 0x14) & 0x20) == 0) &&
          (*(char *)(lVar4 + 0x12 + uVar20 * 0x14) == '\x05')) &&
         (puVar15 = (uint *)(lVar4 + 4 + uVar17 * 0x14),
         *puVar15 = *puVar15 & ~*(uint *)((long)plVar3 + 0xa4), uVar26 < uVar23)) {
        puVar15 = (uint *)(lVar4 + -0x10 + uVar17 * 0x14);
        do {
          if ((((puVar15[7] & 0x20) == 0) && (*(byte *)((long)puVar15 + 0x22) < 0x20)) &&
             ((1 << (*(byte *)((long)puVar15 + 0x22) & 0x1f) & 0x58c06U) != 0)) break;
          *puVar15 = *puVar15 & ~*(uint *)((long)plVar3 + 0xa4);
          uVar17 = uVar17 - 1;
          puVar15 = puVar15 + -5;
        } while (uVar21 < uVar17);
      }
      uVar20 = uVar20 + 1;
      uVar23 = uVar23 + 1;
    } while ((uint)uVar20 < uVar19);
  }
  return;
}


