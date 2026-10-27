// Function : jpeg_resync_to_restart
// Namespace: juce:jpeglibNamespace
// Entry    : 00377660
// Prototype: undefined8 jpeg_resync_to_restart(long * param_1, int param_2)
// Body     : 00377660 - 003777ab


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::jpeglibNamespace::jpeg_resync_to_restart(juce::jpeglibNamespace::jpeg_decompress_struct*,
   int) */

undefined8 __cdecl juce::jpeglibNamespace::jpeg_resync_to_restart(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(uint *)((long)param_1 + 0x21c);
  lVar2 = *param_1;
  *(undefined4 *)(lVar2 + 0x28) = 0x7c;
  *(uint *)(lVar2 + 0x2c) = uVar1;
  *(int *)(*param_1 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    if (0xbf < (int)uVar1) {
      if (((uVar1 - 0xd8 < 0xfffffff8) || (uVar1 == (param_2 + 1U & 7 | 0xd0))) ||
         (uVar1 == (param_2 + 2U & 7 | 0xd0))) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 99;
        *(uint *)(lVar2 + 0x2c) = uVar1;
        *(undefined4 *)(*param_1 + 0x30) = 3;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,4);
LAB_0037779b:
        return CONCAT71((int7)((ulong)uVar3 >> 8),1);
      }
      if ((uVar1 != (param_2 - 1U & 7 | 0xd0)) && (uVar1 != (param_2 + 6U & 7 | 0xd0))) {
        lVar2 = *param_1;
        *(undefined4 *)(lVar2 + 0x28) = 99;
        *(uint *)(lVar2 + 0x2c) = uVar1;
        *(undefined4 *)(*param_1 + 0x30) = 1;
        uVar3 = (**(code **)(*param_1 + 8))(param_1,4);
        *(undefined4 *)((long)param_1 + 0x21c) = 0;
        goto LAB_0037779b;
      }
    }
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 99;
    *(uint *)(lVar2 + 0x2c) = uVar1;
    *(undefined4 *)(*param_1 + 0x30) = 2;
    (**(code **)(*param_1 + 8))(param_1,4);
    uVar3 = next_marker(param_1);
    if ((char)uVar3 == '\0') {
      return 0;
    }
    uVar1 = *(uint *)((long)param_1 + 0x21c);
  } while( true );
}


