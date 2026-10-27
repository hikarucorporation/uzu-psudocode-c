// Function : _get_path
// Namespace: 
// Entry    : 0046ff40
// Prototype: undefined8 _get_path(long param_1, long param_2, uint param_3, long param_4, char param_5, undefined8 param_6)
// Body     : 0046ff40 - 0047071b


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* _get_path(OT::cff1::accelerator_t const*, hb_font_t*, unsigned int, hb_draw_session_t&, bool,
   CFF::point_t*) */

undefined8 __cdecl
_get_path(long param_1,long param_2,uint param_3,long param_4,char param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  char *pcVar2;
  ushort *puVar3;
  long lVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  uint uVar9;
  byte *pbVar10;
  char *pcVar11;
  undefined8 uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  char *pcVar18;
  undefined1 auVar19 [16];
  double local_11e8;
  double dStack_11e0;
  long local_11d8;
  long local_11d0;
  undefined8 local_11c8;
  long local_11c0;
  undefined1 local_11b8 [16];
  char local_11a8;
  uint local_11a4;
  double local_11a0 [513];
  undefined8 local_198;
  ulong local_190;
  undefined8 local_188;
  char local_180;
  undefined2 local_17f;
  undefined8 local_17c;
  undefined4 local_174;
  char local_170;
  undefined8 local_16c;
  undefined8 uStack_164;
  undefined4 local_15c;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_78;
  ushort *local_70;
  undefined4 local_68;
  ushort *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined4 local_44;
  double local_40;
  char local_38;
  
  if (*(long *)(param_1 + 0x40) == 0) {
    return 0;
  }
  uVar17 = 0;
  if (*(uint *)(param_1 + 0x128) <= param_3) {
    return 0;
  }
  pcVar2 = *(char **)(param_1 + 0x88);
  pcVar18 = (char *)&_hb_NullPool;
  if (pcVar2 != (char *)&_hb_NullPool) {
    if (*pcVar2 == '\x03') {
      if (*(short *)(pcVar2 + 1) == 0) {
        uVar6 = 0;
      }
      else {
        pcVar18 = pcVar2 + 3;
        uVar6 = *(ushort *)(pcVar2 + 1);
      }
      uVar5 = uVar6 << 8 | uVar6 >> 8;
      if (1 < uVar5) {
        iVar16 = uVar5 - 2;
        iVar13 = 0;
        do {
          while( true ) {
            uVar14 = (uint)(iVar16 + iVar13) >> 1;
            if (param_3 < (ushort)(*(ushort *)(pcVar18 + (ulong)uVar14 * 3) << 8 |
                                  *(ushort *)(pcVar18 + (ulong)uVar14 * 3) >> 8)) break;
            pcVar11 = pcVar18 + (ulong)uVar14 * 3;
            if (param_3 < (ushort)(*(ushort *)(pcVar11 + 3) << 8 | *(ushort *)(pcVar11 + 3) >> 8))
            goto LAB_00470051;
            iVar13 = uVar14 + 1;
            if (iVar16 < iVar13) goto LAB_00470034;
          }
          iVar16 = uVar14 - 1;
        } while (iVar13 <= iVar16);
      }
LAB_00470034:
      if (uVar6 == 0) {
        pcVar11 = (char *)&_hb_NullPool;
      }
      else {
        pcVar11 = pcVar2 + (ulong)(uVar5 - 1) * 3 + 3;
      }
LAB_00470051:
      pbVar10 = (byte *)(pcVar11 + 2);
    }
    else {
      if (*pcVar2 != '\0') goto LAB_00470060;
      pbVar10 = (byte *)(pcVar2 + (ulong)param_3 + 1);
    }
    uVar17 = (ulong)*pbVar10;
  }
LAB_00470060:
  auVar19 = OT::CFFIndex<OT::IntType<unsigned_short,2u>>::operator[]
                      (*(CFFIndex<OT::IntType<unsigned_short,2u>> **)(param_1 + 0x78),param_3);
  local_70 = *(ushort **)(param_1 + 0x70);
  if ((uint)uVar17 < *(uint *)(param_1 + 0x11c)) {
    puVar7 = (undefined4 *)(uVar17 * 0x28 + *(long *)(param_1 + 0x120));
  }
  else {
    puVar7 = &_hb_NullPool;
  }
  puVar3 = *(ushort **)(puVar7 + 8);
  memset(&local_11a4,0,0x100c);
  local_11a8 = '\0';
  local_11b8._0_12_ = auVar19._0_12_;
  local_11b8._12_4_ = 0;
  local_170 = '\0';
  local_150 = 0;
  uStack_148 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_16c = 0;
  uStack_164 = 0;
  local_15c = 0;
  local_190 = auVar19._8_8_ & 0xffffffff;
  local_188 = 0;
  local_17f = 1;
  local_17c = 0;
  local_174 = 0;
  local_58 = 0;
  uStack_50 = 0;
  if ((local_70 == (ushort *)0x0) || (uVar6 = *local_70 << 8 | *local_70 >> 8, uVar6 < 0x4d8)) {
    local_78 = 0x6b;
joined_r0x004701b6:
    if (puVar3 == (ushort *)0x0) goto LAB_0047021c;
LAB_00470206:
    uVar6 = *puVar3 << 8 | *puVar3 >> 8;
    if (uVar6 < 0x4d8) goto LAB_0047021c;
    if (uVar6 < 0x846c) {
      local_68 = 0x46b;
    }
    else {
      local_68 = 0x8000;
    }
  }
  else {
    if (0x846b < uVar6) {
      local_78 = 0x8000;
      goto joined_r0x004701b6;
    }
    local_78 = 0x46b;
    if (puVar3 != (ushort *)0x0) goto LAB_00470206;
LAB_0047021c:
    local_68 = 0x6b;
  }
  local_40 = 0.0;
  local_48 = 0;
  local_44 = 0;
  local_180 = '\0';
  puVar1 = (undefined8 *)(param_4 + 0x18);
  iVar16 = -199999;
  uVar14 = 0;
  local_11d8 = param_2;
  local_11d0 = param_4;
  local_11c8 = param_6;
  local_11c0 = param_1;
  local_60 = puVar3;
  local_38 = param_5;
  do {
    local_198 = auVar19._0_8_;
    uVar9 = uVar14 + 1;
    uVar15 = 0xffff;
    if (auVar19._8_4_ < uVar9) {
LAB_00470300:
      CFF::
      cs_opset_t<CFF::number_t,cff1_cs_opset_path_t,CFF::cff1_cs_interp_env_t,cff1_path_param_t,cff1_path_procs_path_t>
      ::process_op(uVar15,(long *)local_11b8,&local_11d8);
    }
    else {
      uVar8 = local_11b8._0_8_;
      pbVar10 = (byte *)(local_11b8._0_8_ + (ulong)uVar14);
      uVar15 = (uint)*pbVar10;
      local_11b8._12_4_ = uVar9;
      if (*pbVar10 == 0xc) {
        uVar15 = 0xffff;
        if (auVar19._8_4_ < uVar14 + 2) goto LAB_00470300;
        uVar15 = *(byte *)(uVar8 + (ulong)uVar9) | 0x100;
        local_11b8._12_4_ = uVar14 + 2;
      }
      if (uVar15 == 0xe) {
        if ((char)local_48 == '\0') {
          if ((local_11a4 & 1) != 0) {
            local_40 = local_11a0[0];
            local_48 = 0x100;
            local_44 = 1;
          }
          local_48 = CONCAT11(local_48._1_1_,1);
        }
        if (3 < local_11a4) {
          if (*(int *)(param_4 + 0x18) == 0) {
            *puVar1 = 0;
            *(undefined8 *)(param_4 + 0x20) = 0;
            *(undefined4 *)(param_4 + 0x28) = 0;
LAB_00470404:
            local_11e8 = local_11a0[local_11a4 - 4];
LAB_00470411:
            dStack_11e0 = local_11a0[local_11a4 - 3];
LAB_0047041e:
            uVar15 = (uint)local_11a0[local_11a4 - 2];
            uVar9 = 0;
            uVar14 = local_11a4;
            if (uVar15 < 0x100) goto LAB_00470433;
LAB_0047046e:
            uVar14 = uVar14 - 1;
            if (uVar14 < local_11a4) goto LAB_00470479;
LAB_004705ca:
            local_11a8 = '\x01';
            _hb_CrapPool = 0;
            uVar14 = 0;
LAB_0047048c:
            uVar15 = (uint)(byte)(&standard_encoding_to_sid)[uVar14];
            if (*(Charset **)(param_1 + 0x50) == (Charset *)&_hb_NullPool) {
              if (*(int *)(param_1 + 0xf4) != 0) {
                uVar15 = 0;
              }
              if (0xe4 < uVar14) {
                uVar15 = 0;
              }
            }
            else {
              uVar15 = CFF::Charset::get_glyph
                                 (*(Charset **)(param_1 + 0x50),uVar15,*(uint *)(param_1 + 0x128));
            }
            if (((uVar15 != 0) && (uVar9 != 0)) && (local_38 == '\0')) {
              uVar8 = _get_path(param_1,param_2,uVar9,param_4,'\x01',0);
              if ((char)uVar8 != '\0') {
                uVar8 = _get_path(param_1,param_2,uVar15,param_4,'\x01',&local_11e8);
                if ((char)uVar8 != '\0') goto LAB_00470536;
              }
            }
          }
          else {
            lVar4 = *(long *)(param_4 + 8);
            uVar8 = *(undefined8 *)(param_4 + 0x10);
            if ((*(float *)(param_4 + 0x1c) != *(float *)(param_4 + 0x24)) ||
               (NAN(*(float *)(param_4 + 0x1c)) || NAN(*(float *)(param_4 + 0x24)))) {
LAB_0047039b:
              if (*(long *)(lVar4 + 0x38) == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 8);
              }
              (**(code **)(lVar4 + 0x18))(lVar4,uVar8,puVar1,uVar12);
            }
            else if ((*(float *)(param_4 + 0x20) != *(float *)(param_4 + 0x28)) ||
                    (NAN(*(float *)(param_4 + 0x20)) || NAN(*(float *)(param_4 + 0x28))))
            goto LAB_0047039b;
            if (*(long *)(lVar4 + 0x38) == 0) {
              uVar12 = 0;
            }
            else {
              uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x20);
            }
            (**(code **)(lVar4 + 0x30))(lVar4,uVar8,puVar1,uVar12);
            *puVar1 = 0;
            *(undefined8 *)(param_4 + 0x20) = 0;
            *(undefined4 *)(param_4 + 0x28) = 0;
            local_11e8 = 0.0;
            dStack_11e0 = 0.0;
            if (3 < local_11a4) goto LAB_00470404;
            local_11a8 = '\x01';
            _hb_CrapPool = 0;
            if (local_11a4 == 3) goto LAB_00470411;
            if (1 < local_11a4) goto LAB_0047041e;
            uVar15 = 0;
LAB_00470433:
            uVar14 = local_11a4;
            uVar9 = (uint)(byte)(&standard_encoding_to_sid)[uVar15];
            if (*(Charset **)(param_1 + 0x50) != (Charset *)&_hb_NullPool) {
              uVar9 = CFF::Charset::get_glyph
                                (*(Charset **)(param_1 + 0x50),
                                 (uint)(byte)(&standard_encoding_to_sid)[uVar15],
                                 *(uint *)(param_1 + 0x128));
              goto LAB_0047046e;
            }
            if (*(int *)(param_1 + 0xf4) != 0) {
              uVar9 = 0;
            }
            if (0xe4 < uVar15) {
              uVar9 = 0;
            }
            uVar14 = local_11a4 - 1;
            if (local_11a4 <= uVar14) goto LAB_004705ca;
LAB_00470479:
            uVar14 = (uint)local_11a0[uVar14];
            if (uVar14 < 0x100) goto LAB_0047048c;
          }
          local_11b8._12_4_ = local_11b8._8_4_ + 1;
        }
LAB_00470536:
        local_180 = '\x01';
      }
      else if (uVar15 != 0x100) goto LAB_00470300;
      local_11a4 = 0;
      local_44 = 0;
    }
    if (local_170 != '\0') {
      return 0;
    }
    auVar19._8_4_ = local_11b8._8_4_;
    auVar19._0_8_ = local_198;
    auVar19._12_4_ = 0;
    if ((uint)local_11b8._8_4_ < (uint)local_11b8._12_4_) {
      return 0;
    }
    if (local_11a8 != '\0') {
      return 0;
    }
    if (iVar16 == 0) {
      return 0;
    }
    iVar16 = iVar16 + 1;
    uVar14 = local_11b8._12_4_;
  } while (local_180 == '\0');
  if (*(int *)(param_4 + 0x18) == 0) goto LAB_004706d2;
  lVar4 = *(long *)(param_4 + 8);
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  if ((*(float *)(param_4 + 0x1c) != *(float *)(param_4 + 0x24)) ||
     (NAN(*(float *)(param_4 + 0x1c)) || NAN(*(float *)(param_4 + 0x24)))) {
LAB_0047068e:
    if (*(long *)(lVar4 + 0x38) == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 8);
    }
    (**(code **)(lVar4 + 0x18))(lVar4,uVar8,puVar1,uVar12);
  }
  else if ((*(float *)(param_4 + 0x20) != *(float *)(param_4 + 0x28)) ||
          (NAN(*(float *)(param_4 + 0x20)) || NAN(*(float *)(param_4 + 0x28)))) goto LAB_0047068e;
  if (*(long *)(lVar4 + 0x38) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + 0x20);
  }
  (**(code **)(lVar4 + 0x30))(lVar4,uVar8,puVar1,uVar12);
LAB_004706d2:
  *puVar1 = 0;
  *(undefined8 *)(param_4 + 0x20) = 0;
  *(undefined4 *)(param_4 + 0x28) = 0;
  return 1;
}


