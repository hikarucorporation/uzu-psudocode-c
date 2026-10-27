// Function : jpeg_set_linear_quality
// Namespace: juce:jpeglibNamespace
// Entry    : 0035d4c0
// Prototype: undefined jpeg_set_linear_quality(long * param_1, int param_2)
// Body     : 0035d4c0 - 0035d643


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_set_linear_quality(juce::jpeglibNamespace::jpeg_compress_struct*,
   int, unsigned char) */

void __cdecl juce::jpeglibNamespace::jpeg_set_linear_quality(long *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long lVar5;
  long lVar6;
  
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x15;
    *(int *)(lVar6 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined2 *)param_1[0xe];
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)(**(code **)param_1[1])(param_1,0,0x82);
    *(undefined1 *)(puVar2 + 0x40) = 0;
    param_1[0xe] = (long)puVar2;
  }
  lVar6 = 0;
  puVar4 = puVar2;
  do {
    lVar5 = (ulong)*(uint *)((long)&std_luminance_quant_tbl + lVar6) * (long)param_2;
    lVar5 = SUB168(SEXT816(lVar5 + 0x32) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVar5 + 0x32;
    uVar3 = (lVar5 >> 6) - (lVar5 >> 0x3f);
    if ((long)uVar3 < 1) {
      uVar3 = 1;
    }
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
    *puVar4 = (short)uVar3;
    lVar6 = lVar6 + 4;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0x100);
  *(undefined1 *)(puVar2 + 0x40) = 0;
  iVar1 = *(int *)((long)param_1 + 0x24);
  if (iVar1 != 100) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x15;
    *(int *)(lVar6 + 0x2c) = iVar1;
    (**(code **)*param_1)(param_1);
  }
  puVar2 = (undefined2 *)param_1[0xf];
  if (puVar2 == (undefined2 *)0x0) {
    puVar2 = (undefined2 *)(**(code **)param_1[1])(param_1,0,0x82);
    *(undefined1 *)(puVar2 + 0x40) = 0;
    param_1[0xf] = (long)puVar2;
  }
  lVar6 = 0;
  puVar4 = puVar2;
  do {
    lVar5 = (ulong)*(uint *)((long)&std_chrominance_quant_tbl + lVar6) * (long)param_2;
    lVar5 = SUB168(SEXT816(lVar5 + 0x32) * SEXT816(-0x5c28f5c28f5c28f5),8) + lVar5 + 0x32;
    uVar3 = (lVar5 >> 6) - (lVar5 >> 0x3f);
    if ((long)uVar3 < 1) {
      uVar3 = 1;
    }
    if (0xfe < uVar3) {
      uVar3 = 0xff;
    }
    *puVar4 = (short)uVar3;
    lVar6 = lVar6 + 4;
    puVar4 = puVar4 + 1;
  } while (lVar6 != 0x100);
  *(undefined1 *)(puVar2 + 0x40) = 0;
  return;
}


