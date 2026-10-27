// Function : sigrsqrt_perform
// Namespace: 
// Entry    : 004f4aa0
// Prototype: long sigrsqrt_perform(long param_1)
// Body     : 004f4aa0 - 004f4afa


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long sigrsqrt_perform(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  
  dVar4 = _DAT_005d9000;
  iVar5 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar5 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      fVar1 = *(float *)(lVar2 + lVar6 * 4);
      fVar7 = 0.0;
      if (0.0 < fVar1) {
        fVar7 = (float)(dVar4 / SQRT((double)fVar1));
      }
      *(float *)(lVar3 + lVar6 * 4) = fVar7;
      lVar6 = lVar6 + 1;
    } while (iVar5 != (int)lVar6);
  }
  return param_1 + 0x20;
}


