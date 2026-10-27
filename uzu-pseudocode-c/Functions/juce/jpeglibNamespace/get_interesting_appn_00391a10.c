// Function : get_interesting_appn
// Namespace: juce:jpeglibNamespace
// Entry    : 00391a10
// Prototype: ulong get_interesting_appn(long * param_1)
// Body     : 00391a10 - 00391e66


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::get_interesting_appn(juce::jpeglibNamespace::jpeg_decompress_struct*) */

ulong __cdecl juce::jpeglibNamespace::get_interesting_appn(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  byte *pbVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  ulong uVar13;
  byte local_4e [4];
  char local_4a;
  undefined2 local_49;
  byte local_47;
  undefined1 uStack_46;
  byte bStack_45;
  undefined1 uStack_44;
  byte bStack_43;
  byte local_42;
  byte local_41;
  ulong local_40;
  long local_38;
  
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2[1] == 0) {
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 != '\0') {
      pbVar9 = (byte *)*puVar2;
      uVar5 = (ulong)*pbVar9;
      lVar8 = puVar2[1] + -1;
      if (lVar8 != 0) goto LAB_00391a3e;
      goto LAB_00391a68;
    }
LAB_00391b06:
    uVar5 = 0;
    goto LAB_00391e29;
  }
  pbVar9 = (byte *)*puVar2;
  uVar5 = (ulong)*pbVar9;
  lVar8 = puVar2[1] + -1;
  if (lVar8 == 0) {
LAB_00391a68:
    cVar3 = (*(code *)puVar2[3])(param_1);
    if (cVar3 == '\0') goto LAB_00391b06;
    pbVar9 = (byte *)*puVar2;
    lVar8 = puVar2[1];
  }
  else {
LAB_00391a3e:
    pbVar9 = pbVar9 + 1;
  }
  uVar5 = (ulong)*pbVar9 | uVar5 << 8;
  lVar12 = uVar5 - 2;
  uVar13 = 0;
  uVar7 = (uint)lVar12;
  if (uVar5 < 3) {
    uVar7 = 0;
  }
  uVar4 = 0xe;
  if (uVar5 < 0x10) {
    uVar4 = uVar7;
  }
  pbVar9 = pbVar9 + 1;
  lVar8 = lVar8 + -1;
  local_40 = CONCAT44(local_40._4_4_,uVar4);
  if (uVar4 != 0) {
    uVar13 = (ulong)uVar4;
    uVar5 = 0;
    local_38 = lVar12;
    do {
      if (lVar8 == 0) {
        cVar3 = (*(code *)puVar2[3])(param_1);
        if (cVar3 == '\0') goto LAB_00391b06;
        pbVar9 = (byte *)*puVar2;
        lVar8 = puVar2[1];
      }
      local_4e[uVar5] = *pbVar9;
      uVar5 = uVar5 + 1;
      pbVar9 = pbVar9 + 1;
      lVar8 = lVar8 + -1;
    } while (uVar13 != uVar5);
    lVar12 = local_38;
  }
  lVar12 = lVar12 - uVar13;
  iVar1 = *(int *)((long)param_1 + 0x21c);
  if (iVar1 == 0xee) {
    if ((((0xb < (uint)local_40) && (local_4e[0] == 0x41)) && (local_4e[1] == 'd')) &&
       (((local_4e[2] == 'o' && (local_4e[3] == 'b')) && (local_4a == 'e')))) {
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x2c) = ((uint)local_49 | (local_49 & 0xff) << 0x10) >> 8;
      *(uint *)(lVar6 + 0x30) =
           ((uint)CONCAT11(uStack_46,local_47) | (CONCAT11(uStack_46,local_47) & 0xff) << 0x10) >> 8
      ;
      *(uint *)(lVar6 + 0x34) =
           ((uint)CONCAT11(uStack_44,bStack_45) | (CONCAT11(uStack_44,bStack_45) & 0xff) << 0x10) >>
           8;
      *(uint *)(lVar6 + 0x38) = (uint)bStack_43;
      *(undefined4 *)(lVar6 + 0x28) = 0x4e;
      (**(code **)(lVar6 + 8))(param_1,1);
      *(undefined1 *)(param_1 + 0x2d) = 1;
      *(byte *)((long)param_1 + 0x169) = bStack_43;
      goto LAB_00391e0b;
    }
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x50;
    *(uint *)(lVar6 + 0x2c) = (uint)local_40 + (int)lVar12;
