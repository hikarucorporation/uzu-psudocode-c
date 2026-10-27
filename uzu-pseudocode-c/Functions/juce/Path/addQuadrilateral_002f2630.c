// Function : addQuadrilateral
// Namespace: juce:Path
// Entry    : 002f2630
// Prototype: undefined addQuadrilateral(float param_1, float param_2, float param_3, float param_4, float param_5, float param_6, Path * param_7)
// Body     : 002f2630 - 002f2725


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Path::addQuadrilateral(float, float, float, float, float, float, float, float) */

void __cdecl
juce::Path::addQuadrilateral
          (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
          Path *param_7)

{
  float fVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  
  startNewSubPath(param_1,0.0,param_7);
  lineTo(param_2,0.0,param_7);
  lineTo(param_3,param_4,param_7);
  lineTo(param_5,param_6,param_7);
  iVar2 = *(int *)(param_7 + 0xc);
  if ((iVar2 != 0) &&
     (((iVar2 < 1 ||
       (fVar1 = *(float *)(*(long *)param_7 + (ulong)(iVar2 - 1) * 4), fVar1 != DAT_005de41c)) ||
      (NAN(fVar1) || NAN(DAT_005de41c))))) {
    if ((int)*(uint *)(param_7 + 8) <= iVar2) {
      uVar4 = iVar2 + ((iVar2 - (iVar2 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
      if (*(uint *)(param_7 + 8) != uVar4) {
        if ((int)uVar4 < 1) {
          free(*(void **)param_7);
          *(undefined8 *)param_7 = 0;
        }
        else {
          pvVar3 = realloc(*(void **)param_7,(ulong)uVar4 << 2);
          *(void **)param_7 = pvVar3;
        }
      }
      *(uint *)(param_7 + 8) = uVar4;
      iVar2 = *(int *)(param_7 + 0xc);
    }
    *(int *)(param_7 + 0xc) = iVar2 + 1;
    *(undefined4 *)(*(long *)param_7 + (long)iVar2 * 4) = 0x47c35280;
    return;
  }
  return;
}


