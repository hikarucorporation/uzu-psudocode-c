// Function : writeImageToStream
// Namespace: juce:PNGImageFormat
// Entry    : 003937d0
// Prototype: undefined4 writeImageToStream(undefined8 param_1_00, long * param_2, undefined8 param_3)
// Body     : 003937d0 - 00396013


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* juce::PNGImageFormat::writeImageToStream(juce::Image const&, juce::OutputStream&) */

undefined4 __thiscall
juce::PNGImageFormat::writeImageToStream(undefined8 param_1_00,long *param_2,undefined8 param_3)

{
  pnglibNamespace pVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  long *plVar5;
  char *__s;
  char *__s_00;
  uint *puVar6;
  bool bVar7;
  byte bVar8;
  pnglibNamespace pVar9;
  undefined1 uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined7 extraout_var;
  pnglibNamespace *this;
  ulong uVar16;
  void *__ptr;
  size_t sVar17;
  size_t __n;
  ulong uVar18;
  ulong uVar19;
  uint *puVar20;
  undefined8 uVar21;
  pnglibNamespace pVar22;
  undefined1 uVar23;
  uint uVar24;
  long lVar25;
  char cVar26;
  byte *pbVar27;
  ulong *puVar28;
  ulong *puVar29;
  long lVar30;
  undefined1 *puVar31;
  ushort *puVar32;
  ulong uVar33;
  long lVar34;
  pnglibNamespace pVar35;
  uint uVar36;
  byte *pbVar37;
  undefined1 *puVar38;
  uint uVar39;
  undefined4 local_655;
  undefined4 local_651;
  byte local_64d;
  uint local_64c;
  undefined1 *local_648;
  uint local_640;
  uint local_63c;
  ulong *local_638;
  long local_630;
  undefined1 local_628 [5];
  byte bStack_623;
  undefined1 uStack_622;
  undefined1 uStack_621;
  byte local_620;
  byte local_61f [87];
  ulong local_5c8;
  ulong local_5c0;
  int local_5b8;
  uint local_5b4;
  uint local_5b0;
  uint local_5ac;
  long local_5a8;
  long *local_5a0;
  uint *local_598;
  pnglibNamespace *local_590;
  long *local_588;
  ulong local_580;
  int *local_578;
  ulong *local_570;
  undefined1 *local_568;
  ulong local_560;
  long local_558;
  uint *local_550;
  long local_548 [2];
  int local_534;
  int local_530;
  uint local_52c;
  uint local_528;
  long *local_520;
  undefined1 local_518 [5];
  undefined1 uStack_513;
  undefined2 uStack_512;
  undefined8 uStack_510;
  undefined8 local_508;
  uint local_500;
  uint local_4fc;
  code *local_478;
  code *local_470;
  pnglibNamespace *local_468;
  undefined8 local_1fc;
  __jmp_buf_tag local_f8;
  
  plVar5 = (long *)*param_2;
  if (plVar5 == (long *)0x0) {
    return 0;
  }
  local_64c = *(uint *)(plVar5 + 2);
  uVar13 = *(uint *)((long)plVar5 + 0x14);
  local_5a0 = param_2;
  if ((long)(int)local_64c == 0) {
    local_648 = (undefined1 *)0x0;
  }
  else {
    local_648 = malloc((long)(int)local_64c << 2);
  }
  local_52c = local_64c;
  local_520 = (long *)0x0;
                    /* try { // try from 00393844 to 00393858 has its CatchHandler @ 0039601e */
  local_63c = uVar13;
  local_528 = uVar13;
  (**(code **)(*plVar5 + 0x38))(plVar5,local_548,0,0,0);
  memset(&local_500,0,0x3d0);
  local_1fc = 0xf4240000f4240;
  _local_518 = (byte *)0x0;
  uStack_510 = 0;
  local_508 = 0;
                    /* try { // try from 00393896 to 003938a2 has its CatchHandler @ 00396022 */
  bVar7 = pnglibNamespace::png_user_version_check((long)local_518);
  if ((int)CONCAT71(extraout_var,bVar7) != 0) {
    this = malloc(1000);
    if (this != (pnglibNamespace *)0x0) {
      local_478 = pnglibNamespace::png_zalloc;
      local_470 = pnglibNamespace::png_zfree;
      local_468 = this;
      memcpy(this,local_518,1000);
      uVar21 = _UNK_005ddb38;
      *(undefined8 *)(this + 0xd8) = _DAT_005ddb30;
      *(undefined8 *)(this + 0xe0) = uVar21;
      *(undefined4 *)(this + 0x100) = 0;
      *(undefined8 *)(this + 0xf8) = 0x80000000f;
      uVar21 = _UNK_005ddb48;
      *(undefined8 *)(this + 0xe8) = _DAT_005ddb40;
      *(undefined8 *)(this + 0xf0) = uVar21;
      this[0x52] = (pnglibNamespace)((byte)this[0x52] | 0x20);
      *(undefined8 *)(this + 0x28) = 0;
      *(code **)(this + 0x18) = pnglibNamespace::png_default_write_data;
      *(code **)(this + 0x1b0) = pnglibNamespace::png_default_flush;
      if (*(long *)(this + 0x20) != 0) {
        *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 00393967 to 003939c2 has its CatchHandler @ 00396022 */
        pnglibNamespace::png_warning
                  ((long)this,"Can\'t set both read_data_fn and write_data_fn in the same structure"
                  );
      }
      *(__jmp_buf_tag **)(this + 0x10) = &local_f8;
      *(code **)this = PNGHelpers::errorCallback;
      *(code **)(this + 8) = PNGHelpers::warningCallback;
      local_590 = this;
      iVar12 = _setjmp(&local_f8);
      if (iVar12 != 0) {
        uVar15 = 0;
        goto joined_r0x003939d2;
      }
      local_598 = calloc(1,0x158);
      local_550 = local_598;
      if (local_598 == (uint *)0x0) {
        uVar21 = pnglibNamespace::png_destroy_write_struct(&local_590,(undefined8 *)0x0);
      }
      else {
        *(undefined8 *)(this + 0x28) = param_3;
        *(code **)(this + 0x18) = PNGHelpers::writeDataCallback;
        *(code **)(this + 0x1b0) = pnglibNamespace::png_default_flush;
        if (*(long *)(this + 0x20) != 0) {
          *(undefined8 *)(this + 0x20) = 0;
                    /* try { // try from 00393a45 to 00393aeb has its CatchHandler @ 00396014 */
          pnglibNamespace::png_warning
                    ((long)this,
                     "Can\'t set both read_data_fn and write_data_fn in the same structure");
        }
        puVar6 = local_598;
        if ((*local_5a0 == 0) || (uVar13 = 2, *(int *)(*local_5a0 + 0xc) != 1)) {
          uVar13 = 6;
        }
        *local_598 = local_64c;
        local_598[1] = local_63c;
        *(undefined1 *)(local_598 + 9) = 8;
        *(char *)((long)local_598 + 0x25) = (char)uVar13;
        *(undefined2 *)((long)local_598 + 0x26) = 0;
        *(undefined1 *)(local_598 + 10) = 0;
        pnglibNamespace::png_check_IHDR(this,local_64c,local_63c,8,uVar13,0,0,0);
        bVar8 = *(byte *)((long)puVar6 + 0x25);
        if (bVar8 == 3) {
          *(undefined1 *)((long)puVar6 + 0x29) = 1;
          cVar26 = '\x01';
        }
        else {
          cVar26 = (bVar8 & 2) + 1;
          *(char *)((long)puVar6 + 0x29) = cVar26;
          if ((bVar8 & 4) != 0) {
            cVar26 = (bVar8 & 2) + 2;
            *(char *)((long)puVar6 + 0x29) = cVar26;
          }
        }
        bVar8 = (char)puVar6[9] * cVar26;
        *(byte *)((long)puVar6 + 0x2a) = bVar8;
        if (bVar8 < 8) {
          uVar16 = (ulong)bVar8 * (ulong)local_64c + 7 >> 3;
        }
        else {
          uVar16 = (ulong)(bVar8 >> 3) * (ulong)local_64c;
        }
        *(ulong *)(puVar6 + 4) = uVar16;
        puVar6[0x2c] = 0x80808;
        *(undefined1 *)(puVar6 + 0x2d) = 8;
        uVar13 = puVar6[2] | 2;
        puVar6[2] = uVar13;
        if (((byte)this[0x4d] & 4) == 0) {
          _local_518 = (byte *)0xa1a0a0d474e5089;
          *(undefined4 *)(this + 0x36c) = 0x12;
          if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
                    /* try { // try from 00393ba7 to 00394459 has its CatchHandler @ 0039602c */
          (**(code **)(this + 0x18))
                    (this,local_518 + (byte)this[0x18d],8 - (ulong)(byte)this[0x18d]);
          if ((byte)this[0x18d] < 3) {
            this[0x4d] = (pnglibNamespace)((byte)this[0x4d] | 0x10);
          }
          pVar9 = *(pnglibNamespace *)((long)puVar6 + 0x25);
          if (6 < (byte)pVar9) {
switchD_00393bf9_caseD_1:
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          uVar13 = *puVar6;
          local_640 = puVar6[1];
          pVar1 = *(pnglibNamespace *)(puVar6 + 9);
          cVar26 = *(char *)((long)puVar6 + 0x26);
          cVar2 = *(char *)((long)puVar6 + 0x27);
          pVar35 = *(pnglibNamespace *)(puVar6 + 10);
          switch(pVar9) {
          case (pnglibNamespace)0x0:
            if ((0x10 < (byte)pVar1) ||
               (pVar22 = (pnglibNamespace)0x1, (0x10116UL >> ((ulong)(byte)pVar1 & 0x3f) & 1) == 0))
            {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            break;
          default:
            goto switchD_00393bf9_caseD_1;
          case (pnglibNamespace)0x2:
            pVar22 = (pnglibNamespace)0x3;
            if ((pVar1 != (pnglibNamespace)0x8) && (pVar1 != (pnglibNamespace)0x10)) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            break;
          case (pnglibNamespace)0x3:
            if ((7 < (byte)pVar1 - 1) ||
               (pVar22 = (pnglibNamespace)0x1, (0x8bU >> ((byte)pVar1 - 1 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            break;
          case (pnglibNamespace)0x4:
            pVar22 = (pnglibNamespace)0x2;
            if ((pVar1 != (pnglibNamespace)0x8) && (pVar1 != (pnglibNamespace)0x10)) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            break;
          case (pnglibNamespace)0x6:
            pVar22 = (pnglibNamespace)0x4;
            if ((pVar1 != (pnglibNamespace)0x8) && (pVar1 != (pnglibNamespace)0x10)) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
          }
          this[0x18b] = pVar22;
          if (cVar26 != '\0') {
            pnglibNamespace::png_warning((long)this,"Invalid compression type specified");
          }
          if (cVar2 != '\0') {
            pnglibNamespace::png_warning((long)this,"Invalid filter type specified");
          }
          if (1 < (byte)pVar35) {
            pnglibNamespace::png_warning((long)this,"Invalid interlace type specified");
            pVar35 = (pnglibNamespace)0x1;
          }
          uVar16 = uStack_510;
          this[0x188] = pVar1;
          this[0x187] = pVar9;
          this[0x184] = pVar35;
          this[0x318] = (pnglibNamespace)0x0;
          *(uint *)(this + 0x118) = uVar13;
          *(uint *)(this + 0x11c) = local_640;
          pVar22 = (pnglibNamespace)((char)this[0x18b] * (char)pVar1);
          this[0x18a] = pVar22;
          if ((byte)pVar22 < 8) {
            uVar18 = (ulong)(byte)pVar22 * (ulong)uVar13 + 7 >> 3;
          }
          else {
            uVar18 = (ulong)((byte)pVar22 >> 3) * (ulong)uVar13;
          }
          *(ulong *)(this + 0x128) = uVar18;
          *(uint *)(this + 0x124) = uVar13;
          this[0x189] = pVar1;
          this[0x18c] = this[0x18b];
          local_518._0_2_ = CONCAT11((char)(uVar13 >> 0x10),(char)(uVar13 >> 0x18));
          local_518._0_3_ = CONCAT12((char)(uVar13 >> 8),local_518._0_2_);
          local_518._0_4_ = CONCAT13((char)uVar13,local_518._0_3_);
          local_518 = (undefined1  [5])CONCAT14((char)(local_640 >> 0x18),local_518._0_4_);
          _local_518 = CONCAT15((char)(local_640 >> 0x10),local_518);
          _local_518 = CONCAT16((char)(local_640 >> 8),_local_518);
          _local_518 = (byte *)CONCAT17((char)local_640,_local_518);
          uStack_510._0_4_ = (uint)CONCAT11(pVar9,pVar1);
          uStack_510._5_3_ = SUB83(uVar16,5);
          uStack_510._0_5_ = CONCAT14(pVar35,(uint)uStack_510);
          pnglibNamespace::png_write_complete_chunk(this,0x49484452,(ulong *)local_518,0xd);
          if (this[0x186] == (pnglibNamespace)0x0) {
            pVar9 = (pnglibNamespace)0x8;
            if (this[0x187] != (pnglibNamespace)0x3) {
              pVar9 = (pnglibNamespace)(((byte)this[0x188] < 8) * '\x10' + -8);
            }
            this[0x186] = pVar9;
          }
          *(undefined4 *)(this + 0x4c) = 1;
          uVar11 = *(ushort *)((long)puVar6 + 0x7e);
          if ((uVar11 & 0x8008) == 8) {
            uVar13 = puVar6[2];
            if ((uVar13 & 1) != 0) {
              uVar13 = puVar6[0xd];
              _local_518 = (byte *)CONCAT44(stack0xfffffffffffffaec,
                                            uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 |
                                            (uVar13 & 0xff00) << 8 | uVar13 << 0x18);
              pnglibNamespace::png_write_complete_chunk(this,0x67414d41,(ulong *)local_518,4);
              uVar11 = *(ushort *)((long)puVar6 + 0x7e);
              goto LAB_00393e4d;
            }
LAB_00393e59:
            if ((uVar13 & 0x1000) == 0) {
              if ((uVar13 & 0x800) != 0) {
                uVar13 = puVar6[0x1f];
                if (3 < (ushort)uVar13) {
                  pnglibNamespace::png_warning((long)this,"Invalid sRGB rendering intent specified")
                  ;
                }
                _local_518 = (byte *)CONCAT71(stack0xfffffffffffffae9,(char)uVar13);
                pnglibNamespace::png_write_complete_chunk(this,0x73524742,(ulong *)local_518,1);
              }
            }
            else {
              if ((uVar13 & 0x800) != 0) {
                if (((byte)this[0x52] & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(this);
                }
                pnglibNamespace::png_warning
                          ((long)this,"profile matches sRGB but writing iCCP instead");
              }
              pbVar27 = *(byte **)(puVar6 + 0x22);
              if (pbVar27 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              uVar16 = (ulong)pbVar27[2] << 8 | (ulong)pbVar27[1] << 0x10 | (ulong)*pbVar27 << 0x18
                       | (ulong)pbVar27[3];
              if ((uint)uVar16 < 0x84) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              if ((3 < pbVar27[8]) && ((pbVar27[3] & 3) != 0)) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              iVar12 = pnglibNamespace::png_check_keyword
                                 ((long)this,*(byte **)(puVar6 + 0x20),local_628);
              if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              local_628[iVar12 + 1] = 0;
              uVar13 = iVar12 + 2;
              local_508 = local_508 & 0xffffffff00000000;
              _local_518 = pbVar27;
              uStack_510 = uVar16;
              uVar16 = pnglibNamespace::png_text_compress
                                 ((long)this,0x69434350,(undefined8 *)local_518,uVar13);
              if ((int)uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              iVar12 = (int)local_508 + uVar13;
              *(undefined4 *)(this + 0x36c) = 0x22;
              local_655._0_2_ = CONCAT11((char)((uint)iVar12 >> 0x10),(char)((uint)iVar12 >> 0x18));
              local_655._0_3_ = CONCAT12((char)((uint)iVar12 >> 8),(undefined2)local_655);
              local_655 = CONCAT13((char)iVar12,(undefined3)local_655);
              local_651 = 0x50434369;
              if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              (**(code **)(this + 0x18))(this,&local_655,8);
              *(undefined4 *)(this + 0x138) = 0x69434350;
              *(undefined4 *)(this + 0x16c) = 0;
              if ((~*(uint *)(this + 0x50) & 0x300) != 0) {
                uVar16 = zlibNamespace::crc32_z(0,(ulong *)&local_651,4);
                *(int *)(this + 0x16c) = (int)uVar16;
              }
              *(undefined4 *)(this + 0x36c) = 0x42;
              if (uVar13 == 0) {
                pnglibNamespace::png_write_compressed_data_out(this,(long)local_518);
              }
              else {
                if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(this);
                }
                uVar16 = (ulong)uVar13;
                puVar28 = (ulong *)local_628;
                (**(code **)(this + 0x18))(this,puVar28,uVar16);
                bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
                if (((byte)this[0x13b] & 0x20) == 0) {
                  bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
                }
                if (bVar7) {
                  uVar18 = (ulong)*(uint *)(this + 0x16c);
                  do {
                    uVar19 = uVar16 & 0xffffffff;
                    if ((int)uVar16 == 0) {
                      uVar19 = 0xffffffff;
                    }
                    uVar18 = zlibNamespace::crc32_z((uint)uVar18,puVar28,uVar19);
                    puVar28 = (ulong *)((long)puVar28 + uVar19);
                    uVar16 = uVar16 - uVar19;
                  } while (uVar16 != 0);
                  *(int *)(this + 0x16c) = (int)uVar18;
                }
                pnglibNamespace::png_write_compressed_data_out(this,(long)local_518);
              }
              *(undefined4 *)(this + 0x36c) = 0x82;
              uVar13 = *(uint *)(this + 0x16c);
              local_655 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                          uVar13 << 0x18;
              if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              (**(code **)(this + 0x18))(this,&local_655,4);
            }
          }
          else {
LAB_00393e4d:
            if (-1 < (short)uVar11) {
              uVar13 = puVar6[2];
              goto LAB_00393e59;
            }
          }
          pbVar27 = _local_518;
          if ((puVar6[2] & 2) != 0) {
            bVar8 = *(byte *)((long)puVar6 + 0x25);
            if ((bVar8 & 2) == 0) {
              pVar9 = *(pnglibNamespace *)((long)puVar6 + 0xb3);
              if ((pVar9 != (pnglibNamespace)0x0) && ((byte)pVar9 <= (byte)this[0x189])) {
                _local_518 = (byte *)CONCAT71(stack0xfffffffffffffae9,pVar9);
                uVar16 = 1;
                goto LAB_003941f2;
              }
              pnglibNamespace::png_warning((long)this,"Invalid sBIT depth specified");
            }
            else {
              pVar9 = (pnglibNamespace)0x8;
              if (bVar8 != 3) {
                pVar9 = this[0x189];
              }
              pVar1 = *(pnglibNamespace *)(puVar6 + 0x2c);
              if ((((pVar1 == (pnglibNamespace)0x0) || ((byte)pVar9 < (byte)pVar1)) ||
                  (pVar35 = *(pnglibNamespace *)((long)puVar6 + 0xb1),
                  pVar35 == (pnglibNamespace)0x0)) ||
                 ((((byte)pVar9 < (byte)pVar35 ||
                   (pVar22 = *(pnglibNamespace *)((long)puVar6 + 0xb2),
                   pVar22 == (pnglibNamespace)0x0)) || ((byte)pVar9 < (byte)pVar22)))) {
                pnglibNamespace::png_warning((long)this,"Invalid sBIT depth specified");
              }
              else {
                local_518._0_2_ = CONCAT11(pVar35,pVar1);
                stack0xfffffffffffffaeb = SUB85(pbVar27,3);
                local_518._0_3_ = CONCAT12(pVar22,local_518._0_2_);
                uVar16 = 3;
LAB_003941f2:
                if ((bVar8 & 4) != 0) {
                  pVar9 = *(pnglibNamespace *)(puVar6 + 0x2d);
                  if ((pVar9 == (pnglibNamespace)0x0) || ((byte)this[0x189] < (byte)pVar9)) {
                    pnglibNamespace::png_warning((long)this,"Invalid sBIT depth specified");
                    goto LAB_0039423e;
                  }
                  *(pnglibNamespace *)(local_518 + uVar16) = pVar9;
                  uVar16 = uVar16 + 1;
                }
                pnglibNamespace::png_write_complete_chunk(this,0x73424954,(ulong *)local_518,uVar16)
                ;
              }
            }
          }
LAB_0039423e:
          if (((*(ushort *)((long)puVar6 + 0x7e) & 0x8010) == 0x10) && ((puVar6[2] & 4) != 0)) {
            uVar13 = puVar6[0x14];
            uVar24 = puVar6[0x15];
            _local_518 = (byte *)CONCAT44(uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 |
                                          (uVar24 & 0xff00) << 8 | uVar24 << 0x18,
                                          uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 |
                                          (uVar13 & 0xff00) << 8 | uVar13 << 0x18);
            uVar13 = puVar6[0xe];
            uVar24 = puVar6[0xf];
            uStack_510 = CONCAT44(uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8
                                  | uVar24 << 0x18,
                                  uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8
                                  | uVar13 << 0x18);
            uVar13 = puVar6[0x10];
            uVar24 = puVar6[0x11];
            local_508 = CONCAT44(uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8
                                 | uVar24 << 0x18,
                                 uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8
                                 | uVar13 << 0x18);
            uVar13 = puVar6[0x12];
            local_500 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                        uVar13 << 0x18;
            uVar13 = puVar6[0x13];
            local_4fc = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                        uVar13 << 0x18;
            pnglibNamespace::png_write_complete_chunk(this,0x6348524d,(ulong *)local_518,0x20);
          }
          pnglibNamespace::write_unknown_chunks(this,(long)puVar6,1);
          this[0x4d] = (pnglibNamespace)((byte)this[0x4d] | 4);
          uVar13 = puVar6[2];
        }
        if ((uVar13 & 8) == 0) {
          pbVar27 = _local_518;
          if (*(char *)((long)puVar6 + 0x25) == '\x03') {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
        }
        else {
          puVar32 = *(ushort **)(puVar6 + 6);
          uVar11 = (ushort)puVar6[8];
          uVar13 = (uint)uVar11;
          if (this[0x187] == (pnglibNamespace)0x3) {
            if ((uVar11 == 0) || ((uint)(1 << ((byte)this[0x188] & 0x1f)) < (uint)uVar11)) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
LAB_003943ec:
            *(ushort *)(this + 0x178) = uVar11;
            iVar12 = (uint)uVar11 * 3;
            *(undefined4 *)(this + 0x36c) = 0x22;
            local_518._0_4_ =
                 (uint)CONCAT12((char)iVar12,
                                CONCAT11((char)((uint)iVar12 >> 8),(char)((uint)iVar12 >> 0x10))) <<
                 8;
            _local_518 = (byte *)CONCAT44(0x45544c50,local_518._0_4_);
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            (**(code **)(this + 0x18))(this,local_518,8);
            *(undefined4 *)(this + 0x138) = 0x504c5445;
            *(undefined4 *)(this + 0x16c) = 0;
            if (((byte)this[0x51] & 8) == 0) {
              uVar16 = zlibNamespace::crc32_z(0,(ulong *)(local_518 + 4),4);
              *(int *)(this + 0x16c) = (int)uVar16;
            }
            *(undefined4 *)(this + 0x36c) = 0x42;
            do {
              local_628._0_2_ = *puVar32;
              local_628[2] = (char)puVar32[1];
              if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
                    /* try { // try from 003944e2 to 003944ec has its CatchHandler @ 0039601c */
              (**(code **)(this + 0x18))(this,local_628,3);
              bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
              if (((byte)this[0x13b] & 0x20) == 0) {
                bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
              }
              if (bVar7) {
                uVar16 = zlibNamespace::crc32_z(*(uint *)(this + 0x16c),(ulong *)local_628,3);
                *(int *)(this + 0x16c) = (int)uVar16;
              }
              puVar32 = (ushort *)((long)puVar32 + 3);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
            *(undefined4 *)(this + 0x36c) = 0x82;
            uVar13 = *(uint *)(this + 0x16c);
            _local_518 = (byte *)CONCAT44(stack0xfffffffffffffaec,
                                          uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 |
                                          (uVar13 & 0xff00) << 8 | uVar13 << 0x18);
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
                    /* try { // try from 00394569 to 003949c4 has its CatchHandler @ 0039602c */
            (**(code **)(this + 0x18))(this,local_518,4);
            this[0x4c] = (pnglibNamespace)((byte)this[0x4c] | 2);
          }
          else if (uVar11 - 0x101 < 0xffffff00) {
            pnglibNamespace::png_warning((long)this,"Invalid number of colors in palette");
          }
          else {
            if (((byte)this[0x187] & 2) != 0) goto LAB_003943ec;
            pnglibNamespace::png_warning
                      ((long)this,"Ignoring request to write a PLTE chunk in grayscale PNG");
          }
          uVar13 = puVar6[2];
          pbVar27 = _local_518;
        }
        if ((uVar13 & 0x10) != 0) {
          if (((byte)this[0x56] & 8) == 0) {
LAB_0039459c:
            cVar26 = *(char *)((long)puVar6 + 0x25);
          }
          else {
            cVar26 = *(char *)((long)puVar6 + 0x25);
            if (cVar26 == '\x03') {
              uVar13 = 0x100;
              if (*(ushort *)((long)puVar6 + 0x22) < 0x100) {
                uVar13 = (uint)*(ushort *)((long)puVar6 + 0x22);
              }
              if (uVar13 != 0) {
                uVar16 = (ulong)(uVar13 & 3);
                if ((ulong)uVar13 - 1 < 3) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = 0;
                  do {
                    *(byte *)(*(long *)(puVar6 + 0x2e) + uVar18) =
                         ~*(byte *)(*(long *)(puVar6 + 0x2e) + uVar18);
                    pbVar37 = (byte *)(*(long *)(puVar6 + 0x2e) + 1 + uVar18);
                    *pbVar37 = ~*pbVar37;
                    pbVar37 = (byte *)(*(long *)(puVar6 + 0x2e) + 2 + uVar18);
                    *pbVar37 = ~*pbVar37;
                    pbVar37 = (byte *)(*(long *)(puVar6 + 0x2e) + 3 + uVar18);
                    *pbVar37 = ~*pbVar37;
                    uVar18 = uVar18 + 4;
                  } while ((uVar13 & 0x1fc) != uVar18);
                }
                if (uVar16 != 0) {
                  do {
                    *(byte *)(*(long *)(puVar6 + 0x2e) + uVar18) =
                         ~*(byte *)(*(long *)(puVar6 + 0x2e) + uVar18);
                    uVar18 = uVar18 + 1;
                    uVar16 = uVar16 - 1;
                  } while (uVar16 != 0);
                }
              }
              goto LAB_0039459c;
            }
          }
          stack0xfffffffffffffaea = (undefined6)((ulong)pbVar27 >> 0x10);
          _local_518 = pbVar27;
          if (cVar26 == '\0') {
            uVar11 = (ushort)puVar6[0x32];
            if ((int)(uint)uVar11 < 1 << ((byte)this[0x188] & 0x1f)) {
              _local_518 = (byte *)CONCAT62(stack0xfffffffffffffaea,uVar11 << 8 | uVar11 >> 8);
              pnglibNamespace::png_write_complete_chunk(this,0x74524e53,(ulong *)local_518,2);
            }
            else {
              if (((byte)this[0x52] & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              pnglibNamespace::png_warning
                        ((long)this,
                         "Ignoring attempt to write tRNS chunk out-of-range for bit_depth");
            }
          }
          else if (cVar26 == '\x02') {
            uVar11 = *(ushort *)((long)puVar6 + 0xc2);
            uVar4 = (ushort)puVar6[0x31];
            uVar3 = *(ushort *)((long)puVar6 + 0xc6);
            local_518._0_4_ = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar11 << 8 | uVar11 >> 8);
            uStack_512 = (undefined2)((ulong)pbVar27 >> 0x30);
            _local_518 = CONCAT24(uVar3 << 8 | uVar3 >> 8,local_518._0_4_);
            if ((this[0x188] == (pnglibNamespace)0x8) &&
               ((ushort)(uVar4 | uVar11 | uVar3) >> 8 != 0)) {
              if (((byte)this[0x52] & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              pnglibNamespace::png_warning
                        ((long)this,
                         "Ignoring attempt to write 16-bit tRNS chunk when bit_depth is 8");
            }
            else {
              pnglibNamespace::png_write_complete_chunk(this,0x74524e53,(ulong *)local_518,6);
            }
          }
          else if (cVar26 == '\x03') {
            uVar11 = *(ushort *)((long)puVar6 + 0x22);
            if (((ulong)uVar11 == 0) || (*(ushort *)(this + 0x178) < uVar11)) {
              if (((byte)this[0x52] & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              pnglibNamespace::png_warning
                        ((long)this,"Invalid number of transparent colors specified");
            }
            else {
              pnglibNamespace::png_write_complete_chunk
                        (this,0x74524e53,*(ulong **)(puVar6 + 0x2e),(ulong)uVar11);
            }
          }
          else {
            if (((byte)this[0x52] & 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            pnglibNamespace::png_warning((long)this,"Can\'t write tRNS with an alpha channel");
          }
          uVar13 = puVar6[2];
          pbVar27 = _local_518;
        }
        _local_518 = pbVar27;
        if ((uVar13 & 0x20) != 0) {
          if (*(byte *)((long)puVar6 + 0x25) == 3) {
            if ((ushort)*(byte *)((long)puVar6 + 0xca) < *(ushort *)(this + 0x178)) {
              stack0xfffffffffffffae9 = (undefined7)((ulong)pbVar27 >> 8);
              _local_518 = (byte *)CONCAT71(stack0xfffffffffffffae9,*(byte *)((long)puVar6 + 0xca));
              pnglibNamespace::png_write_complete_chunk(this,0x624b4744,(ulong *)local_518,1);
            }
            else {
              pnglibNamespace::png_warning((long)this,"Invalid background palette index");
            }
          }
          else {
            stack0xfffffffffffffaea = (undefined6)((ulong)pbVar27 >> 0x10);
            if ((*(byte *)((long)puVar6 + 0x25) & 2) == 0) {
              uVar11 = *(ushort *)((long)puVar6 + 0xd2);
              if ((int)(uint)uVar11 < 1 << ((byte)this[0x188] & 0x1f)) {
                _local_518 = (byte *)CONCAT62(stack0xfffffffffffffaea,uVar11 << 8 | uVar11 >> 8);
                pnglibNamespace::png_write_complete_chunk(this,0x624b4744,(ulong *)local_518,2);
              }
              else {
                pnglibNamespace::png_warning
                          ((long)this,
                           "Ignoring attempt to write bKGD chunk out-of-range for bit_depth");
              }
            }
            else {
              uVar11 = (ushort)puVar6[0x33];
              uVar4 = *(ushort *)((long)puVar6 + 0xce);
              uVar3 = (ushort)puVar6[0x34];
              local_518._0_4_ = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar11 << 8 | uVar11 >> 8);
              uStack_512 = (undefined2)((ulong)pbVar27 >> 0x30);
              _local_518 = CONCAT24(uVar3 << 8 | uVar3 >> 8,local_518._0_4_);
              if ((this[0x188] == (pnglibNamespace)0x8) &&
                 ((ushort)(uVar4 | uVar11 | uVar3) >> 8 != 0)) {
                pnglibNamespace::png_warning
                          ((long)this,
                           "Ignoring attempt to write 16-bit bKGD chunk when bit_depth is 8");
              }
              else {
                pnglibNamespace::png_write_complete_chunk(this,0x624b4744,(ulong *)local_518,6);
              }
            }
          }
          uVar13 = puVar6[2];
        }
        if ((uVar13 & 0x40) != 0) {
          uVar13 = puVar6[8];
          uVar11 = (ushort)uVar13;
          if (*(ushort *)(this + 0x178) < uVar11) {
            pnglibNamespace::png_warning((long)this,"Invalid number of histogram entries specified")
            ;
          }
          else {
            lVar25 = *(long *)(puVar6 + 0x3c);
            *(undefined4 *)(this + 0x36c) = 0x22;
            local_518._0_4_ =
                 (uint)CONCAT12((char)uVar13 * '\x02',
                                CONCAT11((char)(uVar11 >> 7),(byte)(uVar13 >> 8) >> 7)) << 8;
            _local_518 = (byte *)CONCAT44(0x54534968,local_518._0_4_);
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            (**(code **)(this + 0x18))(this,local_518,8);
            *(undefined4 *)(this + 0x138) = 0x68495354;
            *(undefined4 *)(this + 0x16c) = 0;
            uVar15 = 0;
            if ((~*(uint *)(this + 0x50) & 0x300) != 0) {
              uVar16 = zlibNamespace::crc32_z(0,(ulong *)(local_518 + 4),4);
              uVar15 = (undefined4)uVar16;
              *(undefined4 *)(this + 0x16c) = uVar15;
            }
            *(undefined4 *)(this + 0x36c) = 0x42;
            if ((ulong)uVar11 != 0) {
              uVar16 = 0;
              do {
                uVar4 = *(ushort *)(lVar25 + uVar16 * 2);
                local_628._0_2_ = uVar4 << 8 | uVar4 >> 8;
                if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(this);
                }
                    /* try { // try from 00394a5e to 00394a68 has its CatchHandler @ 00396016 */
                (**(code **)(this + 0x18))(this,local_628,2);
                bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
                if (((byte)this[0x13b] & 0x20) == 0) {
                  bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
                }
                if (bVar7) {
                  uVar18 = zlibNamespace::crc32_z(*(uint *)(this + 0x16c),(ulong *)local_628,2);
                  *(int *)(this + 0x16c) = (int)uVar18;
                }
                uVar16 = uVar16 + 1;
              } while (uVar11 != uVar16);
              uVar15 = *(undefined4 *)(this + 0x16c);
            }
            uVar16 = (ulong)_local_518;
            *(undefined4 *)(this + 0x36c) = 0x82;
            local_518._0_2_ = CONCAT11((char)((uint)uVar15 >> 0x10),(char)((uint)uVar15 >> 0x18));
            local_518._0_3_ = CONCAT12((char)((uint)uVar15 >> 8),local_518._0_2_);
            stack0xfffffffffffffaec = SUB84(uVar16,4);
            local_518._0_4_ = CONCAT13((char)uVar15,local_518._0_3_);
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
                    /* try { // try from 00394b08 to 00394f63 has its CatchHandler @ 0039602c */
            (**(code **)(this + 0x18))(this,local_518,4);
          }
          uVar13 = puVar6[2];
        }
        if ((uVar13 & 0x100) != 0) {
          uVar13 = puVar6[0x35];
          uVar24 = puVar6[0x36];
          uVar36 = puVar6[0x37];
          if (1 < (byte)uVar36) {
            pnglibNamespace::png_warning((long)this,"Unrecognized unit type for oFFs chunk");
          }
          local_518._0_2_ = CONCAT11((char)(uVar13 >> 0x10),(char)(uVar13 >> 0x18));
          local_518._0_3_ = CONCAT12((char)(uVar13 >> 8),local_518._0_2_);
          local_518._0_4_ = CONCAT13((char)uVar13,local_518._0_3_);
          local_518 = (undefined1  [5])CONCAT14((char)(uVar24 >> 0x18),local_518._0_4_);
          _local_518 = CONCAT15((char)(uVar24 >> 0x10),local_518);
          _local_518 = CONCAT16((char)(uVar24 >> 8),_local_518);
          _local_518 = (byte *)CONCAT17((char)uVar24,_local_518);
          uStack_510 = CONCAT71(uStack_510._1_7_,(byte)uVar36);
          pnglibNamespace::png_write_complete_chunk(this,0x6f464673,(ulong *)local_518,9);
          uVar13 = puVar6[2];
        }
        if ((uVar13 & 0x400) != 0) {
          local_64d = (byte)puVar6[0x46];
          if (3 < local_64d) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          local_5b0 = puVar6[0x40];
          local_5ac = puVar6[0x41];
          bVar8 = *(byte *)((long)puVar6 + 0x119);
          local_638 = *(ulong **)(puVar6 + 0x42);
          local_630 = *(long *)(puVar6 + 0x44);
          iVar12 = pnglibNamespace::png_check_keyword
                             ((long)this,*(byte **)(puVar6 + 0x3e),local_518);
          if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          sVar17 = strlen((char *)local_638);
          if (bVar8 == 0) {
LAB_00395ef0:
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          uVar16 = (ulong)(uint)bVar8;
          __ptr = malloc(uVar16 * 8);
          lVar25 = local_630;
          if (__ptr == (void *)0x0) goto LAB_00395ef0;
          local_5c8 = sVar17 + 1;
          local_580 = (ulong)(iVar12 + 1);
          lVar34 = local_580 + local_5c8 + 10;
          uVar18 = 0;
          do {
            sVar17 = strlen(*(char **)(lVar25 + uVar18 * 8));
            lVar30 = (bVar8 - 1 != uVar18) + sVar17;
            *(long *)((long)__ptr + uVar18 * 8) = lVar30;
            lVar34 = lVar34 + lVar30;
            uVar18 = uVar18 + 1;
          } while (uVar16 != uVar18);
          *(undefined4 *)(this + 0x36c) = 0x22;
          local_628[1] = (char)((ulong)lVar34 >> 0x10);
          local_628[0] = (char)((ulong)lVar34 >> 0x18);
          local_628[2] = (undefined1)((ulong)lVar34 >> 8);
          local_628[3] = (char)lVar34;
          stack0xfffffffffffff9dc = 0x4c414370;
          local_5c0 = uVar16;
          if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          (**(code **)(this + 0x18))
                    (this,local_628,8,CONCAT71((uint7)((ulong)lVar34 >> 0x18),local_628[2]));
          uVar16 = local_580;
          *(undefined4 *)(this + 0x138) = 0x7043414c;
          *(undefined4 *)(this + 0x16c) = 0;
          if ((~*(uint *)(this + 0x50) & 0x300) != 0) {
            uVar18 = zlibNamespace::crc32_z(0,(ulong *)(local_628 + 4),4);
            *(int *)(this + 0x16c) = (int)uVar18;
          }
          *(undefined4 *)(this + 0x36c) = 0x42;
          if (uVar16 != 0) {
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            puVar28 = (ulong *)local_518;
            (**(code **)(this + 0x18))(this,puVar28,uVar16);
            bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
            if (((byte)this[0x13b] & 0x20) == 0) {
              bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
            }
            if (bVar7) {
              uVar18 = (ulong)*(uint *)(this + 0x16c);
              do {
                uVar19 = uVar16 & 0xffffffff;
                if ((int)uVar16 == 0) {
                  uVar19 = 0xffffffff;
                }
                uVar18 = zlibNamespace::crc32_z((uint)uVar18,puVar28,uVar19);
                puVar28 = (ulong *)((long)puVar28 + uVar19);
                uVar16 = uVar16 - uVar19;
              } while (uVar16 != 0);
              *(int *)(this + 0x16c) = (int)uVar18;
            }
          }
          local_628[1] = (char)(local_5b0 >> 0x10);
          local_628[0] = (char)(local_5b0 >> 0x18);
          local_628[3] = (char)local_5b0;
          local_628[2] = (char)(local_5b0 >> 8);
          stack0xfffffffffffff9dc =
               CONCAT12((char)(local_5ac >> 8),
                        CONCAT11((char)(local_5ac >> 0x10),(char)(local_5ac >> 0x18)));
          stack0xfffffffffffff9dc = CONCAT13((char)local_5ac,stack0xfffffffffffff9dc);
          local_620 = local_64d;
          local_61f[0] = bVar8;
          if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          (**(code **)(this + 0x18))(this,local_628,10);
          bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
          if (((byte)this[0x13b] & 0x20) == 0) {
            bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
          }
          if (bVar7) {
            uVar16 = zlibNamespace::crc32_z(*(uint *)(this + 0x16c),(ulong *)local_628,10);
            *(int *)(this + 0x16c) = (int)uVar16;
          }
          lVar25 = local_630;
          if ((local_638 != (ulong *)0x0) && (local_5c8 != 0)) {
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            (**(code **)(this + 0x18))(this,local_638,local_5c8);
            lVar25 = local_630;
            bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
            if (((byte)this[0x13b] & 0x20) == 0) {
              bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
            }
            if (bVar7) {
              uVar18 = (ulong)*(uint *)(this + 0x16c);
              uVar16 = local_5c8;
              puVar28 = local_638;
              do {
                uVar19 = uVar16 & 0xffffffff;
                if ((int)uVar16 == 0) {
                  uVar19 = 0xffffffff;
                }
                uVar18 = zlibNamespace::crc32_z((uint)uVar18,puVar28,uVar19);
                puVar28 = (ulong *)((long)puVar28 + uVar19);
                uVar16 = uVar16 - uVar19;
              } while (uVar16 != 0);
              *(int *)(this + 0x16c) = (int)uVar18;
            }
          }
          uVar18 = 0;
          uVar16 = local_5c0;
          do {
            puVar28 = *(ulong **)(lVar25 + uVar18 * 8);
            if (puVar28 != (ulong *)0x0) {
              uVar19 = *(ulong *)((long)__ptr + uVar18 * 8);
              if (uVar19 != 0) {
                if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(this);
                }
                    /* try { // try from 0039504b to 00395055 has its CatchHandler @ 0039601a */
                (**(code **)(this + 0x18))(this,puVar28,uVar19);
                bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
                if (((byte)this[0x13b] & 0x20) == 0) {
                  bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
                }
                uVar16 = local_5c0;
                if (bVar7) {
                  uVar16 = (ulong)*(uint *)(this + 0x16c);
                  do {
                    uVar33 = uVar19 & 0xffffffff;
                    if ((int)uVar19 == 0) {
                      uVar33 = 0xffffffff;
                    }
                    uVar16 = zlibNamespace::crc32_z((uint)uVar16,puVar28,uVar33);
                    puVar28 = (ulong *)((long)puVar28 + uVar33);
                    uVar19 = uVar19 - uVar33;
                  } while (uVar19 != 0);
                  *(int *)(this + 0x16c) = (int)uVar16;
                  uVar16 = local_5c0;
                }
              }
            }
            uVar18 = uVar18 + 1;
            lVar25 = local_630;
          } while (uVar18 != uVar16);
          free(__ptr);
          *(undefined4 *)(this + 0x36c) = 0x82;
          uVar13 = *(uint *)(this + 0x16c);
          local_655 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                      uVar13 << 0x18;
          if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
                    /* try { // try from 00395118 to 00395181 has its CatchHandler @ 0039602c */
          (**(code **)(this + 0x18))(this,&local_655,4);
          uVar13 = puVar6[2];
        }
        if ((uVar13 & 0x4000) != 0) {
          uVar13 = puVar6[0x4f];
          __s = *(char **)(puVar6 + 0x50);
          __s_00 = *(char **)(puVar6 + 0x52);
          sVar17 = strlen(__s);
          __n = strlen(__s_00);
          uVar16 = __n + sVar17 + 2;
          if (uVar16 < 0x41) {
            _local_518 = (byte *)CONCAT71(stack0xfffffffffffffae9,(char)uVar13);
            memcpy(local_518 + 1,__s,sVar17 + 1);
            memcpy(local_518 + sVar17 + 2,__s_00,__n);
                    /* try { // try from 003951b9 to 003952eb has its CatchHandler @ 0039602c */
            pnglibNamespace::png_write_complete_chunk(this,0x7343414c,(ulong *)local_518,uVar16);
          }
          else {
            pnglibNamespace::png_warning((long)this,"Can\'t write sCAL (buffer too small)");
          }
          uVar13 = puVar6[2];
        }
        pbVar27 = _local_518;
        if ((uVar13 & 0x80) != 0) {
          uVar13 = puVar6[0x38];
          uVar24 = puVar6[0x39];
          uVar36 = puVar6[0x3a];
          if (1 < (byte)uVar36) {
            pnglibNamespace::png_warning((long)this,"Unrecognized unit type for pHYs chunk");
          }
          local_518._0_2_ = CONCAT11((char)(uVar13 >> 0x10),(char)(uVar13 >> 0x18));
          local_518._0_3_ = CONCAT12((char)(uVar13 >> 8),local_518._0_2_);
          local_518._0_4_ = CONCAT13((char)uVar13,local_518._0_3_);
          local_518 = (undefined1  [5])CONCAT14((char)(uVar24 >> 0x18),local_518._0_4_);
          _local_518 = CONCAT15((char)(uVar24 >> 0x10),local_518);
          _local_518 = CONCAT16((char)(uVar24 >> 8),_local_518);
          _local_518 = (byte *)CONCAT17((char)uVar24,_local_518);
          uStack_510 = CONCAT71(uStack_510._1_7_,(byte)uVar36);
          pnglibNamespace::png_write_complete_chunk(this,0x70485973,(ulong *)local_518,9);
          uVar13 = puVar6[2];
          pbVar27 = _local_518;
        }
        _local_518 = pbVar27;
        if ((uVar13 & 0x200) != 0) {
          if (((((byte)(*(char *)((long)puVar6 + 0xaa) - 0xdU) < 0xf4) ||
               ((byte)(*(char *)((long)puVar6 + 0xab) - 0x20U) < 0xe1)) ||
              (0x17 < (byte)puVar6[0x2b])) || (0x3c < *(byte *)((long)puVar6 + 0xae))) {
            pnglibNamespace::png_warning((long)this,"Invalid time specified for tIME chunk");
          }
          else {
            local_518._0_2_ = CONCAT11((char)puVar6[0x2a],(char)(puVar6[0x2a] >> 8));
            local_518._0_3_ = CONCAT12(*(char *)((long)puVar6 + 0xaa),local_518._0_2_);
            local_518._0_4_ = CONCAT13(*(char *)((long)puVar6 + 0xab),local_518._0_3_);
            local_518 = (undefined1  [5])CONCAT14((byte)puVar6[0x2b],local_518._0_4_);
            _local_518 = CONCAT15(*(undefined1 *)((long)puVar6 + 0xad),local_518);
            uStack_512._1_1_ = (undefined1)((ulong)pbVar27 >> 0x38);
            _local_518 = CONCAT16(*(byte *)((long)puVar6 + 0xae),_local_518);
            pnglibNamespace::png_write_complete_chunk(this,0x74494d45,(ulong *)local_518,7);
          }
          this[0x4d] = (pnglibNamespace)((byte)this[0x4d] | 2);
          uVar13 = puVar6[2];
        }
        if (((uVar13 & 0x2000) != 0) && (0 < (int)puVar6[0x4e])) {
          lVar25 = 0;
          do {
            lVar34 = *(long *)(puVar6 + 0x4c);
            local_5a8 = lVar25 * 0x20;
            cVar26 = *(char *)(lVar34 + 8 + local_5a8);
            iVar12 = *(int *)(lVar34 + 0x18 + local_5a8);
                    /* try { // try from 00395351 to 003954ee has its CatchHandler @ 00396028 */
            local_558 = lVar25;
            iVar14 = pnglibNamespace::png_check_keyword
                               ((long)this,*(byte **)(lVar34 + local_5a8),local_518);
            if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            uVar16 = (ulong)(cVar26 != '\b') * 4 + 6;
            iVar12 = iVar14 + iVar12 * (int)uVar16 + 2;
            *(undefined4 *)(this + 0x36c) = 0x22;
            local_655._0_2_ = CONCAT11((char)((uint)iVar12 >> 0x10),(char)((uint)iVar12 >> 0x18));
            local_655._0_3_ = CONCAT12((char)((uint)iVar12 >> 8),(undefined2)local_655);
            local_655 = CONCAT13((char)iVar12,(undefined3)local_655);
            local_651 = 0x544c5073;
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            (**(code **)(this + 0x18))(this,&local_655,8);
            *(undefined4 *)(this + 0x138) = 0x73504c54;
            *(undefined4 *)(this + 0x16c) = 0;
            if ((~*(uint *)(this + 0x50) & 0x300) != 0) {
              uVar18 = zlibNamespace::crc32_z(0,(ulong *)&local_651,4);
              *(int *)(this + 0x16c) = (int)uVar18;
            }
            *(undefined4 *)(this + 0x36c) = 0x42;
            if (iVar14 + 1U != 0) {
              if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                pnglibNamespace::png_err(this);
              }
              uVar18 = (ulong)(iVar14 + 1U);
              (**(code **)(this + 0x18))(this,local_518,uVar18);
              bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
              if (((byte)this[0x13b] & 0x20) == 0) {
                bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
              }
              if (bVar7) {
                uVar19 = (ulong)*(uint *)(this + 0x16c);
                puVar28 = (ulong *)local_518;
                do {
                  uVar33 = uVar18 & 0xffffffff;
                  if ((int)uVar18 == 0) {
                    uVar33 = 0xffffffff;
                  }
                  uVar19 = zlibNamespace::crc32_z((uint)uVar19,puVar28,uVar33);
                  puVar28 = (ulong *)((long)puVar28 + uVar33);
                  uVar18 = uVar18 - uVar33;
                } while (uVar18 != 0);
                *(int *)(this + 0x16c) = (int)uVar19;
              }
            }
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
            puVar28 = (ulong *)(local_5a8 + lVar34 + 8);
            (**(code **)(this + 0x18))(this,puVar28,1);
            bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
            if (((byte)this[0x13b] & 0x20) == 0) {
              bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
            }
            if (bVar7) {
              uVar18 = zlibNamespace::crc32_z(*(uint *)(this + 0x16c),puVar28,1);
              *(int *)(this + 0x16c) = (int)uVar18;
            }
            local_578 = (int *)(local_5a8 + lVar34 + 0x18);
            if (0 < *local_578) {
              local_588 = (long *)(local_5a8 + lVar34 + 0x10);
              puVar32 = (ushort *)*local_588;
              local_570 = puVar28;
              do {
                puVar29 = (ulong *)local_628;
                uVar11 = *puVar32;
                if ((char)*puVar28 == '\b') {
                  local_628._0_2_ = CONCAT11((char)puVar32[1],(char)uVar11);
                  local_628[2] = (char)puVar32[2];
                  uVar11 = puVar32[3];
                  puVar31 = local_628 + 3;
                  pbVar27 = local_628 + 4;
                  pbVar37 = &bStack_623;
                }
                else {
                  local_628._0_2_ = uVar11 << 8 | uVar11 >> 8;
                  local_628._2_2_ = puVar32[1] << 8 | puVar32[1] >> 8;
                  uVar11 = puVar32[3];
                  stack0xfffffffffffff9dc =
                       CONCAT12((char)(uVar11 >> 8),puVar32[2] << 8 | puVar32[2] >> 8);
                  puVar31 = &uStack_621;
                  pbVar27 = &local_620;
                  pbVar37 = local_61f;
                }
                *puVar31 = (char)uVar11;
                uVar11 = puVar32[4];
                *pbVar27 = (byte)(uVar11 >> 8);
                *pbVar37 = (byte)uVar11;
                if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
                  pnglibNamespace::png_err(this);
                }
                    /* try { // try from 0039566b to 00395675 has its CatchHandler @ 0039602a */
                (**(code **)(this + 0x18))(this,puVar29,uVar16);
                bVar7 = (~*(uint *)(this + 0x50) & 0x300) != 0;
                if (((byte)this[0x13b] & 0x20) == 0) {
                  bVar7 = (*(uint *)(this + 0x50) & 0x800) == 0;
                }
                if (bVar7) {
                  uVar19 = (ulong)*(uint *)(this + 0x16c);
                  uVar18 = uVar16;
                  do {
                    uVar33 = uVar18 & 0xffffffff;
                    if ((int)uVar18 == 0) {
                      uVar33 = 0xffffffff;
                    }
                    uVar19 = zlibNamespace::crc32_z((uint)uVar19,puVar29,uVar33);
                    puVar29 = (ulong *)((long)puVar29 + uVar33);
                    uVar18 = uVar18 - uVar33;
                  } while (uVar18 != 0);
                  *(int *)(this + 0x16c) = (int)uVar19;
                  puVar28 = local_570;
                }
                puVar32 = puVar32 + 5;
              } while (puVar32 < (ushort *)((long)*local_578 * 10 + *local_588));
            }
            *(undefined4 *)(this + 0x36c) = 0x82;
            uVar13 = *(uint *)(this + 0x16c);
            local_655 = uVar13 >> 0x18 | (uVar13 & 0xff0000) >> 8 | (uVar13 & 0xff00) << 8 |
                        uVar13 << 0x18;
            if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
                    /* try { // try from 00395713 to 00395721 has its CatchHandler @ 00396028 */
            (**(code **)(this + 0x18))(this,&local_655,4);
            lVar25 = local_558 + 1;
          } while (lVar25 < (int)puVar6[0x4e]);
        }
        if (0 < (int)puVar6[0x25]) {
          lVar25 = *(long *)(puVar6 + 0x28);
          lVar30 = 0;
          lVar34 = 0;
          do {
            iVar12 = *(int *)(lVar25 + lVar30);
            if (iVar12 < 1) {
              if (iVar12 == -1) {
                pnglibNamespace::png_write_tEXt
                          (this,*(byte **)(lVar25 + 8 + lVar30),*(ulong **)(lVar25 + 0x10 + lVar30))
                ;
                lVar25 = *(long *)(puVar6 + 0x28);
                goto LAB_00395770;
              }
              if (iVar12 == 0) {
                pnglibNamespace::png_write_zTXt
                          (this,*(byte **)(lVar25 + 8 + lVar30),*(char **)(lVar25 + 0x10 + lVar30));
                lVar25 = *(long *)(puVar6 + 0x28);
                *(undefined4 *)(lVar25 + lVar30) = 0xfffffffe;
              }
            }
            else {
                    /* try { // try from 003957b5 to 00395824 has its CatchHandler @ 00396024 */
              pnglibNamespace::png_write_iTXt
                        (this,iVar12,*(byte **)(lVar25 + 8 + lVar30),
                         *(ulong **)(lVar25 + 0x28 + lVar30),*(ulong **)(lVar25 + 0x30 + lVar30),
                         *(ulong **)(lVar25 + 0x10 + lVar30));
              lVar25 = *(long *)(puVar6 + 0x28);
              if (*(int *)(lVar25 + lVar30) == -1) {
LAB_00395770:
                *(undefined4 *)(lVar25 + lVar30) = 0xfffffffd;
              }
              else {
                *(undefined4 *)(lVar25 + lVar30) = 0xfffffffe;
              }
            }
            lVar34 = lVar34 + 1;
            lVar30 = lVar30 + 0x38;
          } while (lVar34 < (int)puVar6[0x25]);
        }
                    /* try { // try from 00395836 to 00395847 has its CatchHandler @ 0039602c */
        pnglibNamespace::write_unknown_chunks(this,(long)puVar6,2);
        uVar13 = *(uint *)(this + 0x54);
        *(uint *)(this + 0x54) = uVar13 | 8;
        *(undefined4 *)(this + 0x1fd) = 0x80808;
        this[0x201] = (pnglibNamespace)0x8;
        if ((byte)this[0x188] < 8) {
          *(uint *)(this + 0x54) = uVar13 | 0xc;
          this[0x189] = (pnglibNamespace)0x8;
        }
        if (0 < (int)local_63c) {
          uVar13 = local_63c;
          if ((int)local_64c < 1) {
            do {
                    /* try { // try from 00395af0 to 00395afd has its CatchHandler @ 00396018 */
              pnglibNamespace::png_write_row(this,local_648);
              uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
          }
          else {
            local_560 = (ulong)local_63c;
            local_5b4 = local_64c - 1;
            local_568 = local_648 + 3;
            local_5b8 = local_64c + 1;
            uVar16 = 0;
            do {
              puVar20 = (uint *)((long)local_534 * uVar16 + local_548[0]);
              if ((*local_5a0 == 0) || (*(int *)(*local_5a0 + 0xc) != 1)) {
                puVar31 = local_648;
                iVar12 = local_5b8;
                do {
                  uVar13 = *puVar20;
                  uVar39 = uVar13 >> 8;
                  uVar23 = (undefined1)(uVar13 >> 8);
                  uVar36 = uVar13 >> 0x10;
                  uVar10 = (undefined1)(uVar13 >> 0x10);
                  uVar24 = uVar13 >> 0x18;
                  cVar26 = (char)(uVar13 >> 0x18);
                  if (cVar26 != -1) {
                    if (cVar26 == '\0') {
                      uVar10 = 0;
                      uVar23 = 0;
                      uVar13 = 0;
                    }
                    else {
                      uVar13 = ((uVar13 & 0xff) * 0xff) / uVar24;
                      if (0xfe < uVar13) {
                        uVar13 = 0xff;
                      }
                      uVar39 = ((uVar39 & 0xff) * 0xff) / uVar24;
                      if (0xfe < uVar39) {
                        uVar39 = 0xff;
                      }
                      uVar24 = ((uVar36 & 0xff) * 0xff) / uVar24;
                      if (0xfe < uVar24) {
                        uVar24 = 0xff;
                      }
                      uVar10 = (undefined1)uVar24;
                      uVar23 = (undefined1)uVar39;
                    }
                  }
                  *puVar31 = uVar10;
                  puVar31[1] = uVar23;
                  puVar31[2] = (char)uVar13;
                  puVar31[3] = cVar26;
                  puVar20 = (uint *)((long)puVar20 + (long)local_530);
                  iVar12 = iVar12 + -1;
                  puVar31 = puVar31 + 4;
                } while (1 < iVar12);
              }
              else {
                lVar25 = (long)local_530;
                uVar13 = local_64c;
                puVar31 = local_648;
                if ((local_64c & 1) != 0) {
                  *local_648 = *(undefined1 *)((long)puVar20 + 2);
                  local_648[1] = *(undefined1 *)((long)puVar20 + 1);
                  local_648[2] = (char)*puVar20;
                  puVar20 = (uint *)((long)puVar20 + lVar25);
                  uVar13 = local_5b4;
                  puVar31 = local_568;
                }
                if (local_64c != 1) {
                  iVar12 = uVar13 + 2;
                  puVar38 = (undefined1 *)((long)puVar20 + 2);
                  do {
                    *puVar31 = *puVar38;
                    puVar31[1] = puVar38[-1];
                    puVar31[2] = puVar38[-2];
                    puVar31[3] = puVar38[lVar25];
                    puVar31[4] = puVar38[lVar25 + -1];
                    puVar31[5] = puVar38[lVar25 + -2];
                    iVar12 = iVar12 + -2;
                    puVar38 = puVar38 + lVar25 * 2;
                    puVar31 = puVar31 + 6;
                  } while (2 < iVar12);
                }
              }
                    /* try { // try from 00395ac0 to 00395acd has its CatchHandler @ 00396020 */
              pnglibNamespace::png_write_row(this,local_648);
              uVar16 = uVar16 + 1;
            } while (uVar16 != local_560);
          }
        }
        uVar13 = *(uint *)(this + 0x4c);
        if ((uVar13 & 4) == 0) {
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(this);
        }
        if ((int)(uint)*(ushort *)(this + 0x178) < *(int *)(this + 0x17c)) {
          if (((byte)this[0x52] & 0x10) == 0) {
            if (((uVar13 & 0x8000) == 0) || (*(int *)(this + 0x138) == 0)) {
                    /* WARNING: Subroutine does not return */
              pnglibNamespace::png_err(this);
            }
                    /* WARNING: Subroutine does not return */
            pnglibNamespace::png_err(this);
          }
          if (((uVar13 & 0x8000) == 0) || (*(int *)(this + 0x138) == 0)) {
            pnglibNamespace::png_warning((long)this,"Wrote palette index exceeding num_palette");
          }
          else {
                    /* try { // try from 00395b42 to 00395bbe has its CatchHandler @ 0039602c */
            pnglibNamespace::png_chunk_warning((long)this,0x5e4acd);
          }
        }
        pbVar27 = _local_518;
        if (((*(byte *)((long)puVar6 + 9) & 2) != 0) && (((byte)this[0x4d] & 2) == 0)) {
          if (((byte)(*(char *)((long)puVar6 + 0xaa) - 0xdU) < 0xf4) ||
             ((((byte)(*(char *)((long)puVar6 + 0xab) - 0x20U) < 0xe1 || (0x17 < (byte)puVar6[0x2b])
               ) || (0x3c < *(byte *)((long)puVar6 + 0xae))))) {
            pnglibNamespace::png_warning((long)this,"Invalid time specified for tIME chunk");
          }
          else {
            local_518._0_2_ = CONCAT11((char)puVar6[0x2a],(char)(puVar6[0x2a] >> 8));
            local_518._0_3_ = CONCAT12(*(char *)((long)puVar6 + 0xaa),local_518._0_2_);
            local_518._0_4_ = CONCAT13(*(char *)((long)puVar6 + 0xab),local_518._0_3_);
            local_518 = (undefined1  [5])CONCAT14((byte)puVar6[0x2b],local_518._0_4_);
            _local_518 = CONCAT15(*(undefined1 *)((long)puVar6 + 0xad),local_518);
            uStack_512._1_1_ = SUB81(pbVar27,7);
            _local_518 = CONCAT16(*(byte *)((long)puVar6 + 0xae),_local_518);
            pnglibNamespace::png_write_complete_chunk(this,0x74494d45,(ulong *)local_518,7);
          }
        }
        if (0 < (int)puVar6[0x25]) {
          lVar25 = *(long *)(puVar6 + 0x28);
          lVar30 = 0;
          lVar34 = 0;
          do {
            iVar12 = *(int *)(lVar25 + lVar30);
            if (iVar12 < 1) {
              if (iVar12 < 0) {
                if (iVar12 == -1) {
                  pnglibNamespace::png_write_tEXt
                            (this,*(byte **)(lVar25 + 8 + lVar30),
                             *(ulong **)(lVar25 + 0x10 + lVar30));
                  lVar25 = *(long *)(puVar6 + 0x28);
                  goto LAB_00395c00;
                }
              }
              else {
                pnglibNamespace::png_write_zTXt
                          (this,*(byte **)(lVar25 + 8 + lVar30),*(char **)(lVar25 + 0x10 + lVar30));
                lVar25 = *(long *)(puVar6 + 0x28);
                *(undefined4 *)(lVar25 + lVar30) = 0xfffffffe;
              }
            }
            else {
                    /* try { // try from 00395c45 to 00395cb6 has its CatchHandler @ 00396026 */
              pnglibNamespace::png_write_iTXt
                        (this,iVar12,*(byte **)(lVar25 + 8 + lVar30),
                         *(ulong **)(lVar25 + 0x28 + lVar30),*(ulong **)(lVar25 + 0x30 + lVar30),
                         *(ulong **)(lVar25 + 0x10 + lVar30));
              lVar25 = *(long *)(puVar6 + 0x28);
              if (*(int *)(lVar25 + lVar30) == -1) {
LAB_00395c00:
                *(undefined4 *)(lVar25 + lVar30) = 0xfffffffd;
              }
              else {
                *(undefined4 *)(lVar25 + lVar30) = 0xfffffffe;
              }
            }
            lVar34 = lVar34 + 1;
            lVar30 = lVar30 + 0x38;
          } while (lVar34 < (int)puVar6[0x25]);
        }
                    /* try { // try from 00395cbc to 00396013 has its CatchHandler @ 0039602c */
        pnglibNamespace::write_unknown_chunks(this,(long)puVar6,8);
        this[0x4c] = (pnglibNamespace)((byte)this[0x4c] | 8);
        *(undefined4 *)(this + 0x36c) = 0x22;
        _local_518 = (byte *)0x444e454900000000;
        if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(this);
        }
        (**(code **)(this + 0x18))(this,local_518,8);
        *(undefined4 *)(this + 0x138) = 0x49454e44;
        *(undefined4 *)(this + 0x16c) = 0;
        uVar15 = 0;
        if (((byte)this[0x51] & 8) == 0) {
          uVar16 = zlibNamespace::crc32_z(0,(ulong *)(local_518 + 4),4);
          uVar15 = (undefined4)uVar16;
          *(undefined4 *)(this + 0x16c) = uVar15;
        }
        uVar16 = (ulong)_local_518;
        *(undefined4 *)(this + 0x36c) = 0x82;
        local_518._0_2_ = CONCAT11((char)((uint)uVar15 >> 0x10),(char)((uint)uVar15 >> 0x18));
        local_518._0_3_ = CONCAT12((char)((uint)uVar15 >> 8),local_518._0_2_);
        stack0xfffffffffffffaec = SUB84(uVar16,4);
        local_518._0_4_ = CONCAT13((char)uVar15,local_518._0_3_);
        if (*(code **)(this + 0x18) == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          pnglibNamespace::png_err(this);
        }
        (**(code **)(this + 0x18))(this,local_518,4);
        this[0x4c] = (pnglibNamespace)((byte)this[0x4c] | 0x10);
        uVar21 = pnglibNamespace::png_destroy_write_struct(&local_590,&local_550);
      }
      uVar15 = (undefined4)CONCAT71((int7)((ulong)uVar21 >> 8),local_598 != (uint *)0x0);
      goto joined_r0x003939d2;
    }
    pnglibNamespace::png_warning((long)local_518,"Out of memory");
  }
  uVar15 = 0;
joined_r0x003939d2:
  if (local_520 != (long *)0x0) {
    (**(code **)(*local_520 + 8))();
  }
  free(local_648);
  return uVar15;
}


