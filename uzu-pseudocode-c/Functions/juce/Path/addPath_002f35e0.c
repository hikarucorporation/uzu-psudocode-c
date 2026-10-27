// Function : addPath
// Namespace: juce:Path
// Entry    : 002f35e0
// Prototype: undefined addPath(Path * param_1, long param_2, int param_3)
// Body     : 002f35e0 - 002f379c


/* WARNING: Unknown calling convention: __cdecl -- yet parameter storage is locked */
/* juce::Path::addPath(juce::Path const&) */

void __cdecl juce::Path::addPath(Path *param_1,long param_2,int param_3)

{
  float fVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  
  if (0 < param_3) {
    iVar3 = 0;
    do {
      lVar5 = (long)iVar3;
      iVar6 = iVar3 + 1;
      fVar1 = *(float *)(param_2 + lVar5 * 4);
      if ((fVar1 != DAT_005de3d0) || (NAN(fVar1) || NAN(DAT_005de3d0))) {
        if ((fVar1 == DAT_005de3d8) && (!NAN(fVar1) && !NAN(DAT_005de3d8))) {
          lineTo(*(float *)(param_2 + (long)iVar6 * 4),*(float *)(param_2 + 8 + lVar5 * 4),param_1);
          goto LAB_002f3663;
        }
        if ((fVar1 == DAT_005de3dc) && (!NAN(fVar1) && !NAN(DAT_005de3dc))) {
          quadraticTo(*(float *)(param_2 + (long)iVar6 * 4),*(float *)(param_2 + 8 + lVar5 * 4),
                      *(float *)(param_2 + 0xc + lVar5 * 4),*(float *)(param_2 + 0x10 + lVar5 * 4),
                      param_1);
          iVar3 = iVar3 + 5;
          goto LAB_002f3666;
        }
        if ((fVar1 == DAT_005de3d4) && (!NAN(fVar1) && !NAN(DAT_005de3d4))) {
          cubicTo(*(float *)(param_2 + (long)iVar6 * 4),*(float *)(param_2 + 8 + lVar5 * 4),
                  *(float *)(param_2 + 0xc + lVar5 * 4),*(float *)(param_2 + 0x10 + lVar5 * 4),
                  *(float *)(param_2 + 0x14 + lVar5 * 4),*(float *)(param_2 + 0x18 + lVar5 * 4),
                  param_1);
          iVar3 = iVar3 + 7;
          goto LAB_002f3666;
        }
        iVar3 = iVar6;
        if (((fVar1 == DAT_005de41c) && (!NAN(fVar1) && !NAN(DAT_005de41c))) &&
           (iVar6 = *(int *)(param_1 + 0xc), iVar6 != 0)) {
          if (0 < iVar6) {
            fVar1 = *(float *)(*(long *)param_1 + (ulong)(iVar6 - 1) * 4);
            if ((fVar1 == DAT_005de41c) && (!NAN(fVar1) && !NAN(DAT_005de41c))) goto LAB_002f3668;
          }
          if ((int)*(uint *)(param_1 + 8) <= iVar6) {
            uVar4 = iVar6 + ((iVar6 - (iVar6 + 1 >> 0x1f)) + 1 >> 1) + 9U & 0xfffffff8;
            if (*(uint *)(param_1 + 8) != uVar4) {
              if ((int)uVar4 < 1) {
                free(*(void **)param_1);
                *(undefined8 *)param_1 = 0;
              }
              else {
                pvVar2 = realloc(*(void **)param_1,(ulong)uVar4 << 2);
                *(void **)param_1 = pvVar2;
              }
            }
            *(uint *)(param_1 + 8) = uVar4;
            iVar6 = *(int *)(param_1 + 0xc);
          }
          *(int *)(param_1 + 0xc) = iVar6 + 1;
          *(undefined4 *)(*(long *)param_1 + (long)iVar6 * 4) = 0x47c35280;
        }
      }
      else {
        startNewSubPath(*(float *)(param_2 + (long)iVar6 * 4),*(float *)(param_2 + 8 + lVar5 * 4),
                        param_1);
LAB_002f3663:
        iVar3 = iVar3 + 3;
LAB_002f3666:
      }
LAB_002f3668:
    } while (iVar3 < param_3);
  }
  return;
}


