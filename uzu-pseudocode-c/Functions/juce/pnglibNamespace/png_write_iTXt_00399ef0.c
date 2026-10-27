// Function : png_write_iTXt
// Namespace: juce:pnglibNamespace
// Entry    : 00399ef0
// Prototype: undefined png_write_iTXt(pnglibNamespace * param_1, int param_2, byte * param_3, ulong * param_4, ulong * param_5, ulong * param_6)
// Body     : 00399ef0 - 0039a417


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::pnglibNamespace::png_write_iTXt(juce::pnglibNamespace::png_struct_def*, int, char const*,
   char const*, char const*, char const*) */

void __cdecl
juce::pnglibNamespace::png_write_iTXt
          (pnglibNamespace *param_1,int param_2,byte *param_3,ulong *param_4,ulong *param_5,
          ulong *param_6)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_var;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  uint uVar9;
  ulong *puVar10;
  int iVar11;
  ulong uVar12;
  pnglibNamespace *this;
  ulong uVar13;
  ulong uVar14;
  undefined4 local_4e0;
  undefined4 local_4dc;
  pnglibNamespace *local_4d8;
  ulong *local_4d0;
  ulong local_4c8;
  ulong *local_4c0;
  ulong local_4b8;
  ulong *local_4b0;
  ulong local_4a8 [12];
  ulong *local_448;
  size_t local_440;
  uint local_438;
  
  iVar3 = png_check_keyword((long)param_1,param_3,(byte *)local_4a8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    png_err(param_1);
  }
  uVar9 = param_2 + 1;
  local_4d8 = param_1;
  if (3 < uVar9) {
LAB_0039a406:
                    /* WARNING: Subroutine does not return */
    png_err(local_4d8);
  }
  *(char *)((long)local_4a8 + (ulong)(iVar3 + 1)) =
       (char)(0x1000100 >> ((char)uVar9 * '\b' & 0x1fU));
  *(undefined1 *)((long)local_4a8 + (ulong)(iVar3 + 2)) = 0;
  if (param_4 == (ulong *)0x0) {
    param_4 = (ulong *)&DAT_005e2ee7;
  }
  local_4b0 = param_4;
  sVar5 = strlen((char *)param_4);
  uVar14 = sVar5 + 1;
  if (param_5 == (ulong *)0x0) {
    param_5 = (ulong *)&DAT_005e2ee7;
  }
  local_4c0 = param_5;
  local_4b8 = (ulong)uVar9;
  sVar5 = strlen((char *)param_5);
  uVar13 = sVar5 + 1;
  if (param_6 == (ulong *)0x0) {
    param_6 = (ulong *)&DAT_005e2ee7;
  }
  iVar4 = iVar3 + 3 + (int)uVar14;
  if (0x7ffffffc - iVar3 < uVar14) {
    iVar4 = 0x7fffffff;
  }
  iVar11 = (int)uVar13 + iVar4;
  if (0x7fffffff - iVar4 < uVar13) {
    iVar11 = 0x7fffffff;
  }
  local_4c8 = CONCAT44(extraout_var,iVar3);
  sVar5 = strlen((char *)param_6);
  local_438 = 0;
  local_4d0 = param_6;
  local_448 = param_6;
  local_440 = sVar5;
  if ((local_4b8 & 1) == 0) {
    if (0x7fffffff - iVar11 < sVar5) goto LAB_0039a406;
    local_438 = (uint)sVar5;
    if (local_4d8 != (pnglibNamespace *)0x0) goto LAB_0039a023;
LAB_0039a2f0:
    bVar1 = false;
    this = local_4d8;
LAB_0039a2f6:
    puVar8 = local_4d0;
  }
  else {
    uVar6 = png_text_compress((long)local_4d8,0x69545874,&local_448,iVar11);
    if ((int)uVar6 != 0) goto LAB_0039a406;
    sVar5 = (size_t)local_438;
    if (local_4d8 == (pnglibNamespace *)0x0) goto LAB_0039a2f0;
LAB_0039a023:
    this = local_4d8;
    iVar11 = (int)sVar5 + iVar11;
    *(undefined4 *)(local_4d8 + 0x36c) = 0x22;
    local_4e0 = CONCAT13((char)iVar11,
                         CONCAT12((char)((uint)iVar11 >> 8),
                                  CONCAT11((char)((uint)iVar11 >> 0x10),(char)((uint)iVar11 >> 0x18)
                                          )));
    local_4dc = 0x74585469;
    if (*(code **)(local_4d8 + 0x18) == (code *)0x0) goto LAB_0039a3fe;
    local_4c8 = (ulong)((int)local_4c8 + 3);
    (**(code **)(local_4d8 + 0x18))(local_4d8,&local_4e0,8);
    *(undefined4 *)(this + 0x138) = 0x69545874;
    *(undefined4 *)(this + 0x16c) = 0;
    if ((~*(uint *)(this + 0x50) & 0x300) != 0) {
      uVar6 = zlibNamespace::crc32_z(0,(ulong *)&local_4dc,4);
      *(int *)(this + 0x16c) = (int)uVar6;
    }
    *(undefined4 *)(this + 0x36c) = 0x42;
    if ((int)local_4c8 != 0) {
      if (*(code **)(this + 0x18) == (code *)0x0) goto LAB_0039a3fe;
      uVar6 = local_4c8 & 0xffffffff;
      puVar10 = local_4a8;
      (**(code **)(this + 0x18))(this,puVar10,uVar6);
      bVar1 = (~*(uint *)(this + 0x50) & 0x300) != 0;
      if (((byte)this[0x13b] & 0x20) == 0) {
        bVar1 = (*(uint *)(this + 0x50) & 0x800) == 0;
      }
      if (bVar1) {
        uVar7 = (ulong)*(uint *)(this + 0x16c);
        do {
          uVar12 = uVar6 & 0xffffffff;
          if ((int)uVar6 == 0) {
            uVar12 = 0xffffffff;
          }
          uVar7 = zlibNamespace::crc32_z((uint)uVar7,puVar10,uVar12);
          puVar10 = (ulong *)((long)puVar10 + uVar12);
          uVar6 = uVar6 - uVar12;
        } while (uVar6 != 0);
        *(int *)(local_4d8 + 0x16c) = (int)uVar7;
        this = local_4d8;
      }
    }
    puVar8 = local_4b0;
    puVar10 = local_4c0;
    if ((local_4b0 != (ulong *)0x0) && (uVar14 != 0)) {
      if (*(code **)(this + 0x18) == (code *)0x0) goto LAB_0039a3fe;
      (**(code **)(this + 0x18))(this,local_4b0,uVar14);
      bVar1 = (~*(uint *)(this + 0x50) & 0x300) != 0;
      if (((byte)this[0x13b] & 0x20) == 0) {
        bVar1 = (*(uint *)(this + 0x50) & 0x800) == 0;
      }
      if (bVar1) {
        uVar6 = (ulong)*(uint *)(this + 0x16c);
        do {
          uVar7 = uVar14 & 0xffffffff;
          if ((int)uVar14 == 0) {
            uVar7 = 0xffffffff;
          }
          uVar6 = zlibNamespace::crc32_z((uint)uVar6,puVar8,uVar7);
          puVar8 = (ulong *)((long)puVar8 + uVar7);
          uVar14 = uVar14 - uVar7;
        } while (uVar14 != 0);
        *(int *)(this + 0x16c) = (int)uVar6;
        puVar10 = local_4c0;
      }
    }
    puVar8 = local_4d0;
    bVar1 = true;
    if ((puVar10 != (ulong *)0x0) && (uVar13 != 0)) {
      if (*(code **)(this + 0x18) == (code *)0x0) goto LAB_0039a3fe;
      (**(code **)(this + 0x18))(this,puVar10,uVar13);
      bVar2 = (~*(uint *)(this + 0x50) & 0x300) != 0;
      if (((byte)this[0x13b] & 0x20) == 0) {
        bVar2 = (*(uint *)(this + 0x50) & 0x800) == 0;
      }
      if (bVar2) {
        uVar14 = (ulong)*(uint *)(this + 0x16c);
        do {
          uVar6 = uVar13 & 0xffffffff;
          if ((int)uVar13 == 0) {
            uVar6 = 0xffffffff;
          }
          uVar14 = zlibNamespace::crc32_z((uint)uVar14,puVar10,uVar6);
          puVar10 = (ulong *)((long)puVar10 + uVar6);
          uVar13 = uVar13 - uVar6;
        } while (uVar13 != 0);
        *(int *)(this + 0x16c) = (int)uVar14;
        bVar1 = true;
        goto LAB_0039a2f6;
      }
    }
  }
  if ((local_4b8 & 1) == 0) {
    if ((!bVar1 || puVar8 == (ulong *)0x0) || (uVar14 = (ulong)local_438, local_438 == 0))
    goto LAB_0039a3b7;
    if (*(code **)(this + 0x18) == (code *)0x0) goto LAB_0039a3fe;
    (**(code **)(this + 0x18))(this,puVar8,uVar14);
    bVar1 = (~*(uint *)(this + 0x50) & 0x300) != 0;
    if (((byte)this[0x13b] & 0x20) == 0) {
      bVar1 = (*(uint *)(this + 0x50) & 0x800) == 0;
    }
    if (bVar1) {
      uVar13 = (ulong)*(uint *)(this + 0x16c);
      do {
        uVar6 = uVar14 & 0xffffffff;
        if ((int)uVar14 == 0) {
          uVar6 = 0xffffffff;
        }
        uVar13 = zlibNamespace::crc32_z((uint)uVar13,puVar8,uVar6);
        puVar8 = (ulong *)((long)puVar8 + uVar6);
        uVar14 = uVar14 - uVar6;
      } while (uVar14 != 0);
      *(int *)(this + 0x16c) = (int)uVar13;
    }
  }
  else {
    png_write_compressed_data_out(this,(long)&local_448);
LAB_0039a3b7:
    if (this == (pnglibNamespace *)0x0) {
      return;
    }
  }
  *(undefined4 *)(this + 0x36c) = 0x82;
  uVar9 = *(uint *)(this + 0x16c);
  local_4e0 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  if (*(code **)(this + 0x18) != (code *)0x0) {
    (**(code **)(this + 0x18))(this,&local_4e0,4);
    return;
  }
LAB_0039a3fe:
                    /* WARNING: Subroutine does not return */
  png_err(this);
}


