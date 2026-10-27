// Function : read_markers
// Namespace: juce:jpeglibNamespace
// Entry    : 0038f880
// Prototype: undefined8 read_markers(long * param_1)
// Body     : 0038f880 - 00391894


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::read_markers(juce::jpeglibNamespace::jpeg_decompress_struct*) */

undefined8 __cdecl juce::jpeglibNamespace::read_markers(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  uint uVar5;
  byte *pbVar6;
  long lVar7;
  uint uVar8;
  
  uVar5 = *(uint *)((long)param_1 + 0x21c);
  do {
    if (uVar5 == 0) {
      if (*(char *)(param_1[0x49] + 0x18) == '\0') {
        puVar1 = (undefined8 *)param_1[5];
        if (puVar1[1] == 0) {
          cVar3 = (*(code *)puVar1[3])(param_1);
          if (cVar3 == '\0') {
            return 0;
          }
          pbVar6 = (byte *)*puVar1;
          uVar8 = (uint)*pbVar6;
          lVar7 = puVar1[1] + -1;
          if (lVar7 != 0) goto LAB_0038f9ba;
LAB_0038f9e1:
          cVar3 = (*(code *)puVar1[3])(param_1);
          if (cVar3 == '\0') {
            return 0;
          }
          pbVar6 = (byte *)*puVar1;
          lVar7 = puVar1[1];
        }
        else {
          pbVar6 = (byte *)*puVar1;
          uVar8 = (uint)*pbVar6;
          lVar7 = puVar1[1] + -1;
          if (lVar7 == 0) goto LAB_0038f9e1;
LAB_0038f9ba:
          pbVar6 = pbVar6 + 1;
        }
        uVar5 = (uint)*pbVar6;
        if (((char)uVar8 != -1) || (*pbVar6 != 0xd8)) {
          lVar2 = *param_1;
          *(undefined4 *)(lVar2 + 0x28) = 0x37;
          *(uint *)(lVar2 + 0x2c) = uVar8;
          *(uint *)(*param_1 + 0x30) = uVar5;
          (**(code **)*param_1)(param_1);
        }
        *(uint *)((long)param_1 + 0x21c) = uVar5;
        *puVar1 = pbVar6 + 1;
        puVar1[1] = lVar7 + -1;
      }
      else {
        uVar4 = next_marker(param_1);
        if ((char)uVar4 == '\0') {
          return 0;
        }
        uVar5 = *(uint *)((long)param_1 + 0x21c);
      }
    }
    if (uVar5 - 1 < 0xfe) {
                    /* WARNING: Could not recover jumptable at 0x0038f927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*(code *)(&DAT_005df744 + *(int *)(&DAT_005df744 + (ulong)(uVar5 - 1) * 4)))();
      return uVar4;
    }
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x46;
    *(uint *)(lVar7 + 0x2c) = uVar5;
    (**(code **)*param_1)(param_1);
    *(undefined4 *)((long)param_1 + 0x21c) = 0;
    uVar5 = 0;
  } while( true );
}


