// Function : pow_tilde_perform
// Namespace: 
// Entry    : 005898d0
// Prototype: long pow_tilde_perform(long param_1)
// Body     : 005898d0 - 00589971


long pow_tilde_perform(long param_1)

{
  float fVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  double dVar8;
  
  iVar7 = (int)*(undefined8 *)(param_1 + 0x20);
  if (iVar7 != 0) {
    lVar3 = *(long *)(param_1 + 0x18);
    lVar4 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = 0;
    do {
      fVar1 = *(float *)(lVar4 + lVar6 * 4);
      fVar2 = *(float *)(lVar5 + lVar6 * 4);
      dVar8 = 0.0;
      if (((fVar1 != 0.0) || (0.0 <= fVar2)) &&
         ((0.0 <= fVar1 || (fVar2 - (float)(int)fVar2 == 0.0)))) {
        dVar8 = pow((double)fVar1,(double)fVar2);
      }
      *(float *)(lVar3 + lVar6 * 4) = (float)dVar8;
      lVar6 = lVar6 + 1;
    } while (iVar7 != (int)lVar6);
  }
  return param_1 + 0x28;
}


