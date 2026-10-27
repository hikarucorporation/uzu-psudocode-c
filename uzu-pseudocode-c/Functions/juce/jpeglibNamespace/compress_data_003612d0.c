// Function : compress_data
// Namespace: juce:jpeglibNamespace
// Entry    : 003612d0
// Prototype: undefined8 compress_data(long param_1, long param_2)
// Body     : 003612d0 - 00361696


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::compress_data(juce::jpeglibNamespace::jpeg_compress_struct*, unsigned
   char***) */

undefined8 __cdecl juce::jpeglibNamespace::compress_data(long param_1,long param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  undefined2 *__s;
  uint uVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long local_70;
  
  lVar4 = *(long *)(param_1 + 0x1f8);
  iVar12 = *(int *)(lVar4 + 0x18);
  iVar8 = *(int *)(lVar4 + 0x1c);
  lVar14 = lVar4;
  if (iVar12 < iVar8) {
    iVar2 = *(int *)(param_1 + 0x160);
    uVar11 = *(int *)(param_1 + 0x188) - 1;
    uVar17 = *(uint *)(lVar4 + 0x14);
    do {
      if (uVar17 <= uVar11) {
        do {
          iVar8 = *(int *)(param_1 + 0x164);
          if (0 < iVar8) {
            lVar14 = 0;
            __s = (undefined2 *)(lVar4 + 0xc0);
            do {
              lVar5 = *(long *)(param_1 + 0x168 + lVar14 * 8);
              if (0 < *(int *)(lVar5 + 0x3c)) {
                pcVar6 = *(code **)(*(long *)(param_1 + 0x218) + 8 + (long)*(int *)(lVar5 + 4) * 8);
                iVar8 = *(int *)((ulong)(uVar11 <= uVar17) * 0x10 + 0x38 + lVar5);
                iVar3 = *(int *)(lVar5 + 0x44);
                local_70 = (long)iVar12 * (long)*(int *)(lVar5 + 0x28) * 8 +
                           *(long *)(param_2 + (long)*(int *)(lVar5 + 4) * 8);
                iVar15 = 0;
                do {
                  if ((*(uint *)(lVar4 + 0x10) < iVar2 - 1U) ||
                     (iVar12 + iVar15 < *(int *)(lVar5 + 0x4c))) {
                    (*pcVar6)(param_1,lVar5,local_70,__s,iVar3 * uVar17,iVar8);
                    local_70 = local_70 + (long)*(int *)(lVar5 + 0x28) * 8;
                    __s = __s + (long)iVar8 * 0x40;
                    uVar16 = *(int *)(lVar5 + 0x38) - iVar8;
                    if (uVar16 != 0) goto LAB_003614c4;
                  }
                  else {
                    uVar16 = *(uint *)(lVar5 + 0x38);
LAB_003614c4:
                    memset(__s,0,(long)(int)uVar16 << 7);
                    uVar9 = uVar16 - 1;
                    uVar13 = uVar16 & 7;
                    if (uVar13 != 0) {
                      uVar16 = uVar16 & 0xfffffff8;
                      do {
                        *__s = __s[-0x40];
                        __s = __s + 0x40;
                        uVar13 = uVar13 - 1;
                      } while (uVar13 != 0);
                    }
                    if (6 < uVar9) {
                      uVar9 = uVar16 - 8;
                      if ((uVar9 & 8) == 0) {
                        uVar1 = __s[-0x40];
                        *__s = uVar1;
                        __s[0x40] = uVar1;
                        __s[0x80] = uVar1;
                        __s[0xc0] = uVar1;
                        __s[0x100] = uVar1;
                        __s[0x140] = uVar1;
                        __s[0x180] = uVar1;
                        __s[0x1c0] = uVar1;
                        __s = __s + 0x200;
                        uVar16 = uVar9;
                      }
                      if (7 < uVar9) {
                        do {
                          uVar1 = __s[-0x40];
                          *__s = uVar1;
                          __s[0x40] = uVar1;
                          __s[0x80] = uVar1;
                          __s[0xc0] = uVar1;
                          __s[0x100] = uVar1;
                          __s[0x140] = uVar1;
                          __s[0x180] = uVar1;
                          __s[0x1c0] = uVar1;
                          __s[0x200] = uVar1;
                          __s[0x240] = uVar1;
                          __s[0x280] = uVar1;
                          __s[0x2c0] = uVar1;
                          __s[0x300] = uVar1;
                          __s[0x340] = uVar1;
                          __s[0x380] = uVar1;
                          __s[0x3c0] = uVar1;
                          __s = __s + 0x400;
                          uVar16 = uVar16 - 0x10;
                        } while (uVar16 != 0);
                      }
                    }
                  }
                  iVar15 = iVar15 + 1;
                } while (iVar15 < *(int *)(lVar5 + 0x3c));
                iVar8 = *(int *)(param_1 + 0x164);
              }
              lVar14 = lVar14 + 1;
            } while (lVar14 < iVar8);
          }
          cVar7 = (**(code **)(*(long *)(param_1 + 0x220) + 8))(param_1,lVar4 + 0x20);
          if (cVar7 == '\0') {
            *(int *)(lVar4 + 0x18) = iVar12;
            *(uint *)(lVar4 + 0x14) = uVar17;
            return 0;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 <= uVar11);
        iVar8 = *(int *)(lVar4 + 0x1c);
      }
      *(undefined4 *)(lVar4 + 0x14) = 0;
      iVar12 = iVar12 + 1;
      uVar17 = 0;
    } while (iVar12 < iVar8);
    lVar14 = *(long *)(param_1 + 0x1f8);
  }
  *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
  uVar10 = 1;
  if (*(int *)(param_1 + 0x164) < 2) {
    uVar10 = (ulong)*(uint *)((ulong)(*(int *)(param_1 + 0x160) - 1U <= *(uint *)(lVar14 + 0x10)) *
                              0x40 + 0xc + *(long *)(param_1 + 0x168));
  }
  *(int *)(lVar14 + 0x1c) = (int)uVar10;
  *(undefined8 *)(lVar14 + 0x14) = 0;
  return CONCAT71((int7)(uVar10 >> 8),1);
}


