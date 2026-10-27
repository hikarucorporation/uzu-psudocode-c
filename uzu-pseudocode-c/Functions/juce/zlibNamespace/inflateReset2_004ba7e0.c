// Function : inflateReset2
// Namespace: juce:zlibNamespace
// Entry    : 004ba7e0
// Prototype: undefined8 inflateReset2(long param_1, uint param_2)
// Body     : 004ba7e0 - 004ba979


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::zlibNamespace::inflateReset2(juce::zlibNamespace::z_stream_s*, int) */

undefined8 __cdecl juce::zlibNamespace::inflateReset2(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0xfffffffe;
  if ((((param_1 != 0) && (*(long *)(param_1 + 0x40) != 0)) &&
      (*(code **)(param_1 + 0x48) != (code *)0x0)) &&
     (((plVar2 = *(long **)(param_1 + 0x38), plVar2 != (long *)0x0 && (*plVar2 == param_1)) &&
      ((int)plVar2[1] - 0x3f34U < 0x20)))) {
    uVar6 = param_2 & 0xf;
    if ((int)param_2 < 0) {
      uVar6 = -param_2;
    }
    iVar5 = 0;
    if ((int)param_2 >= 0) {
      iVar5 = (param_2 >> 4) + 5;
    }
    if ((uVar6 - 8 < 8) || (uVar6 == 0)) {
      if ((plVar2[9] == 0) || (*(uint *)(plVar2 + 7) == uVar6)) {
        *(int *)(plVar2 + 2) = iVar5;
        *(uint *)(plVar2 + 7) = uVar6;
      }
      else {
        (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50));
        plVar2[9] = 0;
        lVar3 = *(long *)(param_1 + 0x40);
        *(int *)(plVar2 + 2) = iVar5;
        *(uint *)(plVar2 + 7) = uVar6;
        if (lVar3 == 0) {
          return 0xfffffffe;
        }
        if (*(long *)(param_1 + 0x48) == 0) {
          return 0xfffffffe;
        }
      }
      plVar2 = *(long **)(param_1 + 0x38);
      if (((plVar2 != (long *)0x0) && (*plVar2 == param_1)) && ((int)plVar2[1] - 0x3f34U < 0x20)) {
        *(undefined8 *)((long)plVar2 + 0x3c) = 0;
        *(undefined4 *)((long)plVar2 + 0x44) = 0;
        plVar2[5] = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined8 *)(param_1 + 0x30) = 0;
        if (*(uint *)(plVar2 + 2) != 0) {
          *(ulong *)(param_1 + 0x60) = (ulong)(*(uint *)(plVar2 + 2) & 1);
        }
        plVar2[1] = 0x3f34;
        *(undefined8 *)((long)plVar2 + 0x14) = 0xffffffff00000000;
        *(undefined4 *)((long)plVar2 + 0x1c) = 0x8000;
        plVar2[6] = 0;
        plVar2[10] = 0;
        *(undefined4 *)(plVar2 + 0xb) = 0;
        plVar1 = plVar2 + 0xab;
        plVar2[0x12] = (long)plVar1;
        plVar2[0xe] = (long)plVar1;
        plVar2[0xd] = (long)plVar1;
        plVar2[0x37d] = -0xffffffff;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


