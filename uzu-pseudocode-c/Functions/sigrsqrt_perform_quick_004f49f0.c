// Function : sigrsqrt_perform_quick
// Namespace: 
// Entry    : 004f49f0
// Prototype: long sigrsqrt_perform_quick(long param_1)
// Body     : 004f49f0 - 004f4a9f


long sigrsqrt_perform_quick(long param_1)

{
  float fVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  double dVar11;
  
  lVar7 = rsqrt_mantissatab;
  lVar6 = rsqrt_exptab;
  dVar5 = DAT_006533a0;
  dVar4 = DAT_00652be8;
  iVar9 = (int)*(undefined8 *)(param_1 + 0x18);
  if (iVar9 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    lVar3 = *(long *)(param_1 + 0x10);
    lVar8 = 0;
    do {
      fVar1 = *(float *)(lVar2 + lVar8 * 4);
      fVar10 = 0.0;
      if (0.0 <= fVar1) {
        dVar11 = (double)(*(float *)(lVar7 + (ulong)((uint)fVar1 >> 0xb & 0xffc)) *
                         *(float *)(lVar6 + (ulong)((uint)fVar1 >> 0x15 & 0x3fc)));
        fVar10 = (float)((dVar11 * dVar11 * (double)fVar1 * dVar4 + dVar5) * dVar11);
      }
      *(float *)(lVar3 + lVar8 * 4) = fVar10;
      lVar8 = lVar8 + 1;
    } while (iVar9 != (int)lVar8);
  }
  return param_1 + 0x20;
}


