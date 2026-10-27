// Function : next_marker
// Namespace: juce:jpeglibNamespace
// Entry    : 0038f6e0
// Prototype: undefined8 next_marker(long * param_1)
// Body     : 0038f6e0 - 0038f832


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::next_marker(juce::jpeglibNamespace::jpeg_decompress_struct*) */

undefined8 __cdecl juce::jpeglibNamespace::next_marker(long *param_1)

{
  byte bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  char cVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  plVar3 = (long *)param_1[5];
  lVar8 = plVar3[1];
  pbVar9 = (byte *)*plVar3;
  if (lVar8 != 0) goto LAB_0038f740;
  do {
    cVar5 = (*(code *)plVar3[3])(param_1);
    if (cVar5 == '\0') {
      return 0;
    }
    pbVar10 = (byte *)((char *)*plVar3 + 1);
    lVar8 = plVar3[1] + -1;
    pbVar6 = pbVar10;
    if (*(char *)*plVar3 != -1) goto LAB_0038f770;
    while( true ) {
      do {
        if (lVar8 == 0) {
          cVar5 = (*(code *)plVar3[3])(param_1);
          if (cVar5 == '\0') {
            return 0;
          }
          pbVar10 = (byte *)*plVar3;
          lVar8 = plVar3[1];
        }
        lVar8 = lVar8 + -1;
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar1 == 0xff);
      if (bVar1 != 0) {
        uVar2 = *(uint *)(param_1[0x49] + 0x20);
        uVar7 = (ulong)uVar2;
        if (uVar2 != 0) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x28) = 0x77;
          *(uint *)(lVar4 + 0x2c) = uVar2;
          *(uint *)(*param_1 + 0x30) = (uint)bVar1;
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          uVar7 = param_1[0x49];
          *(undefined4 *)(uVar7 + 0x20) = 0;
        }
        *(uint *)((long)param_1 + 0x21c) = (uint)bVar1;
        *plVar3 = (long)pbVar10;
        plVar3[1] = lVar8;
        return CONCAT71((int7)(uVar7 >> 8),1);
      }
      *(int *)(param_1[0x49] + 0x20) = *(int *)(param_1[0x49] + 0x20) + 2;
      *plVar3 = (long)pbVar10;
      plVar3[1] = lVar8;
      pbVar9 = pbVar10;
      if (lVar8 == 0) break;
LAB_0038f740:
      pbVar10 = pbVar9 + 1;
      lVar8 = lVar8 + -1;
      pbVar6 = pbVar10;
      if (*pbVar9 != 0xff) {
LAB_0038f770:
        do {
          *(int *)(param_1[0x49] + 0x20) = *(int *)(param_1[0x49] + 0x20) + 1;
          *plVar3 = (long)pbVar6;
          plVar3[1] = lVar8;
          if (lVar8 == 0) {
            cVar5 = (*(code *)plVar3[3])(param_1);
            if (cVar5 == '\0') {
              return 0;
            }
            pbVar6 = (byte *)*plVar3;
            lVar8 = plVar3[1];
          }
          pbVar10 = pbVar6 + 1;
          lVar8 = lVar8 + -1;
          bVar1 = *pbVar6;
          pbVar6 = pbVar10;
        } while (bVar1 != 0xff);
      }
    }
  } while( true );
}


