// Function : crc32_z
// Namespace: juce:zlibNamespace
// Entry    : 004b4d00
// Prototype: ulong crc32_z(uint param_1, ulong * param_2, ulong param_3)
// Body     : 004b4d00 - 004b5584


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::crc32_z(unsigned long, unsigned char const*, unsigned long) */

ulong __cdecl juce::zlibNamespace::crc32_z(uint param_1,ulong *param_2,ulong param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong *puVar18;
  ulong uVar19;
  
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  uVar17 = (ulong)param_1 ^ 0xffffffff;
  if (param_3 < 0x2f) goto joined_r0x004b542b;
  if (((ulong)param_2 & 7) == 0) {
LAB_004b4e5d:
    puVar16 = param_2;
  }
  else {
    puVar16 = (ulong *)((long)param_2 + 1);
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)(byte)*param_2) * 4) ^ uVar17 >> 8
    ;
    if (((ulong)puVar16 & 7) == 0) {
      param_3 = param_3 - 1;
    }
    else {
      puVar16 = (ulong *)((long)param_2 + 2);
      uVar17 = (ulong)*(uint *)(crc_table +
                               (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 1)) * 4) ^
               uVar17 >> 8;
      if (((ulong)puVar16 & 7) == 0) {
        param_3 = param_3 - 2;
      }
      else {
        puVar16 = (ulong *)((long)param_2 + 3);
        uVar17 = (ulong)*(uint *)(crc_table +
                                 (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 2)) * 4) ^
                 uVar17 >> 8;
        if (((ulong)puVar16 & 7) == 0) {
          param_3 = param_3 - 3;
        }
        else {
          puVar16 = (ulong *)((long)param_2 + 4);
          uVar17 = (ulong)*(uint *)(crc_table +
                                   (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 3)) * 4) ^
                   uVar17 >> 8;
          if (((ulong)puVar16 & 7) == 0) {
            param_3 = param_3 - 4;
          }
          else {
            puVar16 = (ulong *)((long)param_2 + 5);
            uVar17 = (ulong)*(uint *)(crc_table +
                                     (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 4)) * 4) ^
                     uVar17 >> 8;
            if (((ulong)puVar16 & 7) == 0) {
              param_3 = param_3 - 5;
            }
            else {
              puVar16 = (ulong *)((long)param_2 + 6);
              uVar17 = (ulong)*(uint *)(crc_table +
                                       (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 5)) * 4) ^
                       uVar17 >> 8;
              if (((ulong)puVar16 & 7) == 0) {
                param_3 = param_3 - 6;
              }
              else {
                puVar16 = (ulong *)((long)param_2 + 7);
                uVar17 = (ulong)*(uint *)(crc_table +
                                         (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 6)) * 4)
                         ^ uVar17 >> 8;
                if (((ulong)puVar16 & 7) != 0) {
                  param_3 = param_3 - 8;
                  pbVar1 = (byte *)((long)param_2 + 7);
                  param_2 = param_2 + 1;
                  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*pbVar1) * 4) ^
                           uVar17 >> 8;
                  goto LAB_004b4e5d;
                }
                param_3 = param_3 - 7;
              }
            }
          }
        }
      }
    }
  }
  uVar19 = 0;
  lVar9 = param_3 / 0x28 - 1;
  if (lVar9 == 0) {
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
  }
  else {
    uVar12 = 0;
    uVar10 = 0;
    uVar11 = 0;
    puVar18 = puVar16;
    uVar13 = uVar19;
    do {
      uVar19 = *puVar18;
      uVar17 = uVar17 ^ uVar19;
      uVar2 = puVar18[1];
      uVar10 = uVar10 ^ uVar2;
      uVar3 = puVar18[2];
      uVar11 = uVar11 ^ uVar3;
      uVar4 = puVar18[3];
      uVar12 = uVar12 ^ uVar4;
      uVar5 = puVar18[4];
      uVar13 = uVar13 ^ uVar5;
      uVar14 = (uint)(uVar19 >> 0x20);
      uVar15 = (uint)(uVar2 >> 0x20);
      uVar6 = (uint)(uVar3 >> 0x20);
      uVar7 = (uint)(uVar4 >> 0x20);
      uVar8 = (uint)(uVar5 >> 0x20);
      uVar17 = (ulong)(*(uint *)(crc_braid_table + (uVar17 >> 8 & 0xff) * 4 + 0x400) ^
                       *(uint *)(crc_braid_table + (uVar17 & 0xff) * 4) ^
                       *(uint *)(crc_braid_table + (ulong)((uint)(uVar17 >> 0xe) & 0x3fc) + 0x800) ^
                       *(uint *)(crc_braid_table + (ulong)((uint)(uVar17 >> 0x16) & 0x3fc) + 0xc00)
                       ^ *(uint *)(crc_braid_table +
                                  (ulong)((uint)(uVar19 >> 0x1e) & 0x3fc) + 0x1000) ^
                       *(uint *)(crc_braid_table + (ulong)(uVar14 >> 6 & 0x3fc) + 0x1400) ^
                       *(uint *)(crc_braid_table + (ulong)(uVar14 >> 0xe & 0x3fc) + 0x1800) ^
                      *(uint *)(crc_braid_table + (uVar19 >> 0x38) * 4 + 0x1c00));
      uVar10 = (ulong)(*(uint *)(crc_braid_table + (uVar10 >> 8 & 0xff) * 4 + 0x400) ^
                       *(uint *)(crc_braid_table + (uVar10 & 0xff) * 4) ^
                       *(uint *)(crc_braid_table + (ulong)((uint)(uVar10 >> 0xe) & 0x3fc) + 0x800) ^
                       *(uint *)(crc_braid_table + (ulong)((uint)(uVar10 >> 0x16) & 0x3fc) + 0xc00)
                       ^ *(uint *)(crc_braid_table + (ulong)((uint)(uVar2 >> 0x1e) & 0x3fc) + 0x1000
                                  ) ^
                       *(uint *)(crc_braid_table + (ulong)(uVar15 >> 6 & 0x3fc) + 0x1400) ^
                       *(uint *)(crc_braid_table + (ulong)(uVar15 >> 0xe & 0x3fc) + 0x1800) ^
                      *(uint *)(crc_braid_table + (uVar2 >> 0x38) * 4 + 0x1c00));
      uVar15 = *(uint *)(crc_braid_table + (uVar11 >> 8 & 0xff) * 4 + 0x400) ^
               *(uint *)(crc_braid_table + (uVar11 & 0xff) * 4) ^
               *(uint *)(crc_braid_table + (ulong)((uint)(uVar11 >> 0xe) & 0x3fc) + 0x800) ^
               *(uint *)(crc_braid_table + (ulong)((uint)(uVar11 >> 0x16) & 0x3fc) + 0xc00) ^
               *(uint *)(crc_braid_table + (ulong)((uint)(uVar3 >> 0x1e) & 0x3fc) + 0x1000) ^
               *(uint *)(crc_braid_table + (ulong)(uVar6 >> 6 & 0x3fc) + 0x1400) ^
               *(uint *)(crc_braid_table + (ulong)(uVar6 >> 0xe & 0x3fc) + 0x1800) ^
               *(uint *)(crc_braid_table + (uVar3 >> 0x38) * 4 + 0x1c00);
      uVar11 = (ulong)uVar15;
      uVar14 = *(uint *)(crc_braid_table + (uVar12 >> 8 & 0xff) * 4 + 0x400) ^
               *(uint *)(crc_braid_table + (uVar12 & 0xff) * 4) ^
               *(uint *)(crc_braid_table + (ulong)((uint)(uVar12 >> 0xe) & 0x3fc) + 0x800) ^
               *(uint *)(crc_braid_table + (ulong)((uint)(uVar12 >> 0x16) & 0x3fc) + 0xc00) ^
               *(uint *)(crc_braid_table + (ulong)((uint)(uVar4 >> 0x1e) & 0x3fc) + 0x1000) ^
               *(uint *)(crc_braid_table + (ulong)(uVar7 >> 6 & 0x3fc) + 0x1400) ^
               *(uint *)(crc_braid_table + (ulong)(uVar7 >> 0xe & 0x3fc) + 0x1800) ^
               *(uint *)(crc_braid_table + (uVar4 >> 0x38) * 4 + 0x1c00);
      uVar12 = (ulong)uVar14;
      uVar13 = (ulong)(*(uint *)(crc_braid_table + (uVar13 >> 8 & 0xff) * 4 + 0x400) ^
                       *(uint *)(crc_braid_table + (uVar13 & 0xff) * 4) ^
                       *(uint *)(crc_braid_table + (ulong)((uint)(uVar13 >> 0xe) & 0x3fc) + 0x800) ^
                       *(uint *)(crc_braid_table + (ulong)((uint)(uVar13 >> 0x16) & 0x3fc) + 0xc00)
                       ^ *(uint *)(crc_braid_table + (ulong)((uint)(uVar5 >> 0x1e) & 0x3fc) + 0x1000
                                  ) ^
                       *(uint *)(crc_braid_table + (ulong)(uVar8 >> 6 & 0x3fc) + 0x1400) ^
                       *(uint *)(crc_braid_table + (ulong)(uVar8 >> 0xe & 0x3fc) + 0x1800) ^
                      *(uint *)(crc_braid_table + (uVar5 >> 0x38) * 4 + 0x1c00));
      puVar18 = puVar18 + 5;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    puVar16 = puVar16 + (param_3 / 0x28) * 5 + -5;
    uVar19 = (ulong)uVar15;
    uVar11 = (ulong)uVar14;
  }
  uVar17 = (ulong)*(uint *)(crc_table + ((uVar17 ^ *puVar16) & 0xff) * 4) ^ (uVar17 ^ *puVar16) >> 8
  ;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = uVar10 ^ puVar16[1] ^
           (ulong)((uint)(uVar17 >> 8) ^ *(uint *)(crc_table + (uVar17 & 0xff) * 4));
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = uVar19 ^ puVar16[2] ^
           (ulong)((uint)(uVar17 >> 8) ^ *(uint *)(crc_table + (uVar17 & 0xff) * 4));
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  param_3 = param_3 % 0x28;
  uVar17 = uVar11 ^ puVar16[3] ^
           (ulong)((uint)(uVar17 >> 8) ^ *(uint *)(crc_table + (uVar17 & 0xff) * 4));
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = uVar13 ^ puVar16[4] ^
           (ulong)((uint)(uVar17 >> 8) ^ *(uint *)(crc_table + (uVar17 & 0xff) * 4));
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff) * 4) ^ uVar17 >> 8;
  uVar17 = (ulong)((uint)(uVar17 >> 8) ^ *(uint *)(crc_table + (uVar17 & 0xff) * 4));
  param_2 = puVar16 + 5;
