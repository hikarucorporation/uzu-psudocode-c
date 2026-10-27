// Function : grabstring
// Namespace: 
// Entry    : 00580c10
// Prototype: undefined grabstring(uint param_1, long param_2, uint * param_3, int param_4)
// Body     : 00580c10 - 00580e1e


void grabstring(uint param_1,long param_2,uint *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  char cVar3;
  long lVar4;
  float *pfVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  char local_408 [1008];
  
  fVar2 = DAT_0065c264;
  uVar8 = *param_3;
  if (param_4 == 0) {
    pfVar5 = (float *)(param_2 + (long)(int)uVar8 * 0x10 + 8);
    uVar11 = 0;
    uVar12 = uVar8;
    uVar9 = uVar8;
    while( true ) {
      iVar10 = (int)uVar11;
      uVar6 = uVar11;
      if ((int)param_1 <= (int)uVar9) break;
      if ((char)(int)*pfVar5 == '\0') {
        uVar9 = uVar12;
        goto LAB_00580dea;
      }
      local_408[uVar11] = (char)(int)*pfVar5;
      uVar7 = uVar8 + iVar10 + 1;
      *param_3 = uVar7;
      if (uVar11 == 0x3e6) goto LAB_00580de5;
      uVar6 = uVar11 | 1;
      uVar9 = uVar12 + 1;
      if (((int)param_1 <= (int)uVar7) ||
         (cVar3 = (char)(int)*(float *)(param_2 + 8 + (long)(int)uVar7 * 0x10), cVar3 == '\0'))
      goto LAB_00580dea;
      local_408[uVar11 + 1] = cVar3;
      uVar11 = uVar11 + 2;
      uVar12 = uVar12 + 2;
      *param_3 = uVar8 + iVar10 + 2;
      pfVar5 = pfVar5 + 8;
      uVar9 = uVar8 + (int)uVar11;
    }
    uVar9 = uVar8 + iVar10;
  }
  else {
    if ((int)uVar8 < (int)param_1) {
      lVar4 = (long)(int)uVar8 * 0x10;
      if (DAT_0065c264 == *(float *)(param_2 + 8 + lVar4)) {
        pfVar5 = (float *)(lVar4 + param_2 + 0x18);
        do {
          uVar8 = uVar8 + 1;
          *param_3 = uVar8;
          if (param_1 == uVar8) {
            uVar8 = param_1;
            goto LAB_00580d21;
          }
          fVar1 = *pfVar5;
          pfVar5 = pfVar5 + 4;
        } while (fVar2 == fVar1);
      }
    }
LAB_00580d21:
    pfVar5 = (float *)(param_2 + (long)(int)uVar8 * 0x10 + 8);
    uVar11 = 0;
    uVar12 = uVar8;
    uVar9 = uVar8;
    while ((int)uVar9 < (int)param_1) {
      cVar3 = (char)(int)*pfVar5;
      iVar10 = (int)uVar11;
      if ((cVar3 == '\0') || (cVar3 == '/')) {
        uVar12 = uVar8 + iVar10;
        break;
      }
      local_408[uVar11] = cVar3;
      uVar7 = uVar8 + iVar10 + 1;
      *param_3 = uVar7;
      if (uVar11 == 0x3e6) goto LAB_00580de5;
      uVar6 = uVar11 | 1;
      uVar9 = uVar12 + 1;
      if ((int)param_1 <= (int)uVar7) goto LAB_00580dea;
      cVar3 = (char)(int)*(float *)(param_2 + 8 + (long)(int)uVar7 * 0x10);
      if (cVar3 == '\0') goto LAB_00580dea;
      if (cVar3 == '/') goto LAB_00580dea;
      local_408[uVar11 + 1] = cVar3;
      uVar11 = uVar11 + 2;
      uVar12 = uVar12 + 2;
      *param_3 = uVar8 + iVar10 + 2;
      pfVar5 = pfVar5 + 8;
      uVar9 = uVar8 + (int)uVar11;
    }
    uVar6 = uVar11;
    uVar9 = uVar12;
  }
LAB_00580dea:
  local_408[uVar6 & 0xffffffff] = '\0';
  uVar8 = uVar9 + 4 & 0xfffffffc;
  if ((param_4 == 0) || (uVar8 = uVar9, (int)param_1 < (int)uVar9)) {
    if ((int)param_1 < (int)uVar8) {
      uVar8 = param_1;
    }
    *param_3 = uVar8;
  }
  gensym(local_408);
  return;
LAB_00580de5:
  uVar6 = 999;
  uVar9 = uVar8 + 999;
  goto LAB_00580dea;
}


