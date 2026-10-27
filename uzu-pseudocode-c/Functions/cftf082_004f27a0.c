// Function : cftf082
// Namespace: 
// Entry    : 004f27a0
// Prototype: undefined cftf082(double param_1, double param_2, double param_3, double * param_4)
// Body     : 004f27a0 - 004f2aad


void cftf082(double param_1,double param_2,double param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  dVar1 = *param_4 - param_4[9];
  dVar8 = param_4[8] + param_4[1];
  dVar3 = param_4[9] + *param_4;
  dVar6 = param_4[1] - param_4[8];
  dVar4 = param_4[4] - param_4[0xd];
  dVar18 = param_4[0xc] + param_4[5];
  dVar7 = (dVar4 - dVar18) * param_1;
  dVar19 = (dVar18 + dVar4) * param_1;
  dVar4 = param_4[0xd] + param_4[4];
  dVar15 = param_4[5] - param_4[0xc];
  dVar18 = (dVar4 - dVar15) * param_1;
  dVar16 = (dVar15 + dVar4) * param_1;
  dVar15 = param_4[2] - param_4[0xb];
  dVar4 = param_4[10] + param_4[3];
  dVar10 = dVar15 * param_2 - dVar4 * param_3;
  dVar5 = dVar15 * param_3 + dVar4 * param_2;
  dVar15 = param_4[0xb] + param_4[2];
  dVar4 = param_4[3] - param_4[10];
  dVar2 = dVar15 * param_3 - dVar4 * param_2;
  dVar20 = dVar15 * param_2 + dVar4 * param_3;
  dVar4 = param_4[6] - param_4[0xf];
  dVar11 = param_4[0xe] + param_4[7];
  dVar15 = dVar4 * param_3 - dVar11 * param_2;
  dVar11 = dVar4 * param_2 + dVar11 * param_3;
  dVar4 = param_4[0xf] + param_4[6];
  dVar17 = param_4[7] - param_4[0xe];
  dVar12 = dVar4 * param_2 - dVar17 * param_3;
  dVar9 = dVar4 * param_3 + dVar17 * param_2;
  dVar4 = dVar7 + dVar1;
  dVar13 = dVar15 + dVar10;
  *param_4 = dVar13 + dVar4;
  dVar17 = dVar19 + dVar8;
  dVar14 = dVar11 + dVar5;
  param_4[1] = dVar14 + dVar17;
  param_4[2] = dVar4 - dVar13;
  param_4[3] = dVar17 - dVar14;
  dVar1 = dVar1 - dVar7;
  dVar8 = dVar8 - dVar19;
  dVar10 = dVar10 - dVar15;
  dVar5 = dVar5 - dVar11;
  param_4[4] = dVar1 - dVar5;
  param_4[5] = dVar10 + dVar8;
  param_4[6] = dVar5 + dVar1;
  param_4[7] = dVar8 - dVar10;
  dVar4 = dVar3 - dVar16;
  dVar15 = dVar18 + dVar6;
  dVar1 = dVar2 - dVar12;
  dVar11 = dVar20 - dVar9;
  param_4[8] = dVar1 + dVar4;
  param_4[9] = dVar11 + dVar15;
  param_4[10] = dVar4 - dVar1;
  param_4[0xb] = dVar15 - dVar11;
  dVar16 = dVar16 + dVar3;
  dVar6 = dVar6 - dVar18;
  dVar12 = dVar12 + dVar2;
  dVar9 = dVar9 + dVar20;
  param_4[0xc] = dVar16 - dVar9;
  param_4[0xd] = dVar12 + dVar6;
  param_4[0xe] = dVar9 + dVar16;
  param_4[0xf] = dVar6 - dVar12;
  return;
}


