// Function : gverb_size
// Namespace: 
// Entry    : 0056d140
// Prototype: undefined gverb_size(float param_1, long param_2)
// Body     : 0056d140 - 0056d303


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gverb_size(float param_1,long param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  int iVar15;
  int iVar16;
  
  fVar9 = DAT_005d9068;
  if (DAT_005d9068 <= param_1) {
    fVar9 = param_1;
    if (*(float *)(param_2 + 0x48) <= param_1) {
      fVar9 = *(float *)(param_2 + 0x48);
    }
  }
  *(float *)(param_2 + 0x4c) = fVar9;
  fVar9 = (float)*(int *)(param_2 + 0x30) * fVar9;
  fVar10 = fVar9 * _DAT_0065b260;
  fVar12 = fVar9 * _UNK_0065b264;
  fVar14 = fVar9 * _UNK_0065b268;
  fVar9 = fVar9 * _UNK_0065b26c;
  *(float *)(param_2 + 0x58) = fVar10;
  piVar1 = *(int **)(param_2 + 0x88);
  iVar11 = (int)(fVar10 + _DAT_0065b270) + _DAT_0065b280;
  iVar13 = (int)(fVar12 + _UNK_0065b274) + _UNK_0065b284;
  iVar15 = (int)(fVar14 + _UNK_0065b278) + _UNK_0065b288;
  iVar16 = (int)(fVar9 + _UNK_0065b27c) + _UNK_0065b28c;
  *piVar1 = iVar11;
  piVar1[1] = iVar13;
  piVar1[2] = iVar15;
  piVar1[3] = iVar16;
  fVar12 = (float)*(double *)(param_2 + 0xd0);
  puVar2 = *(uint **)(param_2 + 0x80);
  uVar4 = __powisf2(iVar11);
  uVar5 = __powisf2(fVar12,iVar13);
  uVar6 = __powisf2(fVar12,iVar15);
  uVar7 = __powisf2(fVar12,iVar16);
  uVar5 = uVar5 ^ _UNK_006524b4;
  uVar6 = uVar6 ^ _UNK_006524b8;
  uVar7 = uVar7 ^ _UNK_006524bc;
  *puVar2 = uVar4 ^ _DAT_006524b0;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  fVar10 = DAT_0065b1f8;
  fVar9 = *(float *)(param_2 + 0x58);
  piVar1 = *(int **)(param_2 + 0xa8);
  *piVar1 = (int)(DAT_0065b238 * fVar9 + DAT_0065b1f8) + -0x4b3ffffb;
  iVar13 = (int)(DAT_005d9088 * fVar9 + fVar10) + -0x4b3ffffb;
  piVar1[1] = iVar13;
  iVar11 = (int)(fVar9 * _DAT_0065b23c + fVar10) + -0x4b3ffffb;
  piVar1[2] = iVar11;
  piVar1[3] = 5;
  puVar3 = *(undefined4 **)(param_2 + 0xb0);
  uVar8 = __powisf2(fVar12);
  *puVar3 = uVar8;
  uVar8 = __powisf2(fVar12,iVar13);
  puVar3[1] = uVar8;
  uVar8 = __powisf2(fVar12,iVar11);
  puVar3[2] = uVar8;
  puVar3[3] = fVar12 * fVar12 * fVar12 * fVar12 * fVar12;
  return;
}


