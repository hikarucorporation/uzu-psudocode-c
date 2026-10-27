// Function : decompress_data
// Namespace: juce:jpeglibNamespace
// Entry    : 0037b290
// Prototype: char decompress_data(long param_1, long param_2)
// Body     : 0037b290 - 0037b4ac


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::decompress_data(juce::jpeglibNamespace::jpeg_decompress_struct*, unsigned
   char***) */

char __cdecl juce::jpeglibNamespace::decompress_data(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long local_68;
  
  lVar1 = *(long *)(param_1 + 0x230);
  uVar3 = *(int *)(param_1 + 400) - 1;
  while ((*(int *)(param_1 + 0x9c) < *(int *)(param_1 + 0xa4) ||
         ((*(int *)(param_1 + 0x9c) == *(int *)(param_1 + 0xa4) &&
          (*(uint *)(param_1 + 0xa0) <= *(uint *)(param_1 + 0xa8)))))) {
    iVar4 = (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
    if (iVar4 == 0) {
      return '\0';
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar11 = *(long *)(param_1 + 0x120);
    local_68 = 0;
    do {
      if (*(char *)(lVar11 + 0x34) != '\0') {
        lVar7 = (**(code **)(*(long *)(param_1 + 8) + 0x40))
                          (param_1,*(undefined8 *)(lVar1 + 0x88 + local_68 * 8),
                           *(int *)(param_1 + 0xa8) * *(int *)(lVar11 + 0xc),*(int *)(lVar11 + 0xc),
                           0);
        if (*(uint *)(param_1 + 0xa8) < uVar3) {
          uVar6 = *(uint *)(lVar11 + 0xc);
        }
        else {
          uVar6 = *(uint *)(lVar11 + 0x20) % *(uint *)(lVar11 + 0xc);
          if (uVar6 == 0) {
            uVar6 = *(uint *)(lVar11 + 0xc);
          }
        }
        if ((0 < (int)uVar6) && (*(int *)(lVar11 + 0x1c) != 0)) {
          pcVar2 = *(code **)(*(long *)(param_1 + 600) + 8 + local_68 * 8);
          lVar8 = *(long *)(param_2 + local_68 * 8);
          uVar5 = 1;
          uVar9 = 0;
          do {
            if (uVar5 == 0) {
              uVar5 = 0;
            }
            else {
              lVar10 = *(long *)(lVar7 + uVar9 * 8);
              uVar12 = 0;
              do {
                (*pcVar2)(param_1,lVar11,lVar10,lVar8);
                lVar10 = lVar10 + 0x80;
                uVar12 = uVar12 + 1;
                uVar5 = *(uint *)(lVar11 + 0x1c);
              } while (uVar12 < uVar5);
            }
            lVar8 = lVar8 + (long)*(int *)(lVar11 + 0x28) * 8;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar6);
        }
      }
      local_68 = local_68 + 1;
      lVar11 = lVar11 + 0x60;
    } while (local_68 < *(int *)(param_1 + 0x38));
  }
  uVar6 = *(int *)(param_1 + 0xa8) + 1;
  *(uint *)(param_1 + 0xa8) = uVar6;
  return (uVar3 < uVar6) + '\x03';
}


