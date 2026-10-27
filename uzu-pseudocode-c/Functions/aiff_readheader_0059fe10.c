// Function : aiff_readheader
// Namespace: 
// Entry    : 0059fe10
// Prototype: undefined1 aiff_readheader(int * param_1)
// Body     : 0059fe10 - 005a0242


undefined1 aiff_readheader(int *param_1)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  undefined8 uVar8;
  ssize_t sVar9;
  int *piVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  byte bVar19;
  uint local_180;
  int local_174;
  int local_170;
  undefined8 local_168;
  undefined2 local_160;
  int *local_158;
  int local_150;
  uint local_14c;
  uint local_148;
  ushort local_142;
  ulong local_140;
  undefined2 local_138;
  int local_136;
  
  uVar8 = sys_isbigendian();
  memset(&local_150,0,0x120);
  sVar9 = fd_read(*param_1,0,&local_150,0xc);
  uVar2 = local_148;
  if ((0xb < sVar9) && ((local_148 == 0x46464941 || (local_148 == 0x43464941)))) {
    lVar12 = 0xc;
    sVar9 = fd_read(*param_1,0xc,&local_150,8);
    if (7 < sVar9) {
      uVar16 = (uint)((int)uVar8 == 0);
      local_170 = 2;
      iVar17 = 0xac44;
      local_174 = 1;
      bVar1 = false;
      local_180 = 1;
      local_158 = param_1;
      do {
        uVar7 = swap4s(local_14c,uVar16);
        if (0x52455645 < local_150) {
          if (local_150 == 0x52455646) {
            if (uVar2 == 0x46464941) goto LAB_005a0206;
            sVar9 = fd_read(*param_1,lVar12 + 8,&local_148,(long)(int)uVar7);
            if (sVar9 < (int)uVar7) {
              return 0;
            }
            uVar7 = swap4(local_148,uVar16);
            if (uVar7 != 0xa2805140) {
              piVar10 = __errno_location();
              *piVar10 = -0x3ea;
              return 0;
            }
          }
          goto LAB_0059fee4;
        }
        if (local_150 != 0x4d4d4f43) {
          if (local_150 == 0x444e5343) goto LAB_005a01b8;
          if (local_150 == 0x444e5353) {
            if (bVar1) {
              param_1[4] = iVar17;
              param_1[5] = local_180;
              param_1[6] = local_170;
              *(long *)(param_1 + 8) = lVar12 + 0x10;
              *(long *)(param_1 + 0xc) = (long)(int)(uVar7 - 8);
              param_1[10] = local_174;
              param_1[0xb] = local_180 * local_170;
              return 1;
            }
            goto LAB_005a0206;
          }
          goto LAB_0059fee4;
        }
        sVar9 = fd_read(*param_1,lVar12 + 8,&local_148,(long)(int)uVar7);
        if (sVar9 < (int)uVar7) {
          return 0;
        }
        uVar5 = swap2((ushort)local_148,uVar16);
        uVar6 = swap2(local_142,uVar16);
        bVar14 = 0;
        local_170 = 2;
        bVar3 = 1;
        bVar19 = 0;
        bVar15 = 1;
        switch((uint)uVar6 << 0x1d | uVar6 - 0x10 >> 3) {
        case 0:
          break;
        case 1:
          local_170 = 3;
          bVar14 = 0;
          bVar3 = 1;
          goto LAB_005a007d;
        case 2:
          local_170 = 4;
          bVar14 = 1;
          bVar3 = 0;
LAB_005a007d:
          bVar19 = 0;
          bVar15 = 1;
          break;
        default:
          piVar10 = __errno_location();
          *piVar10 = -0x3eb;
          return 0;
        case 6:
          local_170 = 8;
          bVar19 = 1;
          bVar14 = 0;
          bVar3 = 1;
          bVar15 = 0;
        }
        uVar11 = 0;
        local_160 = local_138;
        local_168 = local_140;
        swapstring4((undefined1 *)((long)&local_168 + 2),uVar16);
        uVar18 = local_168 >> 0x10 & 0xffffffff;
        if (local_168._1_1_ == '\x1e') {
          uVar7 = 0;
        }
        else {
          bVar4 = 0x1e - local_168._1_1_;
          if ((bVar4 & 7) != 0) {
            bVar13 = 0;
            do {
              uVar11 = uVar18;
              uVar18 = uVar11 >> 1;
              bVar13 = bVar13 + 1;
            } while ((bVar4 & 7) != bVar13);
            bVar4 = bVar4 - bVar13;
          }
          uVar7 = (uint)uVar11;
          if (6 < (byte)(local_168._1_1_ - 0x17U)) {
            do {
              uVar11 = uVar18;
              uVar18 = uVar11 >> 8;
              bVar4 = bVar4 - 8;
            } while (bVar4 != 0);
            uVar7 = (uint)(uVar11 >> 7);
          }
        }
        iVar17 = (int)uVar18 + (uVar7 & 1);
        local_180 = (uint)uVar5;
        param_1 = local_158;
        if ((uVar2 == 0x46464941) || (local_136 == 0x454e4f4e)) {
LAB_005a01a0:
          bVar1 = true;
          if ((bool)(bVar14 | bVar19)) {
LAB_005a01b8:
            piVar10 = __errno_location();
            *piVar10 = -0x3eb;
            return 0;
          }
        }
        else {
          if (local_136 == 0x74776f73) {
            local_174 = 0;
            goto LAB_005a01a0;
          }
          if (((local_136 != 0x32336c66) && (local_136 != 0x32334c46)) && (local_136 != 0x34366c66))
          goto LAB_005a01b8;
          bVar1 = true;
          if ((bool)(bVar3 & bVar15)) {
LAB_005a0206:
            piVar10 = __errno_location();
            *piVar10 = -0x3e9;
            return 0;
          }
        }
LAB_0059fee4:
        uVar7 = local_14c;
        uVar8 = sys_isbigendian();
        uVar7 = swap4s(uVar7,(uint)((int)uVar8 == 0));
        lVar12 = (long)(int)uVar7 + lVar12 + 8;
        lVar12 = (ulong)((uint)lVar12 & 1) + lVar12;
        sVar9 = fd_read(*param_1,lVar12,&local_150,8);
        if (sVar9 < 8) {
          lVar12 = -1;
        }
      } while (lVar12 != -1);
    }
  }
  return 0;
}


