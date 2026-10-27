// Function : hb_syllabic_insert_dotted_circles
// Namespace: 
// Entry    : 00425070
// Prototype: undefined8 hb_syllabic_insert_dotted_circles(undefined8 param_1_00, undefined8 param_2_00, undefined8 param_3_00, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9, hb_buffer_t * param_10, uint param_11, undefined8 param_12, undefined8 param_13, undefined8 param_14)
// Body     : 00425070 - 00425354


/* WARNING: Unknown calling convention: __cdecl */
/* hb_syllabic_insert_dotted_circles(hb_font_t*, hb_buffer_t*, unsigned int, unsigned int, int, int)
    */

undefined8 __cdecl
hb_syllabic_insert_dotted_circles
          (undefined8 param_1_00,undefined8 param_2_00,undefined8 param_3_00,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
          hb_buffer_t *param_10,uint param_11,undefined8 param_12,undefined8 param_13,
          undefined8 param_14)

{
  byte bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 extraout_XMM0_Qa;
  undefined1 in_stack_ffffffffffffff98;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  
  iVar8 = (int)param_14;
  if (((byte)param_10[0x18] & 0x10) == 0) {
    if (((byte)param_10[0xc0] & 0x40) != 0) {
      local_40 = (undefined4)param_12;
      if ((*(long *)(param_10 + 0xd0) != 0) &&
         (bVar2 = hb_buffer_t::message
                            (param_1_00,param_2_00,param_3_00,param_4,param_5,param_6,param_7,
                             param_8,param_10,param_9,"start inserting dotted-circles",param_12,
                             param_13,param_14,in_stack_ffffffffffffff98), !bVar2)) {
        return 0;
      }
      local_38 = 0;
      lVar5 = *(long *)(*(long *)(param_9 + 0x90) + 0x10);
      if (lVar5 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined8 *)(lVar5 + 0x10);
      }
      local_34 = (**(code **)(*(long *)(param_9 + 0x90) + 0x30))
                           (param_9,*(undefined8 *)(param_9 + 0x98),0x25cc,&local_38);
      uVar3 = (ulong)local_34;
      if (local_34 != 0) {
        local_44 = 0;
        if (iVar8 != -1) {
          local_44 = iVar8;
        }
        local_48 = local_38;
        *(undefined2 *)(param_10 + 0x5a) = 1;
        *(undefined4 *)(param_10 + 100) = 0;
        *(undefined8 *)(param_10 + 0x78) = *(undefined8 *)(param_10 + 0x70);
        *(undefined4 *)(param_10 + 0x5c) = 0;
        uVar4 = (ulong)*(uint *)(param_10 + 0x60);
        if (*(uint *)(param_10 + 0x60) != 0) {
          if ((uint)param_13 == 0xffffffff) {
            uVar4 = 0;
            uVar6 = 0;
            do {
              while( true ) {
                if (param_10[0x58] == (hb_buffer_t)0x0) goto LAB_0042531e;
                lVar5 = *(long *)(param_10 + 0x70);
                bVar1 = *(byte *)(lVar5 + 0xf + uVar4 * 0x14);
                if ((uVar6 == bVar1) || ((bVar1 & 0xf) != param_11)) break;
                local_60 = local_48;
                local_50 = 0;
                local_4e = (undefined1)local_40;
                local_4d = (undefined1)local_44;
                local_58 = *(undefined4 *)(lVar5 + 8 + uVar4 * 0x14);
                local_5c = *(undefined4 *)(lVar5 + 4 + uVar4 * 0x14);
                local_54 = (uint)bVar1 << 0x18;
                hb_buffer_t::output_info(param_10,(undefined8 *)&local_60);
                uVar6 = (uint)bVar1;
                uVar4 = (ulong)*(uint *)(param_10 + 0x5c);
                if (*(uint *)(param_10 + 0x60) <= *(uint *)(param_10 + 0x5c)) goto LAB_0042531e;
              }
              hb_buffer_t::next_glyph(param_10);
              uVar4 = (ulong)*(uint *)(param_10 + 0x5c);
            } while (*(uint *)(param_10 + 0x5c) < *(uint *)(param_10 + 0x60));
          }
          else {
            uVar3 = 0;
            local_3c = 0;
            do {
              while( true ) {
                if (param_10[0x58] == (hb_buffer_t)0x0) goto LAB_0042531e;
                lVar5 = *(long *)(param_10 + 0x70);
                bVar1 = *(byte *)(lVar5 + 0xf + uVar3 * 0x14);
                if ((local_3c == bVar1) || ((bVar1 & 0xf) != param_11)) break;
                local_60 = local_48;
                local_50 = 0;
                local_4e = (undefined1)local_40;
                local_4d = (undefined1)local_44;
                local_58 = *(undefined4 *)(lVar5 + 8 + uVar3 * 0x14);
                local_5c = *(undefined4 *)(lVar5 + 4 + uVar3 * 0x14);
                local_54 = (uint)bVar1 << 0x18;
                if ((uint)uVar3 < (uint)uVar4) {
                  while ((uint)*(byte *)(lVar5 + 0x12 + uVar3 * 0x14) == (uint)param_13) {
                    hb_buffer_t::next_glyph(param_10);
                    uVar3 = (ulong)*(uint *)(param_10 + 0x5c);
                    if (((*(uint *)(param_10 + 0x60) <= *(uint *)(param_10 + 0x5c)) ||
                        (param_10[0x58] == (hb_buffer_t)0x0)) ||
                       (lVar5 = *(long *)(param_10 + 0x70),
                       bVar1 != *(byte *)(lVar5 + 0xf + uVar3 * 0x14))) break;
                  }
                }
                hb_buffer_t::output_info(param_10,(undefined8 *)&local_60);
                local_3c = (uint)bVar1;
                uVar3 = (ulong)*(uint *)(param_10 + 0x5c);
                uVar4 = (ulong)*(uint *)(param_10 + 0x60);
                if (*(uint *)(param_10 + 0x60) <= *(uint *)(param_10 + 0x5c)) goto LAB_0042531e;
              }
              hb_buffer_t::next_glyph(param_10);
              uVar3 = (ulong)*(uint *)(param_10 + 0x5c);
              uVar4 = (ulong)*(uint *)(param_10 + 0x60);
            } while (*(uint *)(param_10 + 0x5c) < *(uint *)(param_10 + 0x60));
          }
        }
LAB_0042531e:
        hb_buffer_t::sync(param_10);
        uVar3 = (ulong)local_34;
        if (*(long *)(param_10 + 0xd0) != 0) {
          hb_buffer_t::message
                    (extraout_XMM0_Qa,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,
                     param_10,param_9,"end inserting dotted-circles",uVar4,uVar7,param_14,
                     in_stack_ffffffffffffff98);
        }
      }
      return CONCAT71((int7)(uVar3 >> 8),(int)uVar3 != 0);
    }
    if (*(long *)(param_10 + 0xd0) != 0) {
      hb_buffer_t::message
                (param_1_00,param_2_00,param_3_00,param_4,param_5,param_6,param_7,param_8,param_10,
                 param_9,"skipped inserting dotted-circles because there is no broken syllables",
                 param_12,param_13,param_14,in_stack_ffffffffffffff98);
      return 0;
    }
  }
  return 0;
}


