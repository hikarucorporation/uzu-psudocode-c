// Function : poly_float
// Namespace: 
// Entry    : 00555750
// Prototype: undefined poly_float(ulong param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8, long param_9)
// Body     : 00555750 - 00555abb


/* WARNING: Removing unreachable block (ram,0x005557a8) */
/* WARNING: Removing unreachable block (ram,0x005557da) */

void poly_float(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               long param_9)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  float *pfVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  fVar14 = (float)param_1;
  uVar15 = 0;
  uVar16 = 0;
  uVar1 = *(uint *)(param_9 + 0x30);
  if (*(float *)(param_9 + 0x40) <= 0.0) {
    if ((int)uVar1 < 1) {
      return;
    }
    pfVar6 = *(float **)(param_9 + 0x38);
    if (uVar1 == 1) {
      uVar9 = 0xffffffff;
      uVar12 = 0;
      pfVar7 = (float *)0x0;
      uVar8 = 0;
    }
    else {
      uVar9 = 0xffffffff;
      uVar12 = 0;
      pfVar7 = (float *)0x0;
      uVar8 = 0;
      pfVar13 = pfVar6 + 4;
      do {
        pfVar6 = pfVar13;
        if (((pfVar6[-3] != 0.0) && (fVar14 == pfVar6[-4])) &&
           (*(ulong *)(pfVar6 + -2) < (ulong)uVar9)) {
          pfVar7 = pfVar6 + -4;
          uVar9 = (uint)*(ulong *)(pfVar6 + -2);
          uVar12 = uVar8;
        }
        if (((pfVar6[1] != 0.0) && (fVar14 == *pfVar6)) && (*(ulong *)(pfVar6 + 2) < (ulong)uVar9))
        {
          uVar12 = uVar8 + 1;
          uVar9 = (uint)*(ulong *)(pfVar6 + 2);
          pfVar7 = pfVar6;
        }
        uVar8 = uVar8 + 2;
        pfVar13 = pfVar6 + 8;
      } while ((uVar1 & 0xfffffffe) != uVar8);
      pfVar6 = pfVar6 + 4;
      if ((uVar1 & 1) == 0) goto LAB_005559a8;
    }
    if (((pfVar6[1] != 0.0) && (fVar14 == *pfVar6)) && (*(ulong *)(pfVar6 + 2) < (ulong)uVar9)) {
      pfVar7 = pfVar6;
      uVar12 = uVar8;
    }
LAB_005559a8:
    if (pfVar7 == (float *)0x0) {
      return;
    }
    pfVar7[1] = 0.0;
    lVar4 = *(long *)(param_9 + 0x58);
    *(long *)(param_9 + 0x58) = lVar4 + 1;
    *(long *)(pfVar7 + 2) = lVar4;
    outlet_float(0,0,param_1,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x50));
    outlet_float((ulong)(uint)*pfVar7,CONCAT44(uVar16,uVar15),param_1,param_4,param_5,param_6,
                 param_7,param_8,*(long **)(param_9 + 0x48));
    outlet_float((ulong)(uint)(float)(uVar12 + 1),CONCAT44(uVar16,uVar15),param_1,param_4,param_5,
                 param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    return;
  }
  if ((int)uVar1 < 1) {
    return;
  }
  pfVar6 = *(float **)(param_9 + 0x38);
  if (uVar1 == 1) {
    uVar11 = 0xffffffff;
    uVar12 = 0;
    uVar9 = 0;
    uVar10 = 0xffffffff;
    pfVar13 = (float *)0x0;
    pfVar7 = (float *)0x0;
    uVar8 = 0;
  }
  else {
    uVar11 = 0xffffffff;
    uVar12 = 0;
    uVar9 = 0;
    uVar10 = 0xffffffff;
    pfVar13 = (float *)0x0;
    pfVar7 = (float *)0x0;
    uVar8 = 0;
    pfVar5 = pfVar6 + 4;
    do {
      pfVar6 = pfVar5;
      uVar2 = *(ulong *)(pfVar6 + -2);
      if (pfVar6[-3] == 0.0) {
        if (uVar2 < uVar11) {
          uVar11 = uVar2 & 0xffffffff;
          pfVar13 = pfVar6 + -4;
          uVar12 = uVar8;
        }
      }
      else if (uVar2 < uVar10) {
        uVar10 = uVar2 & 0xffffffff;
        pfVar7 = pfVar6 + -4;
        uVar9 = uVar8;
      }
      uVar2 = *(ulong *)(pfVar6 + 2);
      if (pfVar6[1] == 0.0) {
        if (uVar2 < uVar11) {
          uVar11 = uVar2 & 0xffffffff;
          pfVar13 = pfVar6;
          uVar12 = uVar8 + 1;
        }
      }
      else if (uVar2 < uVar10) {
        uVar10 = uVar2 & 0xffffffff;
        pfVar7 = pfVar6;
        uVar9 = uVar8 + 1;
      }
      uVar8 = uVar8 + 2;
      pfVar5 = pfVar6 + 8;
    } while ((uVar1 & 0xfffffffe) != uVar8);
    pfVar6 = pfVar6 + 4;
    if ((uVar1 & 1) == 0) goto joined_r0x00555929;
  }
  if (pfVar6[1] == 0.0) {
    if (*(ulong *)(pfVar6 + 2) < uVar11) {
      pfVar13 = pfVar6;
      uVar12 = uVar8;
    }
  }
  else if (*(ulong *)(pfVar6 + 2) < uVar10) {
    pfVar7 = pfVar6;
    uVar9 = uVar8;
  }