joined_r0x004b542b:
  for (; 7 < param_3; param_3 = param_3 - 8) {
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)(byte)*param_2) * 4) ^ uVar17 >> 8
    ;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 1)) * 4)
             ^ uVar17 >> 8;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 2)) * 4)
             ^ uVar17 >> 8;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 3)) * 4)
             ^ uVar17 >> 8;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 4)) * 4)
             ^ uVar17 >> 8;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 5)) * 4)
             ^ uVar17 >> 8;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + 6)) * 4)
             ^ uVar17 >> 8;
    pbVar1 = (byte *)((long)param_2 + 7);
    param_2 = param_2 + 1;
    uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)*pbVar1) * 4) ^ uVar17 >> 8;
  }
  if (param_3 != 0) {
    uVar19 = param_3;
    if ((param_3 & 1) != 0) {
      uVar19 = *param_2;
      param_2 = (ulong *)((long)param_2 + 1);
      uVar17 = (ulong)*(uint *)(crc_table + (uVar17 & 0xff ^ (ulong)(byte)uVar19) * 4) ^ uVar17 >> 8
      ;
      uVar19 = param_3 - 1;
    }
    if (param_3 != 1) {
      uVar13 = 0;
      do {
        uVar17 = (ulong)*(uint *)(crc_table +
                                 (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + uVar13)) * 4) ^
                 uVar17 >> 8;
        uVar17 = (ulong)*(uint *)(crc_table +
                                 (uVar17 & 0xff ^ (ulong)*(byte *)((long)param_2 + uVar13 + 1)) * 4)
                 ^ uVar17 >> 8;
        uVar13 = uVar13 + 2;
      } while (uVar19 != uVar13);
    }
  }
  return uVar17 ^ 0xffffffff;
}