LAB_00391dfd:
    (**(code **)(*param_1 + 8))(param_1,1);
  }
  else {
    if (iVar1 == 0xe0) {
      uVar5 = (local_40 & 0xffffffff) + lVar12;
      if ((uint)local_40 < 0xe) {
        if ((5 < (uint)local_40) && (local_4e[0] == 0x4a)) {
LAB_00391d9d:
          if (((local_4e[1] == 'F') && (local_4e[2] == 'X')) &&
             ((local_4e[3] == 'X' && (local_4a == '\0')))) {
            if ((byte)local_49 == 0x13) {
              lVar6 = *param_1;
              *(undefined4 *)(lVar6 + 0x28) = 0x70;
            }
            else if ((byte)local_49 == 0x11) {
              lVar6 = *param_1;
              *(undefined4 *)(lVar6 + 0x28) = 0x6f;
            }
            else {
              if ((byte)local_49 != 0x10) {
                lVar6 = *param_1;
                *(undefined4 *)(lVar6 + 0x28) = 0x5b;
                *(uint *)(lVar6 + 0x2c) = (uint)(byte)local_49;
                *(int *)(*param_1 + 0x30) = (int)uVar5;
                goto LAB_00391dfd;
              }
              lVar6 = *param_1;
              *(undefined4 *)(lVar6 + 0x28) = 0x6e;
            }
            goto LAB_00391de6;
          }
        }
LAB_00391ddc:
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x4f;
      }
      else {
        if (local_4e[0] != 0x4a) goto LAB_00391ddc;
        if ((((local_4e[1] != 'F') || (local_4e[1] = 'F', local_4e[2] != 'I')) ||
            (local_4e[3] != 'F')) || (local_4a != '\0')) goto LAB_00391d9d;
        *(undefined1 *)(param_1 + 0x2c) = 1;
        *(byte *)((long)param_1 + 0x161) = (byte)local_49;
        *(byte *)((long)param_1 + 0x162) = local_49._1_1_;
        *(byte *)((long)param_1 + 0x163) = local_47;
        uVar10 = CONCAT11(bStack_45,uStack_46) << 8 | (ushort)bStack_45;
        *(ushort *)((long)param_1 + 0x164) = uVar10;
        uVar11 = CONCAT11(bStack_43,uStack_44) << 8 | (ushort)bStack_43;
        *(ushort *)((long)param_1 + 0x166) = uVar11;
        local_40 = uVar5;
        local_38 = lVar12;
        if (1 < (byte)((byte)local_49 - 1)) {
          lVar12 = *param_1;
          *(undefined4 *)(lVar12 + 0x28) = 0x7a;
          *(uint *)(lVar12 + 0x2c) = (uint)(byte)local_49;
          *(uint *)(*param_1 + 0x30) = (uint)*(byte *)((long)param_1 + 0x162);
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          local_49._0_1_ = *(byte *)((long)param_1 + 0x161);
          local_49._1_1_ = *(byte *)((long)param_1 + 0x162);
          uVar10 = *(ushort *)((long)param_1 + 0x164);
          uVar11 = *(ushort *)((long)param_1 + 0x166);
          local_47 = *(byte *)((long)param_1 + 0x163);
        }
        lVar12 = *param_1;
        *(uint *)(lVar12 + 0x2c) = (uint)(byte)local_49;
        *(uint *)(lVar12 + 0x30) = (uint)local_49._1_1_;
        *(uint *)(lVar12 + 0x34) = (uint)uVar10;
        *(uint *)(lVar12 + 0x38) = (uint)uVar11;
        *(uint *)(lVar12 + 0x3c) = (uint)local_47;
        *(undefined4 *)(lVar12 + 0x28) = 0x59;
        (**(code **)(lVar12 + 8))(param_1,1);
        if (local_41 != 0 || local_42 != 0) {
          lVar12 = *param_1;
          *(undefined4 *)(lVar12 + 0x28) = 0x5c;
          *(uint *)(lVar12 + 0x2c) = (uint)local_42;
          *(uint *)(*param_1 + 0x30) = (uint)local_41;
          (**(code **)(*param_1 + 8))(param_1,1);
        }
        uVar5 = local_40 - 0xe;
        lVar12 = local_38;
        if (uVar5 == (ulong)local_41 * (ulong)local_42 * 3) goto LAB_00391e0b;
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x5a;
      }
LAB_00391de6:
      *(int *)(lVar6 + 0x2c) = (int)uVar5;
      goto LAB_00391dfd;
    }
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x46;
    *(int *)(lVar6 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
LAB_00391e0b:
  *puVar2 = pbVar9;
  puVar2[1] = lVar8;
  uVar5 = CONCAT71((int7)((ulong)pbVar9 >> 8),1);
  if (0 < lVar12) {
    (**(code **)(param_1[5] + 0x20))(param_1,lVar12);
  }
LAB_00391e29:
  return uVar5 & 0xffffffff;
}


