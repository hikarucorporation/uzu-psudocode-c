// Function : log_tilde_perform
// Namespace: 
// Entry    : 005893d0
// Prototype: long log_tilde_perform(long param_1)
// Body     : 005893d0 - 005894a6


long log_tilde_perform(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  
  iVar6 = (int)*(undefined8 *)(param_1 + 0x20);
  if (iVar6 != 0) {
    lVar2 = *(long *)(param_1 + 0x18);
    lVar3 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(param_1 + 0x10);
    lVar5 = 0;
    fVar10 = DAT_0065b9c0;
    do {
      fVar1 = *(float *)(lVar3 + lVar5 * 4);
      fVar7 = fVar10;
      if (0.0 < fVar1) {
        fVar10 = *(float *)(lVar4 + lVar5 * 4);
        dVar8 = log((double)fVar1);
        if ((fVar10 != DAT_005d9038) && (DAT_005d9058 < fVar10)) {
          dVar9 = log((double)fVar10);
          dVar8 = dVar8 / dVar9;
        }
        fVar7 = (float)dVar8;
        fVar10 = DAT_0065b9c0;
      }
      *(float *)(lVar2 + lVar5 * 4) = fVar7;
      lVar5 = lVar5 + 1;
    } while (iVar6 != (int)lVar5);
  }
  return param_1 + 0x28;
}