joined_r0x00555929:
  if (pfVar13 == (float *)0x0) {
    if ((pfVar7 != (float *)0x0) && (*(int *)(param_9 + 0x60) != 0)) {
      uVar10 = param_1;
      outlet_float(0,0,param_1,param_4,param_5,param_6,param_7,param_8,*(long **)(param_9 + 0x50));
      outlet_float((ulong)(uint)*pfVar7,CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,param_6,
                   param_7,param_8,*(long **)(param_9 + 0x48));
      outlet_float((ulong)(uint)(float)(uVar9 + 1),CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,
                   param_6,param_7,param_8,*(long **)(param_9 + 0x18));
      outlet_float((ulong)*(uint *)(param_9 + 0x40),CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,
                   param_6,param_7,param_8,*(long **)(param_9 + 0x50));
      plVar3 = *(long **)(param_9 + 0x48);
      *pfVar7 = fVar14;
      outlet_float(param_1 & 0xffffffff,CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,param_6,
                   param_7,param_8,plVar3);
      outlet_float((ulong)(uint)(float)(uVar9 + 1),CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,
                   param_6,param_7,param_8,*(long **)(param_9 + 0x18));
      lVar4 = *(long *)(param_9 + 0x58);
      *(long *)(param_9 + 0x58) = lVar4 + 1;
      *(long *)(pfVar7 + 2) = lVar4;
    }
  }
  else {
    uVar10 = param_1;
    outlet_float((ulong)(uint)*(float *)(param_9 + 0x40),0,param_1,param_4,param_5,param_6,param_7,
                 param_8,*(long **)(param_9 + 0x50));
    plVar3 = *(long **)(param_9 + 0x48);
    *pfVar13 = fVar14;
    outlet_float(param_1 & 0xffffffff,CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,param_6,param_7
                 ,param_8,plVar3);
    outlet_float((ulong)(uint)(float)(uVar12 + 1),CONCAT44(uVar16,uVar15),uVar10,param_4,param_5,
                 param_6,param_7,param_8,*(long **)(param_9 + 0x18));
    pfVar13[1] = 1.4013e-45;
    lVar4 = *(long *)(param_9 + 0x58);
    *(long *)(param_9 + 0x58) = lVar4 + 1;
    *(long *)(pfVar13 + 2) = lVar4;
  }
  return;
}


